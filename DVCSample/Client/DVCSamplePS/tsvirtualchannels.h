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

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Mon Jun 29 18:34:52 2009
 */
/* Compiler settings for .\TSVirtualChannels.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data
    VC __declspec() decoration level:
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __TSVirtualChannels_h__
#define __TSVirtualChannels_h__

/* Forward Declarations */

#ifndef __IWTSPlugin_FWD_DEFINED__
#define __IWTSPlugin_FWD_DEFINED__
typedef interface IWTSPlugin IWTSPlugin;
#endif     /* __IWTSPlugin_FWD_DEFINED__ */


#ifndef __IWTSListener_FWD_DEFINED__
#define __IWTSListener_FWD_DEFINED__
typedef interface IWTSListener IWTSListener;
#endif     /* __IWTSListener_FWD_DEFINED__ */


#ifndef __IWTSListenerCallback_FWD_DEFINED__
#define __IWTSListenerCallback_FWD_DEFINED__
typedef interface IWTSListenerCallback IWTSListenerCallback;
#endif     /* __IWTSListenerCallback_FWD_DEFINED__ */


#ifndef __IWTSVirtualChannelCallback_FWD_DEFINED__
#define __IWTSVirtualChannelCallback_FWD_DEFINED__
typedef interface IWTSVirtualChannelCallback IWTSVirtualChannelCallback;
#endif     /* __IWTSVirtualChannelCallback_FWD_DEFINED__ */


#ifndef __IWTSVirtualChannelManager_FWD_DEFINED__
#define __IWTSVirtualChannelManager_FWD_DEFINED__
typedef interface IWTSVirtualChannelManager IWTSVirtualChannelManager;
#endif     /* __IWTSVirtualChannelManager_FWD_DEFINED__ */


#ifndef __IWTSVirtualChannel_FWD_DEFINED__
#define __IWTSVirtualChannel_FWD_DEFINED__
typedef interface IWTSVirtualChannel IWTSVirtualChannel;
#endif     /* __IWTSVirtualChannel_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * );

/* interface __MIDL_itf_TSVirtualChannels_0000 */
/* [local] */







#define  WTS_PROPERTY_DEFAULT_CONFIG  L"DefaultConfig"
EXTERN_C __declspec(selectany) const IID IID_IWTSPlugin = {0xA1230201, 0x1439, 0x4e62, { 0xa4, 0x14, 0x19, 0x0d, 0x0a, 0xc3, 0xd4, 0x0e}};


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_v0_0_s_ifspec;

#ifndef __IWTSPlugin_INTERFACE_DEFINED__
#define __IWTSPlugin_INTERFACE_DEFINED__

/* interface IWTSPlugin */
/* [helpstring][oleautomation][uuid][object] */


EXTERN_C const IID IID_IWTSPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A1230201-1439-4e62-a414-190d0ac3d40e")
    IWTSPlugin : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize(
            /* [in] */ IWTSVirtualChannelManager __RPC_FAR *pChannelMgr) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Connected( void) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnected(
            DWORD dwDisconnectCode) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Terminated( void) = 0;

    };

