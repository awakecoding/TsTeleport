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


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for TSVirtualChannels.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data
    VC __declspec() decoration level:
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */

#ifndef __IWTSPlugin_FWD_DEFINED__
#define __IWTSPlugin_FWD_DEFINED__
typedef interface IWTSPlugin IWTSPlugin;
#endif   /* __IWTSPlugin_FWD_DEFINED__ */


#ifndef __IWTSListener_FWD_DEFINED__
#define __IWTSListener_FWD_DEFINED__
typedef interface IWTSListener IWTSListener;
#endif   /* __IWTSListener_FWD_DEFINED__ */


#ifndef __IWTSListenerCallback_FWD_DEFINED__
#define __IWTSListenerCallback_FWD_DEFINED__
typedef interface IWTSListenerCallback IWTSListenerCallback;
#endif   /* __IWTSListenerCallback_FWD_DEFINED__ */


#ifndef __IWTSVirtualChannelCallback_FWD_DEFINED__
#define __IWTSVirtualChannelCallback_FWD_DEFINED__
typedef interface IWTSVirtualChannelCallback IWTSVirtualChannelCallback;
#endif   /* __IWTSVirtualChannelCallback_FWD_DEFINED__ */


#ifndef __IWTSVirtualChannelManager_FWD_DEFINED__
#define __IWTSVirtualChannelManager_FWD_DEFINED__
typedef interface IWTSVirtualChannelManager IWTSVirtualChannelManager;
#endif   /* __IWTSVirtualChannelManager_FWD_DEFINED__ */


#ifndef __IWTSVirtualChannel_FWD_DEFINED__
#define __IWTSVirtualChannel_FWD_DEFINED__
typedef interface IWTSVirtualChannel IWTSVirtualChannel;
#endif   /* __IWTSVirtualChannel_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif


/* interface __MIDL_itf_TSVirtualChannels_0000_0000 */
/* [local] */







#define  WTS_PROPERTY_DEFAULT_CONFIG  L"DefaultConfig"
EXTERN_C __declspec(selectany) const IID IID_IWTSPlugin = {0xA1230201, 0x1439, 0x4e62, { 0xa4, 0x14, 0x19, 0x0d, 0x0a, 0xc3, 0xd4, 0x0e}};


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0000_v0_0_s_ifspec;

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
            /* [in] */ IWTSVirtualChannelManager *pChannelMgr) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Connected( void) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Disconnected(
            DWORD dwDisconnectCode) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Terminated( void) = 0;

    };

#else    /* C style interface */

    typedef struct IWTSPluginVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWTSPlugin * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWTSPlugin * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IWTSPlugin * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IWTSPlugin * This,
            /* [in] */ IWTSVirtualChannelManager *pChannelMgr);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Connected )(
            IWTSPlugin * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Disconnected )(
            IWTSPlugin * This,
            DWORD dwDisconnectCode);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Terminated )(
            IWTSPlugin * This);

        END_INTERFACE
    } IWTSPluginVtbl;

    interface IWTSPlugin
    {
        CONST_VTBL struct IWTSPluginVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSPlugin_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IWTSPlugin_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) )

#define IWTSPlugin_Release(This)  \
    ( (This)->lpVtbl -> Release(This) )


#define IWTSPlugin_Initialize(This,pChannelMgr) \
    ( (This)->lpVtbl -> Initialize(This,pChannelMgr) )

#define IWTSPlugin_Connected(This) \
    ( (This)->lpVtbl -> Connected(This) )

#define IWTSPlugin_Disconnected(This,dwDisconnectCode) \
    ( (This)->lpVtbl -> Disconnected(This,dwDisconnectCode) )

#define IWTSPlugin_Terminated(This) \
    ( (This)->lpVtbl -> Terminated(This) )

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IWTSPlugin_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0000_0001 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSListener = {0xA1230206, 0x9a39, 0x4d58, {0x86, 0x74, 0xcd, 0xb4, 0xdf, 0xf4, 0xe7, 0x3b}};


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0001_v0_0_s_ifspec;

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
            /* [out] */ IPropertyBag **ppPropertyBag) = 0;

    };

#else  /* C style interface */

    typedef struct IWTSListenerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWTSListener * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWTSListener * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IWTSListener * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetConfiguration )(
            IWTSListener * This,
            /* [out] */ IPropertyBag **ppPropertyBag);

        END_INTERFACE
    } IWTSListenerVtbl;

    interface IWTSListener
    {
        CONST_VTBL struct IWTSListenerVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSListener_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IWTSListener_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) )

#define IWTSListener_Release(This) \
    ( (This)->lpVtbl -> Release(This) )


#define IWTSListener_GetConfiguration(This,ppPropertyBag) \
    ( (This)->lpVtbl -> GetConfiguration(This,ppPropertyBag) )

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IWTSListener_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0000_0002 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSListenerCallback = {0xA1230203, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0002_v0_0_s_ifspec;

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
            /* [in] */ IWTSVirtualChannel *pChannel,
            /* [full][in] */ BSTR data,
            /* [out] */ BOOL *pbAccept,
            /* [out] */ IWTSVirtualChannelCallback **ppCallback) = 0;

    };

#else  /* C style interface */

    typedef struct IWTSListenerCallbackVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWTSListenerCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWTSListenerCallback * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IWTSListenerCallback * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnNewChannelConnection )(
            IWTSListenerCallback * This,
            /* [in] */ IWTSVirtualChannel *pChannel,
            /* [full][in] */ BSTR data,
            /* [out] */ BOOL *pbAccept,
            /* [out] */ IWTSVirtualChannelCallback **ppCallback);

        END_INTERFACE
    } IWTSListenerCallbackVtbl;

    interface IWTSListenerCallback
    {
        CONST_VTBL struct IWTSListenerCallbackVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSListenerCallback_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IWTSListenerCallback_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) )

