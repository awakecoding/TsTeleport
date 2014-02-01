// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit
#define _ATL_REGISTER_PER_USER  // This setting must be consistent with the project's RGS file


#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>

using namespace ATL;

// TODO: adtn'l includes

#include <WinUser.h>
#include <ShlObj.h>
#include <Shellapi.h>
#include <StrSafe.h>
#include <IntSafe.h>

#include <vector>
#include <string>

#include <wtsapi32.h>
#include <pchannel.h>

typedef std::basic_string<TCHAR> TString;
typedef std::vector<TString> TStringVector;