#else     /* C style interface */

    typedef struct IWTSPluginVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IWTSPlugin __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IWTSPlugin __RPC_FAR * This);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IWTSPlugin __RPC_FAR * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )(
            IWTSPlugin __RPC_FAR * This,
            /* [in] */ IWTSVirtualChannelManager __RPC_FAR *pChannelMgr);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Connected )(
            IWTSPlugin __RPC_FAR * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Disconnected )(
            IWTSPlugin __RPC_FAR * This,
            DWORD dwDisconnectCode);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Terminated )(
            IWTSPlugin __RPC_FAR * This);

        END_INTERFACE
    } IWTSPluginVtbl;

    interface IWTSPlugin
    {
        CONST_VTBL struct IWTSPluginVtbl __RPC_FAR *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSPlugin_QueryInterface(This,riid,ppvObject)    \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWTSPlugin_AddRef(This)    \
    (This)->lpVtbl -> AddRef(This)

#define IWTSPlugin_Release(This)    \
    (This)->lpVtbl -> Release(This)


#define IWTSPlugin_Initialize(This,pChannelMgr)    \
    (This)->lpVtbl -> Initialize(This,pChannelMgr)

#define IWTSPlugin_Connected(This)    \
    (This)->lpVtbl -> Connected(This)

#define IWTSPlugin_Disconnected(This,dwDisconnectCode)    \
    (This)->lpVtbl -> Disconnected(This,dwDisconnectCode)

#define IWTSPlugin_Terminated(This)    \
    (This)->lpVtbl -> Terminated(This)

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSPlugin_Initialize_Proxy(
    IWTSPlugin __RPC_FAR * This,
    /* [in] */ IWTSVirtualChannelManager __RPC_FAR *pChannelMgr);


void __RPC_STUB IWTSPlugin_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSPlugin_Connected_Proxy(
    IWTSPlugin __RPC_FAR * This);


void __RPC_STUB IWTSPlugin_Connected_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSPlugin_Disconnected_Proxy(
    IWTSPlugin __RPC_FAR * This,
    DWORD dwDisconnectCode);


void __RPC_STUB IWTSPlugin_Disconnected_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSPlugin_Terminated_Proxy(
    IWTSPlugin __RPC_FAR * This);


void __RPC_STUB IWTSPlugin_Terminated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IWTSPlugin_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0147 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSListener = {0xA1230206, 0x9a39, 0x4d58, {0x86, 0x74, 0xcd, 0xb4, 0xdf, 0xf4, 0xe7, 0x3b}};


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0147_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0147_v0_0_s_ifspec;

#ifndef __IWTSListener_INTERFACE_DEFINED__
#define __IWTSListener_INTERFACE_DEFINED__

/* interface IWTSListener */
/* [helpstring][oleautomation][uuid][object] */


EXTERN_C const IID IID_IWTSListener;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A1230206-9a39-4d58-8674-cdb4dff4e73b")
    IWTSListener : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetConfiguration(
            /* [out] */ IPropertyBag __RPC_FAR *__RPC_FAR *ppPropertyBag) = 0;

    };

