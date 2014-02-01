// TsClientPlgn.cpp : Implementation of CTsClientPlgn

#include "stdafx.h"
#include "TsClientPlgn.h"
#include "resource.h"
#include "Common.h"
#include "Debug.h"

#define leave goto _Function_Exit;

// CTsClientPlgn

/*
 *  Called immediately after instantiating the COM class
 */
HRESULT CTsClientPlgn::Initialize(
    IWTSVirtualChannelManager *pChannelMgr
    )
{
    HRESULT hr;

    try
    {
        //
        // Get the client desktop folder
        //
        WCHAR szDesktopPath[MAX_PATH+1];
        BOOL bRet = SHGetSpecialFolderPath(NULL,
            szDesktopPath,
            CSIDL_DESKTOP,
            FALSE);

        hr = (bRet? S_OK : TELEP_E_SHELLCALL);
        LEAVE_IF_FAILED("SHGetSpecialFolderPath failed");

        //
        // Push the desktop to the list of dirs
        //

        WString strDesktop(szDesktopPath);
        _vDirList.push_back(strDesktop);

        //
        // Create the DVC listener
        //

        hr = pChannelMgr->CreateListener(TSTELE_CHANNEL_NAME,
            0,
            this,
            &_spListener);
        LEAVE_IF_FAILED("CreateListener failed");
    }
    catch (std::bad_alloc&)
    {
        hr = E_OUTOFMEMORY;
    }
    catch (std::exception&)
    {
        hr = E_UNEXPECTED;
    }

_Function_Exit:

    return hr;
}

/*
 *  Called when the TS client is connected to the TS server
 */
HRESULT CTsClientPlgn::Connected()
{
    return S_OK;
}

/*
 *  Called when the TS client is disconnected to the TS server
 *  Might be followed by another Connected() call
 */
HRESULT CTsClientPlgn::Disconnected(
    DWORD dwDisconnectCode
    )
{
    UNREFERENCED_PARAMETER(dwDisconnectCode);
    return S_OK;
}

/*
 *  The last method called by the TS client before 
 *  terminating the object
 */
HRESULT CTsClientPlgn::Terminated()
{
    return S_OK;
}

// IWTSListenerCallback

/*
 *  Called whenever a request for new channel connection
 *  from the server is received.
 */
HRESULT CTsClientPlgn::OnNewChannelConnection(
    IWTSVirtualChannel *pChannel,
    BSTR data,           // optional data passed as part of the connect method
    BOOL *pbAccept,      // the callee should return TRUE if connection is accepted
    IWTSVirtualChannelCallback **ppCallback // connection related events
    )
{
    UNREFERENCED_PARAMETER(data);

    *pbAccept = TRUE; // always accept connection
    
    *ppCallback = this; // provide the plgn object as the callback
    AddRef();

    _spChannel = pChannel; // save the channel

    return S_OK;
}

// IWTSChannelCallback

/*
 *  Called whenever a full message from the server is received
 *  The message is fully reassembled and has the exact size
 *  as the Write() call on the server
 */
HRESULT CTsClientPlgn::OnDataReceived(
    ULONG cbSize,             // size of data in bytes
    BYTE *pBuffer             // data buffer
    )
{
    HRESULT hr;
    PTELEP_PACKET_HEADER pTPH = (PTELEP_PACKET_HEADER) pBuffer;
    USHORT usLen = pTPH->PacketSize;

    ULONG Verif;
    hr = ULongAdd(usLen, sizeof(TELEP_PACKET_HEADER), &Verif);

    if (SUCCEEDED(hr) && Verif > cbSize)
    {
        hr = TELEP_E_PROTOCOL;
    }
    LEAVE_IF_FAILED("Bad length in packet (0x%4x)", usLen);

    switch (pTPH->PacketType)
    {

    case PacketTypeFileStart:
        {
            LPWSTR szFileName = (LPWSTR) (pTPH+1);

            ASSERT(!(usLen % sizeof(WCHAR)));
            ASSERT('\0' == szFileName[usLen/sizeof(WCHAR)-1]);

            if (!(usLen % sizeof(WCHAR)) && '\0' == szFileName[usLen/sizeof(WCHAR)-1])
            {
                hr = StartFile(szFileName, pTPH->Flags & TELET_FLAG_DIRECTORY);
                LEAVE_IF_FAILED("StartFile (%s) failed", szFileName);
            }
            else
            {
                hr = TELEP_E_PROTOCOL;
            }
        }
        break;

    case PacketTypeFileData:
        {
            PBYTE pData = (PBYTE) (pTPH+1);

            ASSERT(usLen);

            if (usLen)
            {
                hr = WriteData(pData, usLen);
                LEAVE_IF_FAILED("WriteData failed");
            }
            else
            {
                hr = TELEP_E_PROTOCOL;
            }
        }
        break;

    case PacketTypeFileEnd:
        {
            ASSERT(!usLen);

            if (!usLen)
            {
                hr = EndFile(pTPH->Flags & TELET_FLAG_DIRECTORY);
                LEAVE_IF_FAILED("EndFile failed");
            }
            else
            {
                hr = TELEP_E_PROTOCOL;
            }
        }
        break;

    default:

        ASSERT(FALSE);
        hr = TELEP_E_PROTOCOL;
    }

_Function_Exit:

    //
    // Try to write operation result
    //

    HRESULT hrAck = _spChannel->Write(sizeof(HRESULT), (PBYTE) &hr, NULL);

    //
    // If we can't send result or we failed close the channel
    //

    if (FAILED(hr) || FAILED(hrAck))
    {
        HRESULT hrClose = CleanState();
        ASSERT(SUCCEEDED(hrClose));
        DBG_UNREFERENCED_LOCAL_VARIABLE(hrClose);
    }

    return FAILED(hr)? hr : hrAck;
}

