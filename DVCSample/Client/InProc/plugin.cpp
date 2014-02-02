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
#include    "stdafx.h"
#include    "Plugin.h"

// Class CSampleListenerCallback implements IWTSListenerCallback interface

class ATL_NO_VTABLE CSampleListenerCallback :
    public CComObjectRootEx<CComMultiThreadModel>,
    public IWTSListenerCallback
{
public:

    BEGIN_COM_MAP(CSampleListenerCallback)
        COM_INTERFACE_ENTRY(IWTSListenerCallback)
    END_COM_MAP()

    // IWTSListenerCallback
    //
    HRESULT STDMETHODCALLTYPE
    OnNewChannelConnection(
        __in IWTSVirtualChannel *pChannel,
        __in_opt BSTR data,
        __out BOOL *pbAccept,
        __out IWTSVirtualChannelCallback **ppCallback );
};

// Class CSampleChannelCallback implements IWTSVirtualChannelCallback interface
class ATL_NO_VTABLE CSampleChannelCallback :
    public CComObjectRootEx<CComMultiThreadModel>,
    public IWTSVirtualChannelCallback
{
    CComPtr<IWTSVirtualChannel> m_ptrChannel;

public:

    BEGIN_COM_MAP(CSampleChannelCallback)
        COM_INTERFACE_ENTRY(IWTSVirtualChannelCallback)
    END_COM_MAP()

VOID SetChannel(IWTSVirtualChannel* pChannel)
{
	m_ptrChannel = pChannel;
}

HRESULT STDMETHODCALLTYPE OnDataReceived(ULONG cbSize, __in_bcount( cbSize ) BYTE *pBuffer)
{
	return m_ptrChannel->Write(cbSize, pBuffer, NULL);
}

HRESULT STDMETHODCALLTYPE OnClose()
{
	return m_ptrChannel->Close();
}

};

//IWTSPlugin

/*
 *  This function is called immediately after instantiating the COM class
 *  and passes an instance of the channel manager (IWTSVirtualChannelManager)
 *  to the client.Initialization occurs only once per plug-in
 *
 */
HRESULT
CDVCSamplePlugin::Initialize(
    __in IWTSVirtualChannelManager *pChannelMgr
    )
{
    HRESULT hr;
    CComObject<CSampleListenerCallback> *pListenerCallback;
    CComPtr<CSampleListenerCallback> ptrListenerCallback;
    CComPtr<IWTSListener> ptrListener;

    hr = CComObject<CSampleListenerCallback>::CreateInstance( &pListenerCallback );
    CHECK_QUIT_HR( "CSampleListenerCallback::CreateInstance" );
    ptrListenerCallback = pListenerCallback;

    hr = pChannelMgr->CreateListener( "DVCSmpl", 0, (CSampleListenerCallback *)ptrListenerCallback, &ptrListener );
    CHECK_QUIT_HR( "CreateListener" );

TS_EXIT_POINT:
    return hr;

}

//IWTSListenerCallback interface

/*
 *  Called whenever a request for new channel connection
 *  from the server is received.It accepts or denies a
 *  connection request for an incoming connection to the
 *  associated listener.
 *
 */

HRESULT
CSampleListenerCallback::OnNewChannelConnection(
    __in IWTSVirtualChannel *pChannel,
    __in_opt BSTR data,
    __out BOOL *pbAccept,
    __out IWTSVirtualChannelCallback **ppCallback )
{
    HRESULT hr;
    CComObject<CSampleChannelCallback> *pCallback;
    CComPtr<CSampleChannelCallback> ptrCallback;

    *pbAccept = FALSE;
    hr = CComObject<CSampleChannelCallback>::CreateInstance(&pCallback);
    CHECK_QUIT_HR("CSampleChannelCallback::CreateInstance");
    ptrCallback = pCallback;

    ptrCallback->SetChannel( pChannel );

    *ppCallback = ptrCallback;
    (*ppCallback)->AddRef();

    *pbAccept = TRUE;

TS_EXIT_POINT:
    return hr;
}