#define IWTSListenerCallback_Release(This) \
    ( (This)->lpVtbl -> Release(This) )


#define IWTSListenerCallback_OnNewChannelConnection(This,pChannel,data,pbAccept,ppCallback) \
    ( (This)->lpVtbl -> OnNewChannelConnection(This,pChannel,data,pbAccept,ppCallback) )

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IWTSListenerCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0000_0003 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannelCallback = {0xA1230204, 0xd6a7, 0x11d8, {0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98}};


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0003_v0_0_s_ifspec;

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
            /* [size_is][in] */ BYTE *pBuffer) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnClose( void) = 0;

    };

#else  /* C style interface */

    typedef struct IWTSVirtualChannelCallbackVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWTSVirtualChannelCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWTSVirtualChannelCallback * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IWTSVirtualChannelCallback * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnDataReceived )(
            IWTSVirtualChannelCallback * This,
            /* [in] */ ULONG cbSize,
            /* [size_is][in] */ BYTE *pBuffer);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnClose )(
            IWTSVirtualChannelCallback * This);

        END_INTERFACE
    } IWTSVirtualChannelCallbackVtbl;

    interface IWTSVirtualChannelCallback
    {
        CONST_VTBL struct IWTSVirtualChannelCallbackVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSVirtualChannelCallback_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IWTSVirtualChannelCallback_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) )

#define IWTSVirtualChannelCallback_Release(This) \
    ( (This)->lpVtbl -> Release(This) )


#define IWTSVirtualChannelCallback_OnDataReceived(This,cbSize,pBuffer) \
    ( (This)->lpVtbl -> OnDataReceived(This,cbSize,pBuffer) )

#define IWTSVirtualChannelCallback_OnClose(This) \
    ( (This)->lpVtbl -> OnClose(This) )

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IWTSVirtualChannelCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0000_0004 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannelManager = {0xA1230205,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}};
#define  TS_VC_LISTENER_STATIC_CHANNEL   0x00000001


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0004_v0_0_s_ifspec;

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
            /* [string][in] */ const char *pszChannelName,
            /* [in] */ ULONG uFlags,
            /* [in] */ IWTSListenerCallback *pListenerCallback,
            /* [out] */ IWTSListener **ppListener) = 0;

    };

#else  /* C style interface */

    typedef struct IWTSVirtualChannelManagerVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWTSVirtualChannelManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWTSVirtualChannelManager * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IWTSVirtualChannelManager * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateListener )(
            IWTSVirtualChannelManager * This,
            /* [string][in] */ const char *pszChannelName,
            /* [in] */ ULONG uFlags,
            /* [in] */ IWTSListenerCallback *pListenerCallback,
            /* [out] */ IWTSListener **ppListener);

        END_INTERFACE
    } IWTSVirtualChannelManagerVtbl;

    interface IWTSVirtualChannelManager
    {
        CONST_VTBL struct IWTSVirtualChannelManagerVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSVirtualChannelManager_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IWTSVirtualChannelManager_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) )

#define IWTSVirtualChannelManager_Release(This) \
    ( (This)->lpVtbl -> Release(This) )


#define IWTSVirtualChannelManager_CreateListener(This,pszChannelName,uFlags,pListenerCallback,ppListener) \
    ( (This)->lpVtbl -> CreateListener(This,pszChannelName,uFlags,pListenerCallback,ppListener) )

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IWTSVirtualChannelManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_TSVirtualChannels_0000_0005 */
/* [local] */

EXTERN_C __declspec(selectany) const IID IID_IWTSVirtualChannel = { 0xA1230207, 0xd6a7, 0x11d8, { 0xb9, 0xfd, 0x00, 0x0b, 0xdb, 0xd1, 0xf1, 0x98} };


extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_TSVirtualChannels_0000_0005_v0_0_s_ifspec;

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
            /* [size_is][in] */ BYTE *pBuffer,
            /* [in] */ IUnknown *pReserved) = 0;

        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;

    };

#else  /* C style interface */

    typedef struct IWTSVirtualChannelVtbl
    {
        BEGIN_INTERFACE

        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWTSVirtualChannel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);

        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWTSVirtualChannel * This);

        ULONG ( STDMETHODCALLTYPE *Release )(
            IWTSVirtualChannel * This);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Write )(
            IWTSVirtualChannel * This,
            /* [in] */ ULONG cbSize,
            /* [size_is][in] */ BYTE *pBuffer,
            /* [in] */ IUnknown *pReserved);

        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )(
            IWTSVirtualChannel * This);

        END_INTERFACE
    } IWTSVirtualChannelVtbl;

    interface IWTSVirtualChannel
    {
        CONST_VTBL struct IWTSVirtualChannelVtbl *lpVtbl;
    };



#ifdef COBJMACROS


#define IWTSVirtualChannel_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )

#define IWTSVirtualChannel_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) )

#define IWTSVirtualChannel_Release(This) \
    ( (This)->lpVtbl -> Release(This) )


#define IWTSVirtualChannel_Write(This,cbSize,pBuffer,pReserved) \
    ( (This)->lpVtbl -> Write(This,cbSize,pBuffer,pReserved) )

#define IWTSVirtualChannel_Close(This) \
    ( (This)->lpVtbl -> Close(This) )

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IWTSVirtualChannel_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * );
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * );
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