/*
 *  The channel is disconnected, all Write() calls will fail
 *  no more incomming data is expected. 
 */
HRESULT CTsClientPlgn::OnClose()
{
    return CleanState();
}

HRESULT CTsClientPlgn::CleanState()
{
    //
    // Close file if open
    //

    if (INVALID_HANDLE_VALUE != _hCurrentFile)
    {
        CloseHandle(_hCurrentFile);
        _hCurrentFile = INVALID_HANDLE_VALUE;
    }

    //
    // Pop dirs except for desktop
    //

    while (1 != _vDirList.size())
    {
        _vDirList.pop_back();    
    }

    return S_OK;
}

// private

HRESULT CTsClientPlgn::StartFile(
    __in_z LPWSTR szFileName,
    BOOL bDir)
{
    HRESULT hr = S_OK;
    BOOL bRet;

    try
    {
        //
        // We can NOT have an open file if we are starting a file or dir
        //

        if (INVALID_HANDLE_VALUE != _hCurrentFile)
        {
            hr = TELEP_E_PROTOCOL;
        }
        LEAVE_IF_FAILED("StartFile file not properly closed", szFileName);

        WString strDirectory = _vDirList.at(_vDirList.size()-1);
        WString strFile(strDirectory);
        strFile.append(TEXT("\\")).append(szFileName);

        if (bDir)
        {
            //
            // If dir create it
            //

            bRet = CreateDirectory(strFile.c_str(), NULL);

            if (!bRet)
            {
                hr = HRESULT_FROM_WIN32(GetLastError());
            }
            LEAVE_IF_FAILED("CreateDirectory (%s) failed", strFile.c_str());

            _vDirList.push_back(strFile);
        }
        else
        {
            //
            // If file open it
            //

            _hCurrentFile = CreateFile(strFile.c_str(),
                GENERIC_WRITE,
                0,
                NULL,
                CREATE_NEW,
                0,
                NULL);

            if (INVALID_HANDLE_VALUE == _hCurrentFile)
            {
                hr = TELEP_E_IO;
            }
            LEAVE_IF_FAILED("CreateFile (%s) failed", strFile.c_str());
        }
    }
    catch (std::bad_alloc&)
    {
        hr = E_OUTOFMEMORY;
    }
    catch (std::exception&)
    {
        hr = E_UNEXPECTED;
    }

_Function_Exit:

    return hr;
}

HRESULT CTsClientPlgn::WriteData(
    __in_bcount(usLen) PBYTE pData,
    USHORT usLen)
{
    HRESULT hr = S_OK;

    if (INVALID_HANDLE_VALUE == _hCurrentFile)
    {
        hr = TELEP_E_PROTOCOL;
    }
    LEAVE_IF_FAILED("Data packet when no file open");

    DWORD BytesWrit = 0;
    BOOL bRet = WriteFile(_hCurrentFile, pData, usLen, &BytesWrit, NULL);

    if (!bRet)
    {
        hr = TELEP_E_IO;
    }

_Function_Exit:
    return hr;
}

HRESULT CTsClientPlgn::EndFile(BOOL bDir)
{
    HRESULT hr = S_OK;

    if (bDir)
    {
        if (INVALID_HANDLE_VALUE != _hCurrentFile)
        {
            hr = TELEP_E_PROTOCOL;
        }
        LEAVE_IF_FAILED("End dir when file still open");

        _vDirList.pop_back();
    }
    else
    {
        if (INVALID_HANDLE_VALUE != _hCurrentFile)
        {
            CloseHandle(_hCurrentFile);
            _hCurrentFile = INVALID_HANDLE_VALUE;
        }
        else
        {
            hr = TELEP_E_PROTOCOL;
        }
        LEAVE_IF_FAILED("End file when no file outstanding");
    }

_Function_Exit:

    return hr;
}
