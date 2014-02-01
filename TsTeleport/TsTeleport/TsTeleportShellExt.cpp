// TsTeleportShellExt.cpp : Implementation of CTsTeleportShellExt

#include "stdafx.h"
#include "TsTeleportShellExt.h"

#if _DEBUG || DBG
    BOOL g_bNoTimeout = FALSE;
#endif

#define DATA_PACKET_SIZE        0x200
#define RESPONSE_TIMEOUT_MS     1000

inline PTELEP_PACKET_HEADER NewPacket(PACKET_TYPE PacketType, USHORT Len, USHORT Flags = 0)
{
    ASSERT(Len >= sizeof(TELEP_PACKET_HEADER));
    
    PTELEP_PACKET_HEADER pHdr = (PTELEP_PACKET_HEADER) new BYTE[Len]; // throwing new

    pHdr->PacketType = PacketType;
    pHdr->Flags = Flags;
    pHdr->PacketSize = Len - sizeof(TELEP_PACKET_HEADER);

    return pHdr;
}

typedef struct _RESPONSE_FORMAT
{
    CHANNEL_PDU_HEADER PDUHeader;
    HRESULT hrAck;
} RESPONSE_FORMAT, *PRESPONSE_FORMAT;

// CTsTeleportShellExt

HRESULT CTsTeleportShellExt::DragEnter(
    IDataObject *pDataObj,
    DWORD grfKeyState,
    POINTL pt,
    DWORD *pdwEffect)
{
    UNREFERENCED_PARAMETER(pDataObj);
    UNREFERENCED_PARAMETER(grfKeyState);
    UNREFERENCED_PARAMETER(pt);
    UNREFERENCED_PARAMETER(pdwEffect);
 
    return S_OK;
}

HRESULT CTsTeleportShellExt::DragLeave()
{
    return S_OK;
}

HRESULT CTsTeleportShellExt::Drop(
    IDataObject *pDataObj,
    DWORD grfKeyState,
    POINTL pt,
    DWORD *pdwEffect)
{
    HRESULT hr;
    TStringVector vFileNames;

    UNREFERENCED_PARAMETER(grfKeyState);
    UNREFERENCED_PARAMETER(pt);
    UNREFERENCED_PARAMETER(pdwEffect);

    //
    // Get the file names vector
    //

    hr = GetFileNames(pDataObj,
        vFileNames);

    LEAVE_IF_FAILED("GetFileNames failed");

    //
    // Send the files through the channel
    //

    hr = TeleportFiles(vFileNames);

    LEAVE_IF_FAILED("TeleportFiles failed");

_Function_Exit:

    MessageBox(NULL,
        SUCCEEDED(hr)? TEXT("File(s) sent!") : TEXT("Failed!"),
        SUCCEEDED(hr)? TEXT("Success") : TEXT("Error"),
        0);

    return hr;

}

