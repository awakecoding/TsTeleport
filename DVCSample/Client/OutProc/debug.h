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

#pragma once

#include <StrSafe.h>
#include <assert.h>

#define SIZE 1024


#define TRC(msg, ...) \
    { \
        DebugPrint(TEXT(msg), __VA_ARGS__); \
    }

void DebugPrint(__in_z LPWSTR fmt, ...)
{
    HRESULT hr;

    TCHAR Buffer[SIZE] =_T("");

    size_t Len;
    hr = StringCchLength(Buffer,SIZE, &Len);
    ASSERT(SUCCEEDED(hr));

    va_list argptr;
    va_start(argptr, fmt);

    hr = StringCchVPrintf(Buffer + Len,
        SIZE - Len,
        fmt,
        argptr);

    hr = StringCchLength(Buffer,SIZE, &Len);
    ASSERT(SUCCEEDED(hr));

    if (Len < SIZE-1)
    {
        Len++;
        Buffer[Len] = TEXT('\0');
    }

    Buffer[Len-1] = TEXT('\n');
    OutputDebugString(Buffer);
}