#else     /* C style interface */

    typedef struct IWTSListenerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IWTSListener __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IWTSListener __RPC_FAR * This);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IWTSListener __RPC_FAR * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetConfiguration )(
            IWTSListener __RPC_FAR * This,
            /* [out] */ IPropertyBag __RPC_FAR *__RPC_FAR *ppPropertyBag);

        END_INTERFACE
    } IWTSListenerVtbl;

    interface IWTSListener
    {
        CONST_VTBL struct IWTSListenerVtbl __RPC_FAR *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSListener_QueryInterface(This,riid,ppvObject)    \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWTSListener_AddRef(This)    \
    (This)->lpVtbl -> AddRef(This)

#define IWTSListener_Release(This)    \
    (This)->lpVtbl -> Release(This)


#define IWTSListener_GetConfiguration(This,ppPropertyBag)    \
    (This)->lpVtbl -> GetConfiguration(This,ppPropertyBag)

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSListener_GetConfiguration_Proxy(
    IWTSListener __RPC_FAR * This,
    /* [out] */ IPropertyBag __RPC_FAR *__RPC_FAR *ppPropertyBag);


void __RPC_STUB IWTSListener_GetConfiguration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IWTSListener_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0148 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSListenerCallback = {0xA1230203, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0148_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0148_v0_0_s_ifspec;

#ifndef __IWTSListenerCallback_INTERFACE_DEFINED__
#define __IWTSListenerCallback_INTERFACE_DEFINED__

/* interface IWTSListenerCallback */
/* [helpstring][oleautomation][uuid][object] */


EXTERN_C const IID IID_IWTSListenerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A1230203-d6a7-11d8-b9fd-000bdbd1f198")
    IWTSListenerCallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnNewChannelConnection(
            /* [in] */ IWTSVirtualChannel __RPC_FAR *pChannel,
            /* [full][in] */ BSTR data,
            /* [out] */ BOOL __RPC_FAR *pbAccept,
            /* [out] */ IWTSVirtualChannelCallback __RPC_FAR *__RPC_FAR *ppCallback) = 0;

    };

#else     /* C style interface */

    typedef struct IWTSListenerCallbackVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IWTSListenerCallback __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IWTSListenerCallback __RPC_FAR * This);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IWTSListenerCallback __RPC_FAR * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnNewChannelConnection )(
            IWTSListenerCallback __RPC_FAR * This,
            /* [in] */ IWTSVirtualChannel __RPC_FAR *pChannel,
            /* [full][in] */ BSTR data,
            /* [out] */ BOOL __RPC_FAR *pbAccept,
            /* [out] */ IWTSVirtualChannelCallback __RPC_FAR *__RPC_FAR *ppCallback);

        END_INTERFACE
    } IWTSListenerCallbackVtbl;

    interface IWTSListenerCallback
    {
        CONST_VTBL struct IWTSListenerCallbackVtbl __RPC_FAR *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSListenerCallback_QueryInterface(This,riid,ppvObject)    \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWTSListenerCallback_AddRef(This)    \
    (This)->lpVtbl -> AddRef(This)

#define IWTSListenerCallback_Release(This)    \
    (This)->lpVtbl -> Release(This)


#define IWTSListenerCallback_OnNewChannelConnection(This,pChannel,data,pbAccept,ppCallback)    \
    (This)->lpVtbl -> OnNewChannelConnection(This,pChannel,data,pbAccept,ppCallback)

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSListenerCallback_OnNewChannelConnection_Proxy(
    IWTSListenerCallback __RPC_FAR * This,
    /* [in] */ IWTSVirtualChannel __RPC_FAR *pChannel,
    /* [full][in] */ BSTR data,
    /* [out] */ BOOL __RPC_FAR *pbAccept,
    /* [out] */ IWTSVirtualChannelCallback __RPC_FAR *__RPC_FAR *ppCallback);


void __RPC_STUB IWTSListenerCallback_OnNewChannelConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IWTSListenerCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0149 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannelCallback = {0xA1230204, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0149_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0149_v0_0_s_ifspec;

#ifndef __IWTSVirtualChannelCallback_INTERFACE_DEFINED__
#define __IWTSVirtualChannelCallback_INTERFACE_DEFINED__

/* interface IWTSVirtualChannelCallback */
/* [helpstring][oleautomation][uuid][object] */


EXTERN_C const IID IID_IWTSVirtualChannelCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A1230204-d6a7-11d8-b9fd-000bdbd1f198")
    IWTSVirtualChannelCallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnDataReceived(
            /* [in] */ ULONG cbSize,
            /* [size_is][in] */ BYTE __RPC_FAR *pBuffer) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnClose( void) = 0;

    };

#else     /* C style interface */

    typedef struct IWTSVirtualChannelCallbackVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IWTSVirtualChannelCallback __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IWTSVirtualChannelCallback __RPC_FAR * This);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IWTSVirtualChannelCallback __RPC_FAR * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnDataReceived )(
            IWTSVirtualChannelCallback __RPC_FAR * This,
            /* [in] */ ULONG cbSize,
            /* [size_is][in] */ BYTE __RPC_FAR *pBuffer);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnClose )(
            IWTSVirtualChannelCallback __RPC_FAR * This);

        END_INTERFACE
    } IWTSVirtualChannelCallbackVtbl;

    interface IWTSVirtualChannelCallback
    {
        CONST_VTBL struct IWTSVirtualChannelCallbackVtbl __RPC_FAR *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSVirtualChannelCallback_QueryInterface(This,riid,ppvObject)    \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWTSVirtualChannelCallback_AddRef(This)    \
    (This)->lpVtbl -> AddRef(This)

#define IWTSVirtualChannelCallback_Release(This)    \
    (This)->lpVtbl -> Release(This)


#define IWTSVirtualChannelCallback_OnDataReceived(This,cbSize,pBuffer)    \
    (This)->lpVtbl -> OnDataReceived(This,cbSize,pBuffer)

#define IWTSVirtualChannelCallback_OnClose(This)    \
    (This)->lpVtbl -> OnClose(This)

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSVirtualChannelCallback_OnDataReceived_Proxy(
    IWTSVirtualChannelCallback __RPC_FAR * This,
    /* [in] */ ULONG cbSize,
    /* [size_is][in] */ BYTE __RPC_FAR *pBuffer);


void __RPC_STUB IWTSVirtualChannelCallback_OnDataReceived_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSVirtualChannelCallback_OnClose_Proxy(
    IWTSVirtualChannelCallback __RPC_FAR * This);


void __RPC_STUB IWTSVirtualChannelCallback_OnClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IWTSVirtualChannelCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0150 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannelManager = {0xA1230205,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}};
#define  TS_VC_LISTENER_STATIC_CHANNEL   0x00000001


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0150_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0150_v0_0_s_ifspec;

#ifndef __IWTSVirtualChannelManager_INTERFACE_DEFINED__
#define __IWTSVirtualChannelManager_INTERFACE_DEFINED__

/* interface IWTSVirtualChannelManager */
/* [helpstring][oleautomation][uuid][object] */


EXTERN_C const IID IID_IWTSVirtualChannelManager;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A1230205-d6a7-11d8-b9fd-000bdbd1f198")
    IWTSVirtualChannelManager : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateListener(
            /* [string][in] */ const char __RPC_FAR *pszChannelName,
            /* [in] */ ULONG uFlags,
            /* [in] */ IWTSListenerCallback __RPC_FAR *pListenerCallback,
            /* [out] */ IWTSListener __RPC_FAR *__RPC_FAR *ppListener) = 0;

    };