HRESULT CTsTeleportShellExt::GetFileNames(
    IDataObject *pDataObj,
    TStringVector& vFileNames)
{
    HRESULT hr;

    //
    // init for cleanup
    //

    STGMEDIUM mdm;
    mdm.pUnkForRelease = NULL;
    mdm.hGlobal = NULL;

    HDROP hdrop = NULL;

    STRRET strret;
    strret.pOleStr = NULL;

    LPTSTR szFileName = NULL;

    try
    {
        FORMATETC fmt = { CF_HDROP, NULL, DVASPECT_CONTENT, -1, TYMED_HGLOBAL };

        hr = pDataObj->GetData(&fmt, &mdm);
        LEAVE_IF_FAILED("pDataObj->GetData failed");

        hdrop = (HDROP) GlobalLock(mdm.hGlobal);

        if (!hdrop)
        {
            hr = HRESULT_FROM_WIN32(GetLastError());
        }
        LEAVE_IF_FAILED("GetFileNames failed");

        UINT nFiles = DragQueryFile(hdrop, (UINT)-1, NULL, 0);

        for(UINT nNames = 0; nNames < nFiles; nNames++)
        {
            UINT   cchFileName = DragQueryFile(hdrop, 
                nNames, 
                NULL,
                0);

            ASSERT(cchFileName);

            szFileName = new TCHAR[cchFileName+1]; 

            ASSERT(szFileName); // using C++ throwing new 

            UINT tmp = DragQueryFile(hdrop, 
                nNames, 
                szFileName,
                cchFileName+1);

            DBG_UNREFERENCED_LOCAL_VARIABLE(tmp); // for fre builds

            ASSERT(tmp == cchFileName);
            ASSERT(szFileName[cchFileName] == '\0');

            TString strFileName(szFileName);

            vFileNames.push_back(strFileName);
            
            delete [] szFileName;
            szFileName = NULL;
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

    //
    // Cleanup
    // 

    if (hdrop)
    {
        GlobalUnlock(hdrop);
    }

    if (mdm.hGlobal)
    {
        ReleaseStgMedium(&mdm);
    }

    if (strret.pOleStr)
    {
        CoTaskMemFree(strret.pOleStr);
    }

    if (szFileName)
    {
        delete [] szFileName;
    }

    return hr;
}

HRESULT CTsTeleportShellExt::TeleportFiles(TStringVector& vFileNames)
{
    HRESULT hr = S_OK;

    TStringVector::iterator iter = vFileNames.begin();

    //
    // Open virtual channel
    //

    if (!_hDVC)
    {
        hr = GetVirtualChannelHandle(&_hDVC);
    }
    LEAVE_IF_FAILED("GetVirtualChannelHandle failed");

    for (; iter != vFileNames.end(); iter++)
    {
        hr = TeleportFile((LPTSTR) (*iter).c_str());
        LEAVE_IF_FAILED("TeleportFile (%s) failed", (*iter).c_str());
    }

_Function_Exit:

    if (_hDVC)
    {
        //
        // Close virtual channel
        //

        CloseHandle(_hDVC);
        _hDVC = NULL;
    }

    return hr;
}


HRESULT CTsTeleportShellExt::TeleportFile(__in_z LPTSTR szFile)
{
    HRESULT hr = S_OK;
    HANDLE hFile = INVALID_HANDLE_VALUE;
    PTELEP_PACKET_HEADER pPacket = NULL;

    try
    {
        OutputDebugString(szFile);
        OutputDebugString(TEXT("\n"));

        size_t Len = _tcslen(szFile);
        LPTSTR szPartial = szFile + Len - 1;

        while (szPartial > szFile && szPartial[-1] != TEXT('\\'))
            szPartial--;

        ASSERT(szPartial != szFile);

        hFile = CreateFile(szFile,
            GENERIC_READ,
            FILE_SHARE_READ,
            NULL,
            OPEN_EXISTING,
            FILE_FLAG_BACKUP_SEMANTICS, // so that we can open dir (as well)
            NULL);

        if (INVALID_HANDLE_VALUE == hFile)
        {
            hr = HRESULT_FROM_WIN32(GetLastError());
        }
        LEAVE_IF_FAILED("CreateFile (%s) failed", szFile);

        BY_HANDLE_FILE_INFORMATION fi;
        BOOL bRet = GetFileInformationByHandle(hFile, &fi);

        if (!bRet)
        {
            hr = HRESULT_FROM_WIN32(GetLastError());
        }
        LEAVE_IF_FAILED("GetFileInformation (%s) failed", szFile);

        if (FILE_ATTRIBUTE_DIRECTORY == fi.dwFileAttributes)
        {
            hr = AnnounceTransfer(szPartial, TRUE); // true for dir
            LEAVE_IF_FAILED("AnnounceTransfer (%s) failed", szPartial);

            hr = TeleportDirectory(szFile); // telep files in dir
            LEAVE_IF_FAILED("TeleportDirectory (%s) failed", szPartial);

            hr = AnnounceEndTransfer(TRUE);
            LEAVE_IF_FAILED("AnnounceEndTransfer (%s) failed", szPartial);
        }
        else
        {
            hr = AnnounceTransfer(szPartial, FALSE); // false for file
            LEAVE_IF_FAILED("AnnounceTransfer (%s) failed", szPartial);

            //
            // Compute file size
            //

            ULONG64 FileSize;
            FileSize = fi.nFileSizeHigh;
            FileSize <<= 32;
            FileSize |= fi.nFileSizeLow;

            pPacket = NewPacket(PacketTypeFileData, DATA_PACKET_SIZE); // throwing!

            //
            // File size is not changing since we only share reads
            //

            while (FileSize)
            {
                ULONG BytesRead = 0;

                if (FileSize < pPacket->PacketSize)
                {
                    pPacket->PacketSize = (USHORT) FileSize;
                }
                bRet = ReadFile(hFile, (PBYTE) (pPacket+1), pPacket->PacketSize, &BytesRead, NULL);

                if (!bRet)
                {
                    ASSERT(!BytesRead);
                    hr = HRESULT_FROM_WIN32(GetLastError());
                }
                LEAVE_IF_FAILED("ReadFile (%s) failed, %d outstanding", szPartial, FileSize);

                //
                // Send data
                //

                hr = SendPacket(pPacket);
                LEAVE_IF_FAILED("SendPacket (%s) failed, %d outstanding", szPartial, FileSize);

                FileSize -= BytesRead;
            }
                    
            hr = AnnounceEndTransfer(FALSE);
            LEAVE_IF_FAILED("AnnounceEndTransfer (%s) failed", szPartial);
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

    //
    // Cleanup
    //

    if (INVALID_HANDLE_VALUE != hFile)
    {
        CloseHandle(hFile);
    }

    if (pPacket)
    {
        delete [] pPacket;
    }

    return hr;
}

HRESULT CTsTeleportShellExt::TeleportDirectory(__in_z LPTSTR szFile)
{
    HRESULT hr = S_OK;
    HANDLE hSearch = INVALID_HANDLE_VALUE;
    BOOL bFirst = TRUE;

    BOOL bRet;
    DWORD gle;

    try
    {
        TString strDir(szFile);
        strDir.append(TEXT("\\*"));
        
        do
        {
            WIN32_FIND_DATA fd;

            if (bFirst)
            {
                hSearch = FindFirstFile(strDir.c_str(),
                    &fd);

                bFirst = FALSE;
                bRet = (INVALID_HANDLE_VALUE != hSearch);
            }
            else
            {
                bRet = FindNextFile(hSearch, &fd);
            }
                
            if (!bRet)
            {
                gle = GetLastError();

                if (ERROR_NO_MORE_FILES != gle)
                {
                    hr = HRESULT_FROM_WIN32(gle);
                }                
            }
            LEAVE_IF_FAILED("FindXxxFile (%s) failed", szFile);

            if (bRet)
            {
                //
                // Skip . and .. but send everything else
                //

                if (_tcsncmp(fd.cFileName, TEXT("."), sizeof(".")) &&
                    _tcsncmp(fd.cFileName, TEXT(".."), sizeof("..")))
                {
                    TString strPath(szFile);

                    strPath.append(TEXT("\\")).append(fd.cFileName);
                    
                    hr = TeleportFile((LPTSTR) strPath.c_str()); // recuresion
                    LEAVE_IF_FAILED("TeleportFile (%s) failed", strPath.c_str());
                }
            }
        } while (bRet);
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

    //
    // Cleanup
    //

    if (INVALID_HANDLE_VALUE != hSearch)
    {
        FindClose(hSearch);
    }

    return hr;
}

HRESULT CTsTeleportShellExt::GetVirtualChannelHandle(HANDLE *phFile)
{
    HRESULT hr = S_OK;

    HANDLE hWTSHandle = NULL;
    PVOID vcFileHandlePtr = NULL;

    //
    // Open Virtual channel
    //
    
    hWTSHandle = WTSVirtualChannelOpenEx(
        WTS_CURRENT_SESSION,
        TSTELE_CHANNEL_NAME,
        WTS_CHANNEL_OPTION_DYNAMIC);

    if (NULL == hWTSHandle)
    {
        hr = HRESULT_FROM_WIN32(GetLastError());
    }
    LEAVE_IF_FAILED("WTSVirtualChannelOpenEx failed");

    //
    // Get channel file handle
    //
  
    DWORD len;
    BOOL bSucc = WTSVirtualChannelQuery(
        hWTSHandle,
        WTSVirtualFileHandle,
        &vcFileHandlePtr,
        &len);

    if (!bSucc)
    {
        hr = HRESULT_FROM_WIN32(GetLastError());
    }
    LEAVE_IF_FAILED("WTSVirtualChannelQuery failed");

    if (len != sizeof(HANDLE))
    {
        hr = E_UNEXPECTED;
    }
    LEAVE_IF_FAILED("WTSVirtualChannelQuery return unexpected");

    HANDLE hWTSFileHandle = *(HANDLE *)vcFileHandlePtr;

    //
    // Duplicate handle so that we can close
    //
     
    bSucc = DuplicateHandle(
            GetCurrentProcess(),
            hWTSFileHandle,
            GetCurrentProcess(),
            phFile,
            0,
            FALSE,
            DUPLICATE_SAME_ACCESS);
    
    if (!bSucc)
    {
        hr = HRESULT_FROM_WIN32(GetLastError());
    }
    LEAVE_IF_FAILED("DuplicateHandle failed");

_Function_Exit:

    //
    // Cleanup
    //

    if (vcFileHandlePtr)
    {
        WTSFreeMemory(vcFileHandlePtr);
    }
    
    if (hWTSHandle)
    {
        WTSVirtualChannelClose(hWTSHandle);
    }

    return hr;
}

HRESULT CTsTeleportShellExt::AnnounceTransfer(__in_z LPTSTR szPartial, BOOL bDir)
{
    HRESULT hr;
    PTELEP_PACKET_HEADER pPacket = NULL;
    //
    // Send start packet for file or dir
    //

    size_t Len = _tcslen(szPartial);
    USHORT DataLen;
    hr = SizeTToUShort(Len, &DataLen);
    LEAVE_IF_FAILED("SizeTToUShort (0x%Ix) failed", Len);

    hr = UShortAdd(DataLen, 1, &DataLen);
    LEAVE_IF_FAILED("UShortAdd (0x%4x, 1) failed", DataLen);

    hr = UShortMult(DataLen, sizeof(TCHAR), &DataLen);
    LEAVE_IF_FAILED("UShortMult (0x%4x, %d) failed", DataLen, sizeof(TCHAR));

    hr = UShortAdd(DataLen, sizeof(TELEP_PACKET_HEADER), &DataLen);
    LEAVE_IF_FAILED("UShortMult (0x%4x, %d) failed", DataLen, sizeof(TELEP_PACKET_HEADER));
     
    USHORT Flags = 0;

    if (bDir)
    {
        Flags |= TELET_FLAG_DIRECTORY;
    }

    pPacket = NewPacket(PacketTypeFileStart, DataLen, Flags); // throwing!

    LPWSTR pData = (LPWSTR) (pPacket+1);

    CopyMemory(pData, szPartial, pPacket->PacketSize);

    hr = SendPacket(pPacket);
    LEAVE_IF_FAILED("SendPacket (Start, %s) failed", szPartial);

_Function_Exit:

    if (pPacket)
    {
        delete [] pPacket;
    }

    return hr;
}

HRESULT CTsTeleportShellExt::AnnounceEndTransfer(BOOL bDir)
{
    //
    // Send end packet for file or dir
    //

    USHORT Flags = 0;

    if (bDir)
    {
        Flags |= TELET_FLAG_DIRECTORY;
    }

    TELEP_PACKET_HEADER Packet;

    Packet.PacketType = PacketTypeFileEnd;
    Packet.Flags = Flags;
    Packet.PacketSize = 0;
    
    return SendPacket(&Packet);
}

HRESULT CTsTeleportShellExt::SendPacket(PTELEP_PACKET_HEADER pPacket)
{
    HRESULT hr;

    OVERLAPPED ovr = { 0 };

    //
    // Add header to len
    //

    USHORT RequiredLen;
    hr = UShortAdd(pPacket->PacketSize, sizeof(TELEP_PACKET_HEADER), &RequiredLen);
    ASSERT(SUCCEEDED(hr)); // since we allocate the packet and previously supply the proper len
    
    //
    // Write packet to DVC
    //

    ULONG BytesWrit = 0;
    BOOL bRet = WriteFile(_hDVC, pPacket, RequiredLen, &BytesWrit, &ovr);
    
    if (!bRet && ERROR_IO_PENDING == GetLastError())
    {
        bRet = GetOverlappedResult(_hDVC, &ovr, &BytesWrit, TRUE);
    }

    if (!bRet)
    {
        hr = HRESULT_FROM_WIN32(GetLastError());
    }
    LEAVE_IF_FAILED("WriteFile failed");

    //
    // Packet committed to client but we need the client
    // result so read it - per our protocol
    //

    ULONG BytesRead = 0;

    BYTE ReadBuf[CHANNEL_PDU_LENGTH];
    PRESPONSE_FORMAT prf = (PRESPONSE_FORMAT) ReadBuf;
    
    //
    // We have to read at least channel PDU len on the DVC
    //

    bRet = ReadFile(_hDVC, ReadBuf, CHANNEL_PDU_LENGTH, &BytesRead, &ovr);

    if (!bRet && ERROR_IO_PENDING == GetLastError())
    {
        DWORD to = RESPONSE_TIMEOUT_MS;

#if _DEBUG || DBG
        if (g_bNoTimeout)
        {
            to = INFINITE;
        }
#endif

        DWORD dwRet = WaitForSingleObject(_hDVC, to);

        if (WAIT_TIMEOUT == dwRet)
        {
            //
            // Read timed out so fail
            //

            hr = TELEP_E_TIMEOUT;
        }
        LEAVE_IF_FAILED("Read response timeout");

        bRet = GetOverlappedResult(_hDVC, &ovr, &BytesRead, TRUE);
    }

    if (!bRet)
    {
        hr = HRESULT_FROM_WIN32(GetLastError());
    }
    LEAVE_IF_FAILED("ReadFile response failed");

    //
    // We do not expect packet fragmentation 
    //

    ASSERT((CHANNEL_FLAG_FIRST & prf->PDUHeader.flags) &&
        (CHANNEL_FLAG_LAST & prf->PDUHeader.flags));

    //
    // Copy client HRESULT
    //

    hr = prf->hrAck;
    LEAVE_IF_FAILED("Client indicated failure");

_Function_Exit:

    return hr;
}
