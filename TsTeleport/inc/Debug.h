#pragma once

#include <StrSafe.h>
#include <assert.h>

#define ASSERT assert

#define DEBUG_PRINT_BUFFER_SIZE 1024

#define leave goto _Function_Exit;

#define LEAVE_IF_FAILED(msg, ...) \
    if (FAILED(hr)) \
    { \
        DebugPrint(hr, TEXT(msg), __VA_ARGS__); \
        leave; \
    }

void DebugPrint(HRESULT hrDbg, __in_z LPWSTR fmt, ...)
{
    HRESULT hr;

    TCHAR Buffer[DEBUG_PRINT_BUFFER_SIZE];

    hr = StringCchPrintf(Buffer, DEBUG_PRINT_BUFFER_SIZE, TEXT("[hr=0x%8x]"), hrDbg);
    ASSERT(SUCCEEDED(hr)); // buffer is sure to be big enough

    size_t Len;
    hr = StringCchLength(Buffer, DEBUG_PRINT_BUFFER_SIZE, &Len);
    ASSERT(SUCCEEDED(hr)); // StringCchPrintf is supposed to always NULL term

    va_list argptr;
    va_start(argptr, fmt);

    hr = StringCchVPrintf(Buffer + Len,
        DEBUG_PRINT_BUFFER_SIZE - Len, 
        fmt,
        argptr);

    // the above could fail but we don't care since we
    // should get a NULL terminated partial string

    // insert terminating eol (despite failure)
    hr = StringCchLength(Buffer, DEBUG_PRINT_BUFFER_SIZE, &Len);
    ASSERT(SUCCEEDED(hr)); // again there should be a NULL term

    if (Len < DEBUG_PRINT_BUFFER_SIZE-1)
    {
        Len++;
        Buffer[Len] = TEXT('\0');
    }

    Buffer[Len-1] = TEXT('\n');        
    OutputDebugString(Buffer);
}
