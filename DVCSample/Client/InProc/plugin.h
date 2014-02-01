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

#include    "DVCSample.h"
#include    "resource.h"

// Class CDVCSamplePlugin implements IWTSPlugin interface

class ATL_NO_VTABLE CDVCSamplePlugin :
    public CComObjectRootEx<CComMultiThreadModel>,
    public CComCoClass<CDVCSamplePlugin, &CLSID_DVCSamplePlugin>,
    public IWTSPlugin
{
public:

    DECLARE_REGISTRY_RESOURCEID(IDR_VCPLUGIN)

    BEGIN_COM_MAP(CDVCSamplePlugin)
        COM_INTERFACE_ENTRY(IWTSPlugin)
    END_COM_MAP()

    DECLARE_PROTECT_FINAL_CONSTRUCT()

    HRESULT FinalConstruct()
    {
        return S_OK;
    }

    void FinalRelease()
    {
    }

    // implement IWTSPlugin
    //
    HRESULT STDMETHODCALLTYPE
    Initialize( __in IWTSVirtualChannelManager *pChannelMgr );

    HRESULT STDMETHODCALLTYPE
    Connected()
    {   return S_OK; }

    HRESULT STDMETHODCALLTYPE
    Disconnected( DWORD dwDisconnectCode )
    {   return S_OK; }

    HRESULT STDMETHODCALLTYPE
    Terminated()
    {   return S_OK; }

};

OBJECT_ENTRY_AUTO(__uuidof(DVCSamplePlugin), CDVCSamplePlugin)
