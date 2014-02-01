//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//


#include <windows.h>
#include <wtsapi32.h>
#include <pchannel.h>
#include <crtdbg.h>
#include <stdio.h>

#pragma comment(lib, "wtsapi32.lib")

#define     _MAX_WAIT       60000
#define     MAX_MSG_SIZE    0x20000
#define     START_MSG_SIZE  4
#define     STEP_MSG_SIZE   113

/*
 *  Open a dynamic channel with the name given in szChannelName
 *  the output file handle can be used in ReadFile/WriteFile calls
 */
DWORD OpenDynamicChannel(
  LPCSTR szChannelName,
  HANDLE *phFile )
{
    HANDLE hWTSHandle = NULL;
    HANDLE hWTSFileHandle;
    PVOID vcFileHandlePtr = NULL;
    DWORD len;
    DWORD rc = ERROR_SUCCESS;

    hWTSHandle = WTSVirtualChannelOpenEx(
                   WTS_CURRENT_SESSION,
                   (LPSTR)szChannelName,
                   WTS_CHANNEL_OPTION_DYNAMIC );
    if ( NULL == hWTSHandle )
    {
        rc = GetLastError();
        printf("WTSVirtualChannelOpenEx API Call Failed \n" );
        goto exitpt;
    }

    BOOL bSucc = WTSVirtualChannelQuery(
                    hWTSHandle,
                    WTSVirtualFileHandle,
                    &vcFileHandlePtr,
                    &len );
    if ( !bSucc )
    {
        rc = GetLastError();
        goto exitpt;
    }
    if ( len != sizeof( HANDLE ))
    {
        rc = ERROR_INVALID_PARAMETER;
        goto exitpt;
    }
    hWTSFileHandle = *(HANDLE *)vcFileHandlePtr;

    bSucc = DuplicateHandle(
                GetCurrentProcess(),
                hWTSFileHandle,
                GetCurrentProcess(),
                phFile,
                0,
                FALSE,
                DUPLICATE_SAME_ACCESS );
    if ( !bSucc )
    {
        rc = GetLastError();
        goto exitpt;
    }

    rc = ERROR_SUCCESS;
exitpt:
    if ( vcFileHandlePtr )
    {
        WTSFreeMemory( vcFileHandlePtr );
    }
    if ( hWTSHandle )
    {
        WTSVirtualChannelClose( hWTSHandle );
    }
    return rc;
}

/* Write series of random messages into the dynamic
 * virtual channel */
DWORD WINAPI WriteThread( PVOID param )
{
    HANDLE  hFile = (HANDLE)param;
    BYTE    WriteBuffer[MAX_MSG_SIZE];
    DWORD   dwWritten;
    BOOL    bSucc;
    BYTE    b = 0;
    HANDLE      hEvent;
    printf("Write Thread Started\n" );

    hEvent = CreateEvent( NULL, FALSE, FALSE, NULL );

    for( ULONG msgSize = START_MSG_SIZE;
         msgSize < MAX_MSG_SIZE;
         msgSize += STEP_MSG_SIZE )
    {
        OVERLAPPED  Overlapped = {0};
        Overlapped.hEvent = hEvent;

        for( ULONG i = 0; i < msgSize; i++, b++ )
        {
            WriteBuffer[i] = b;
        }
        bSucc = WriteFile(
                        hFile,
                        WriteBuffer,
                        msgSize,
                        &dwWritten,
                        &Overlapped );

        if ( !bSucc )
        {
            if ( GetLastError() == ERROR_IO_PENDING )
            {
                DWORD dw = WaitForSingleObject( Overlapped.hEvent, _MAX_WAIT );
                _ASSERT( WAIT_OBJECT_0 == dw );
                bSucc = GetOverlappedResult(
                            hFile,
                            &Overlapped,
                            &dwWritten,
                            FALSE );
            }
        }

        if ( !bSucc )
        {
            DWORD error = GetLastError();
            return error;
        }

        _ASSERT( dwWritten == msgSize );
    }

    return 0;
}

/* Read the data from the dynamic virtual channel
 * reconstruct the original message and
 * verify its content
 */
DWORD WINAPI ReadThread( PVOID param )
{
    HANDLE hFile = (HANDLE)param;
    BYTE        ReadBuffer[CHANNEL_PDU_LENGTH];
    DWORD       dwRead;
    BYTE        b = 0;
    CHANNEL_PDU_HEADER *pHdr = (CHANNEL_PDU_HEADER *)ReadBuffer;
    BOOL        bSucc;
    HANDLE      hEvent;

    hEvent = CreateEvent( NULL, FALSE, FALSE, NULL );
    printf("Read Thread Started\n" );

    for( ULONG msgSize = START_MSG_SIZE;
         msgSize < MAX_MSG_SIZE;
         msgSize += STEP_MSG_SIZE )
    {
        OVERLAPPED  Overlapped = {0};
        DWORD TotalRead = 0;
        do {

            Overlapped.hEvent = hEvent;
            //  read the whole message
            //
            bSucc = ReadFile(
                        hFile,
                        ReadBuffer,
                        sizeof( ReadBuffer ),
                        &dwRead,
                        &Overlapped );
            if ( !bSucc )
            {
                if ( GetLastError() == ERROR_IO_PENDING )
                {
                    DWORD dw = WaitForSingleObject( Overlapped.hEvent, INFINITE );
                    _ASSERT( WAIT_OBJECT_0 == dw );
                    bSucc = GetOverlappedResult(
                            hFile,
                            &Overlapped,
                            &dwRead,
                            FALSE );
                }
            }

            if ( !bSucc )
            {
                DWORD error = GetLastError();
                return error;
            }

            ULONG packetSize = dwRead - sizeof( *pHdr );
            TotalRead += packetSize;
            PBYTE pData = (PBYTE)( pHdr + 1 );
            for ( ULONG i = 0; i < packetSize; pData++, i++, b++ )
            {
                _ASSERT( *pData == b );
            }
            _ASSERT( msgSize == pHdr->length );
        } while( 0 == ( pHdr->flags & CHANNEL_FLAG_LAST ));

        _ASSERT( TotalRead == msgSize );
    }

    return 0;
}

INT _cdecl wmain( INT argc, __in_ecount( argc ) WCHAR **argv )
{
    DWORD rc;
    HANDLE            hFile;

    printf("Opening a Dynamic Channel DVCSmpl \n" );
    rc = OpenDynamicChannel ( "DVCSmpl", &hFile );
    if ( ERROR_SUCCESS != rc )
    {
        printf("Dynamic Channel Creation Failed\n" );
        return 0;
    }

    if ( ERROR_SUCCESS == rc )
    {
        printf("Dynamic Channel Created\n" );

    }
    DWORD dwThreadId;
    printf("Creating a Read Thread\n" );
    HANDLE hReadThread = CreateThread(
                    NULL,
                    0,
                    ReadThread,
                    hFile,
                    0,
                    &dwThreadId );

    printf("Creating a Write Thread\n" );
    HANDLE hWriteThread = CreateThread(
                    NULL,
                    0,
                    WriteThread,
                    hFile,
                    0,
                    &dwThreadId );

    HANDLE ah[] = {hReadThread, hWriteThread};
    WaitForMultipleObjects(2, ah, TRUE, INFINITE );

    printf("Closing handle for Read Thread\n" );
    CloseHandle( hReadThread );
    printf("Closing handle for Write Thread\n" );
    CloseHandle( hWriteThread );
    printf("Closing Dynamic Virtual Channel\n" );
    CloseHandle( hFile );

    return 1;
}