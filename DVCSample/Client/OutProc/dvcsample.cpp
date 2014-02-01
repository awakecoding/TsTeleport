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
// DVCsample.cpp : Implementation of WinMain


#include "stdafx.h"
#include "resource.h"
#include "DVCSample.h"


class CDVCsampleModule : public CAtlExeModuleT< CDVCsampleModule >
{
public :
    DECLARE_LIBID(LIBID_DVCSampleLib)
    DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DVCSAMPLE, "{6CCE5FBD-A461-4C4E-9273-2160EFDECFCD}")
};

CDVCsampleModule _AtlModule;

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPTSTR lpszCmdLine,
    int nCmdShow
    )
{

    return _AtlModule.WinMain(nCmdShow);
}