#else     /* C style interface */

    typedef struct IWTSVirtualChannelManagerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IWTSVirtualChannelManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IWTSVirtualChannelManager __RPC_FAR * This);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IWTSVirtualChannelManager __RPC_FAR * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateListener )(
            IWTSVirtualChannelManager __RPC_FAR * This,
            /* [string][in] */ const char __RPC_FAR *pszChannelName,
            /* [in] */ ULONG uFlags,
            /* [in] */ IWTSListenerCallback __RPC_FAR *pListenerCallback,
            /* [out] */ IWTSListener __RPC_FAR *__RPC_FAR *ppListener);

        END_INTERFACE
    } IWTSVirtualChannelManagerVtbl;

    interface IWTSVirtualChannelManager
    {
        CONST_VTBL struct IWTSVirtualChannelManagerVtbl __RPC_FAR *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSVirtualChannelManager_QueryInterface(This,riid,ppvObject)    \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWTSVirtualChannelManager_AddRef(This)    \
    (This)->lpVtbl -> AddRef(This)

#define IWTSVirtualChannelManager_Release(This)    \
    (This)->lpVtbl -> Release(This)


#define IWTSVirtualChannelManager_CreateListener(This,pszChannelName,uFlags,pListenerCallback,ppListener)    \
    (This)->lpVtbl -> CreateListener(This,pszChannelName,uFlags,pListenerCallback,ppListener)

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSVirtualChannelManager_CreateListener_Proxy(
    IWTSVirtualChannelManager __RPC_FAR * This,
    /* [string][in] */ const char __RPC_FAR *pszChannelName,
    /* [in] */ ULONG uFlags,
    /* [in] */ IWTSListenerCallback __RPC_FAR *pListenerCallback,
    /* [out] */ IWTSListener __RPC_FAR *__RPC_FAR *ppListener);


void __RPC_STUB IWTSVirtualChannelManager_CreateListener_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IWTSVirtualChannelManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0151 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannel = { 0xA1230207, 0xd6a7, 0x11d8, { 0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98} };


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0151_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0151_v0_0_s_ifspec;

#ifndef __IWTSVirtualChannel_INTERFACE_DEFINED__
#define __IWTSVirtualChannel_INTERFACE_DEFINED__

/* interface IWTSVirtualChannel */
/* [helpstring][oleautomation][uuid][object] */


EXTERN_C const IID IID_IWTSVirtualChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A1230207-d6a7-11d8-b9fd-000bdbd1f198")
    IWTSVirtualChannel : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Write(
            /* [in] */ ULONG cbSize,
            /* [size_is][in] */ BYTE __RPC_FAR *pBuffer,
            /* [in] */ IUnknown __RPC_FAR *pReserved) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;

    };

#else     /* C style interface */

    typedef struct IWTSVirtualChannelVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IWTSVirtualChannel __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IWTSVirtualChannel __RPC_FAR * This);

        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IWTSVirtualChannel __RPC_FAR * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Write )(
            IWTSVirtualChannel __RPC_FAR * This,
            /* [in] */ ULONG cbSize,
            /* [size_is][in] */ BYTE __RPC_FAR *pBuffer,
            /* [in] */ IUnknown __RPC_FAR *pReserved);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )(
            IWTSVirtualChannel __RPC_FAR * This);

        END_INTERFACE
    } IWTSVirtualChannelVtbl;

    interface IWTSVirtualChannel
    {
        CONST_VTBL struct IWTSVirtualChannelVtbl __RPC_FAR *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSVirtualChannel_QueryInterface(This,riid,ppvObject)    \
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IWTSVirtualChannel_AddRef(This)    \
    (This)->lpVtbl -> AddRef(This)

#define IWTSVirtualChannel_Release(This)    \
    (This)->lpVtbl -> Release(This)


#define IWTSVirtualChannel_Write(This,cbSize,pBuffer,pReserved)    \
    (This)->lpVtbl -> Write(This,cbSize,pBuffer,pReserved)

#define IWTSVirtualChannel_Close(This)    \
    (This)->lpVtbl -> Close(This)

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSVirtualChannel_Write_Proxy(
    IWTSVirtualChannel __RPC_FAR * This,
    /* [in] */ ULONG cbSize,
    /* [size_is][in] */ BYTE __RPC_FAR *pBuffer,
    /* [in] */ IUnknown __RPC_FAR *pReserved);


void __RPC_STUB IWTSVirtualChannel_Write_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IWTSVirtualChannel_Close_Proxy(
    IWTSVirtualChannel __RPC_FAR * This);


void __RPC_STUB IWTSVirtualChannel_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IWTSVirtualChannel_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * );
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


