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

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AXP64)
#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "TSVirtualChannels.h"

#define TYPE_FORMAT_STRING_SIZE   197
#define PROC_FORMAT_STRING_SIZE   295
#define TRANSMIT_AS_TABLE_SIZE    0
#define WIRE_MARSHAL_TABLE_SIZE   1

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Standard interface: __MIDL_itf_TSVirtualChannels_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWTSPlugin, ver. 0.0,
   GUID={0xA1230201,0x1439,0x4e62,{0xa4,0x14,0x19,0x0d,0x0a,0xc3,0xd4,0x0e}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSPlugin_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSPlugin_FormatStringOffsetTable[] =
    {
    0,
    28,
    50,
    78
    };

static const MIDL_SERVER_INFO IWTSPlugin_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSPlugin_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSPlugin_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSPlugin_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IWTSPluginProxyVtbl =
{
    &IWTSPlugin_ProxyInfo,
    &IID_IWTSPlugin,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSPlugin::Initialize */ ,
    (void *)-1 /* IWTSPlugin::Connected */ ,
    (void *)-1 /* IWTSPlugin::Disconnected */ ,
    (void *)-1 /* IWTSPlugin::Terminated */
};

const CInterfaceStubVtbl _IWTSPluginStubVtbl =
{
    &IID_IWTSPlugin,
    &IWTSPlugin_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0147, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSListener, ver. 0.0,
   GUID={0xA1230206,0x9a39,0x4d58,{0x86,0x74,0xcd,0xb4,0xdf,0xf4,0xe7,0x3b}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSListener_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSListener_FormatStringOffsetTable[] =
    {
    100
    };

static const MIDL_SERVER_INFO IWTSListener_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSListener_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IWTSListenerProxyVtbl =
{
    &IWTSListener_ProxyInfo,
    &IID_IWTSListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSListener::GetConfiguration */
};

const CInterfaceStubVtbl _IWTSListenerStubVtbl =
{
    &IID_IWTSListener,
    &IWTSListener_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0148, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSListenerCallback, ver. 0.0,
   GUID={0xA1230203,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSListenerCallback_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSListenerCallback_FormatStringOffsetTable[] =
    {
    128
    };

static const MIDL_SERVER_INFO IWTSListenerCallback_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSListenerCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSListenerCallback_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSListenerCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IWTSListenerCallbackProxyVtbl =
{
    &IWTSListenerCallback_ProxyInfo,
    &IID_IWTSListenerCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSListenerCallback::OnNewChannelConnection */
};

const CInterfaceStubVtbl _IWTSListenerCallbackStubVtbl =
{
    &IID_IWTSListenerCallback,
    &IWTSListenerCallback_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0149, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSVirtualChannelCallback, ver. 0.0,
   GUID={0xA1230204,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSVirtualChannelCallback_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSVirtualChannelCallback_FormatStringOffsetTable[] =
    {
    174,
    28
    };

static const MIDL_SERVER_INFO IWTSVirtualChannelCallback_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannelCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSVirtualChannelCallback_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannelCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IWTSVirtualChannelCallbackProxyVtbl =
{
    &IWTSVirtualChannelCallback_ProxyInfo,
    &IID_IWTSVirtualChannelCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSVirtualChannelCallback::OnDataReceived */ ,
    (void *)-1 /* IWTSVirtualChannelCallback::OnClose */
};

const CInterfaceStubVtbl _IWTSVirtualChannelCallbackStubVtbl =
{
    &IID_IWTSVirtualChannelCallback,
    &IWTSVirtualChannelCallback_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0150, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSVirtualChannelManager, ver. 0.0,
   GUID={0xA1230205,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSVirtualChannelManager_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSVirtualChannelManager_FormatStringOffsetTable[] =
    {
    208
    };

static const MIDL_SERVER_INFO IWTSVirtualChannelManager_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannelManager_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSVirtualChannelManager_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannelManager_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IWTSVirtualChannelManagerProxyVtbl =
{
    &IWTSVirtualChannelManager_ProxyInfo,
    &IID_IWTSVirtualChannelManager,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSVirtualChannelManager::CreateListener */
};

const CInterfaceStubVtbl _IWTSVirtualChannelManagerStubVtbl =
{
    &IID_IWTSVirtualChannelManager,
    &IWTSVirtualChannelManager_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0151, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSVirtualChannel, ver. 0.0,
   GUID={0xA1230207,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSVirtualChannel_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSVirtualChannel_FormatStringOffsetTable[] =
    {
    254,
    28
    };

static const MIDL_SERVER_INFO IWTSVirtualChannel_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannel_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSVirtualChannel_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannel_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IWTSVirtualChannelProxyVtbl =
{
    &IWTSVirtualChannel_ProxyInfo,
    &IID_IWTSVirtualChannel,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSVirtualChannel::Write */ ,
    (void *)-1 /* IWTSVirtualChannel::Close */
};

const CInterfaceStubVtbl _IWTSVirtualChannelStubVtbl =
{
    &IID_IWTSVirtualChannel,
    &IWTSVirtualChannel_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

static const MIDL_STUB_DESC Object_StubDesc =
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x503011e, /* MIDL Version 5.3.286 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] =
        {

            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, [wire_marshal] or [user_marshal] attribute.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

    /* Procedure Initialize */

            0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/*  2 */    NdrFcLong( 0x0 ),    /* 0 */
/*  6 */    NdrFcShort( 0x3 ),    /* 3 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/*  8 */    NdrFcShort( 0xc ),    /* x86, MIPS, PPC Stack size/offset = 12 */
#else
            NdrFcShort( 0x18 ),    /* Alpha Stack size/offset = 24 */
#endif
/* 10 */    NdrFcShort( 0x0 ),    /* 0 */
/* 12 */    NdrFcShort( 0x8 ),    /* 8 */
/* 14 */    0x6,        /* Oi2 Flags:  clt must size, has return, */
            0x2,        /* 2 */

    /* Parameter pChannelMgr */

/* 16 */    NdrFcShort( 0xb ),    /* Flags:  must size, must free, in, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 18 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 20 */    NdrFcShort( 0x2 ),    /* Type Offset=2 */

    /* Return value */

/* 22 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 24 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 26 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure Close */


    /* Procedure OnClose */


    /* Procedure Connected */

/* 28 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 30 */    NdrFcLong( 0x0 ),    /* 0 */
/* 34 */    NdrFcShort( 0x4 ),    /* 4 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 36 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 38 */    NdrFcShort( 0x0 ),    /* 0 */
/* 40 */    NdrFcShort( 0x8 ),    /* 8 */
/* 42 */    0x4,        /* Oi2 Flags:  has return, */
            0x1,        /* 1 */

    /* Return value */


    /* Return value */


    /* Return value */

/* 44 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 46 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 48 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure Disconnected */

/* 50 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 52 */    NdrFcLong( 0x0 ),    /* 0 */
/* 56 */    NdrFcShort( 0x5 ),    /* 5 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 58 */    NdrFcShort( 0xc ),    /* x86, MIPS, PPC Stack size/offset = 12 */
#else
            NdrFcShort( 0x18 ),    /* Alpha Stack size/offset = 24 */
#endif
/* 60 */    NdrFcShort( 0x8 ),    /* 8 */
/* 62 */    NdrFcShort( 0x8 ),    /* 8 */
/* 64 */    0x4,        /* Oi2 Flags:  has return, */
            0x2,        /* 2 */

    /* Parameter dwDisconnectCode */

/* 66 */    NdrFcShort( 0x48 ),    /* Flags:  in, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 68 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 70 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Return value */

/* 72 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 74 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 76 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure Terminated */

/* 78 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 80 */    NdrFcLong( 0x0 ),    /* 0 */
/* 84 */    NdrFcShort( 0x6 ),    /* 6 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 86 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 88 */    NdrFcShort( 0x0 ),    /* 0 */
/* 90 */    NdrFcShort( 0x8 ),    /* 8 */
/* 92 */    0x4,        /* Oi2 Flags:  has return, */
            0x1,        /* 1 */

    /* Return value */

/* 94 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 96 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 98 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure GetConfiguration */

/* 100 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 102 */    NdrFcLong( 0x0 ),    /* 0 */
/* 106 */    NdrFcShort( 0x3 ),    /* 3 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 108 */    NdrFcShort( 0xc ),    /* x86, MIPS, PPC Stack size/offset = 12 */
#else
            NdrFcShort( 0x18 ),    /* Alpha Stack size/offset = 24 */
#endif
/* 110 */    NdrFcShort( 0x0 ),    /* 0 */
/* 112 */    NdrFcShort( 0x8 ),    /* 8 */
/* 114 */    0x5,        /* Oi2 Flags:  srv must size, has return, */
            0x2,        /* 2 */

    /* Parameter ppPropertyBag */

/* 116 */    NdrFcShort( 0x13 ),    /* Flags:  must size, must free, out, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 118 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 120 */    NdrFcShort( 0x14 ),    /* Type Offset=20 */

    /* Return value */

/* 122 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 124 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 126 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure OnNewChannelConnection */

/* 128 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 130 */    NdrFcLong( 0x0 ),    /* 0 */
/* 134 */    NdrFcShort( 0x3 ),    /* 3 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 136 */    NdrFcShort( 0x18 ),    /* x86, MIPS, PPC Stack size/offset = 24 */
#else
            NdrFcShort( 0x30 ),    /* Alpha Stack size/offset = 48 */
#endif
/* 138 */    NdrFcShort( 0x0 ),    /* 0 */
/* 140 */    NdrFcShort( 0x10 ),    /* 16 */
/* 142 */    0x7,        /* Oi2 Flags:  srv must size, clt must size, has return, */
            0x5,        /* 5 */

    /* Parameter pChannel */

/* 144 */    NdrFcShort( 0xb ),    /* Flags:  must size, must free, in, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 146 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 148 */    NdrFcShort( 0x2a ),    /* Type Offset=42 */

    /* Parameter data */

/* 150 */    NdrFcShort( 0x8b ),    /* Flags:  must size, must free, in, by val, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 152 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 154 */    NdrFcShort( 0x54 ),    /* Type Offset=84 */

    /* Parameter pbAccept */

/* 156 */    NdrFcShort( 0x2150 ),    /* Flags:  out, base type, simple ref, srv alloc size=8 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 158 */    NdrFcShort( 0xc ),    /* x86, MIPS, PPC Stack size/offset = 12 */
#else
            NdrFcShort( 0x18 ),    /* Alpha Stack size/offset = 24 */
#endif
/* 160 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Parameter ppCallback */

/* 162 */    NdrFcShort( 0x13 ),    /* Flags:  must size, must free, out, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 164 */    NdrFcShort( 0x10 ),    /* x86, MIPS, PPC Stack size/offset = 16 */
#else
            NdrFcShort( 0x20 ),    /* Alpha Stack size/offset = 32 */
#endif
/* 166 */    NdrFcShort( 0x62 ),    /* Type Offset=98 */

    /* Return value */

/* 168 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 170 */    NdrFcShort( 0x14 ),    /* x86, MIPS, PPC Stack size/offset = 20 */
#else
            NdrFcShort( 0x28 ),    /* Alpha Stack size/offset = 40 */
#endif
/* 172 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure OnDataReceived */

/* 174 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 176 */    NdrFcLong( 0x0 ),    /* 0 */
/* 180 */    NdrFcShort( 0x3 ),    /* 3 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 182 */    NdrFcShort( 0x10 ),    /* x86, MIPS, PPC Stack size/offset = 16 */
#else
            NdrFcShort( 0x20 ),    /* Alpha Stack size/offset = 32 */
#endif
/* 184 */    NdrFcShort( 0x8 ),    /* 8 */
/* 186 */    NdrFcShort( 0x8 ),    /* 8 */
/* 188 */    0x6,        /* Oi2 Flags:  clt must size, has return, */
            0x3,        /* 3 */

    /* Parameter cbSize */

/* 190 */    NdrFcShort( 0x48 ),    /* Flags:  in, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 192 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 194 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Parameter pBuffer */

/* 196 */    NdrFcShort( 0x10b ),    /* Flags:  must size, must free, in, simple ref, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 198 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 200 */    NdrFcShort( 0x7c ),    /* Type Offset=124 */

    /* Return value */

/* 202 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 204 */    NdrFcShort( 0xc ),    /* x86, MIPS, PPC Stack size/offset = 12 */
#else
            NdrFcShort( 0x18 ),    /* Alpha Stack size/offset = 24 */
#endif
/* 206 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure CreateListener */

/* 208 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 210 */    NdrFcLong( 0x0 ),    /* 0 */
/* 214 */    NdrFcShort( 0x3 ),    /* 3 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 216 */    NdrFcShort( 0x18 ),    /* x86, MIPS, PPC Stack size/offset = 24 */
#else
            NdrFcShort( 0x30 ),    /* Alpha Stack size/offset = 48 */
#endif
/* 218 */    NdrFcShort( 0x8 ),    /* 8 */
/* 220 */    NdrFcShort( 0x8 ),    /* 8 */
/* 222 */    0x7,        /* Oi2 Flags:  srv must size, clt must size, has return, */
            0x5,        /* 5 */

    /* Parameter pszChannelName */

/* 224 */    NdrFcShort( 0x10b ),    /* Flags:  must size, must free, in, simple ref, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 226 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 228 */    NdrFcShort( 0x88 ),    /* Type Offset=136 */

    /* Parameter uFlags */

/* 230 */    NdrFcShort( 0x48 ),    /* Flags:  in, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 232 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 234 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Parameter pListenerCallback */

/* 236 */    NdrFcShort( 0xb ),    /* Flags:  must size, must free, in, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 238 */    NdrFcShort( 0xc ),    /* x86, MIPS, PPC Stack size/offset = 12 */
#else
            NdrFcShort( 0x18 ),    /* Alpha Stack size/offset = 24 */
#endif
/* 240 */    NdrFcShort( 0x8a ),    /* Type Offset=138 */

    /* Parameter ppListener */

/* 242 */    NdrFcShort( 0x13 ),    /* Flags:  must size, must free, out, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 244 */    NdrFcShort( 0x10 ),    /* x86, MIPS, PPC Stack size/offset = 16 */
#else
            NdrFcShort( 0x20 ),    /* Alpha Stack size/offset = 32 */
#endif
/* 246 */    NdrFcShort( 0x9c ),    /* Type Offset=156 */

    /* Return value */

/* 248 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 250 */    NdrFcShort( 0x14 ),    /* x86, MIPS, PPC Stack size/offset = 20 */
#else
            NdrFcShort( 0x28 ),    /* Alpha Stack size/offset = 40 */
#endif
/* 252 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure Write */

/* 254 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 256 */    NdrFcLong( 0x0 ),    /* 0 */
/* 260 */    NdrFcShort( 0x3 ),    /* 3 */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 262 */    NdrFcShort( 0x14 ),    /* x86, MIPS, PPC Stack size/offset = 20 */
#else
            NdrFcShort( 0x28 ),    /* Alpha Stack size/offset = 40 */
#endif
/* 264 */    NdrFcShort( 0x8 ),    /* 8 */
/* 266 */    NdrFcShort( 0x8 ),    /* 8 */
/* 268 */    0x6,        /* Oi2 Flags:  clt must size, has return, */
            0x4,        /* 4 */

    /* Parameter cbSize */

/* 270 */    NdrFcShort( 0x48 ),    /* Flags:  in, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 272 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 274 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Parameter pBuffer */

/* 276 */    NdrFcShort( 0x10b ),    /* Flags:  must size, must free, in, simple ref, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 278 */    NdrFcShort( 0x8 ),    /* x86, MIPS, PPC Stack size/offset = 8 */
#else
            NdrFcShort( 0x10 ),    /* Alpha Stack size/offset = 16 */
#endif
/* 280 */    NdrFcShort( 0x7c ),    /* Type Offset=124 */

    /* Parameter pReserved */

/* 282 */    NdrFcShort( 0xb ),    /* Flags:  must size, must free, in, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 284 */    NdrFcShort( 0xc ),    /* x86, MIPS, PPC Stack size/offset = 12 */
#else
            NdrFcShort( 0x18 ),    /* Alpha Stack size/offset = 24 */
#endif
/* 286 */    NdrFcShort( 0xb2 ),    /* Type Offset=178 */

    /* Return value */

/* 288 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 290 */    NdrFcShort( 0x10 ),    /* x86, MIPS, PPC Stack size/offset = 16 */
#else
            NdrFcShort( 0x20 ),    /* Alpha Stack size/offset = 32 */
#endif
/* 292 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

            0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
            NdrFcShort( 0x0 ),    /* 0 */
/*  2 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/*  4 */    NdrFcLong( 0xa1230205 ),    /* -1591541243 */
/*  8 */    NdrFcShort( 0xd6a7 ),    /* -10585 */
/* 10 */    NdrFcShort( 0x11d8 ),    /* 4568 */
/* 12 */    0xb9,        /* 185 */
            0xfd,        /* 253 */
/* 14 */    0x0,        /* 0 */
            0xb,        /* 11 */
/* 16 */    0xdb,        /* 219 */
            0xd1,        /* 209 */
/* 18 */    0xf1,        /* 241 */
            0x98,        /* 152 */
/* 20 */
            0x11, 0x10,    /* FC_RP [pointer_deref] */
/* 22 */    NdrFcShort( 0x2 ),    /* Offset= 2 (24) */
/* 24 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 26 */    NdrFcLong( 0x55272a00 ),    /* 1428630016 */
/* 30 */    NdrFcShort( 0x42cb ),    /* 17099 */
/* 32 */    NdrFcShort( 0x11ce ),    /* 4558 */
/* 34 */    0x81,        /* 129 */
            0x35,        /* 53 */
/* 36 */    0x0,        /* 0 */
            0xaa,        /* 170 */
/* 38 */    0x0,        /* 0 */
            0x4b,        /* 75 */
/* 40 */    0xb8,        /* 184 */
            0x51,        /* 81 */
/* 42 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 44 */    NdrFcLong( 0xa1230207 ),    /* -1591541241 */
/* 48 */    NdrFcShort( 0xd6a7 ),    /* -10585 */
/* 50 */    NdrFcShort( 0x11d8 ),    /* 4568 */
/* 52 */    0xb9,        /* 185 */
            0xfd,        /* 253 */
/* 54 */    0x0,        /* 0 */
            0xb,        /* 11 */
/* 56 */    0xdb,        /* 219 */
            0xd1,        /* 209 */
/* 58 */    0xf1,        /* 241 */
            0x98,        /* 152 */
/* 60 */
            0x12, 0x0,    /* FC_UP */
/* 62 */    NdrFcShort( 0xc ),    /* Offset= 12 (74) */
/* 64 */
            0x1b,        /* FC_CARRAY */
            0x1,        /* 1 */
/* 66 */    NdrFcShort( 0x2 ),    /* 2 */
/* 68 */    0x9,        /* Corr desc: FC_ULONG */
            0x0,        /*  */
/* 70 */    NdrFcShort( 0xfffc ),    /* -4 */
/* 72 */    0x6,        /* FC_SHORT */
            0x5b,        /* FC_END */
/* 74 */
            0x17,        /* FC_CSTRUCT */
            0x3,        /* 3 */
/* 76 */    NdrFcShort( 0x8 ),    /* 8 */
/* 78 */    NdrFcShort( 0xfffffff2 ),    /* Offset= -14 (64) */
/* 80 */    0x8,        /* FC_LONG */
            0x8,        /* FC_LONG */
/* 82 */    0x5c,        /* FC_PAD */
            0x5b,        /* FC_END */
/* 84 */    0xb4,        /* FC_USER_MARSHAL */
            0x83,        /* 131 */
/* 86 */    NdrFcShort( 0x0 ),    /* 0 */
/* 88 */    NdrFcShort( 0x4 ),    /* 4 */
/* 90 */    NdrFcShort( 0x0 ),    /* 0 */
/* 92 */    NdrFcShort( 0xffffffe0 ),    /* Offset= -32 (60) */
/* 94 */
            0x11, 0xc,    /* FC_RP [alloced_on_stack] [simple_pointer] */
/* 96 */    0x8,        /* FC_LONG */
            0x5c,        /* FC_PAD */
/* 98 */
            0x11, 0x10,    /* FC_RP [pointer_deref] */
/* 100 */    NdrFcShort( 0x2 ),    /* Offset= 2 (102) */
/* 102 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 104 */    NdrFcLong( 0xa1230204 ),    /* -1591541244 */
/* 108 */    NdrFcShort( 0xd6a7 ),    /* -10585 */
/* 110 */    NdrFcShort( 0x11d8 ),    /* 4568 */
/* 112 */    0xb9,        /* 185 */
            0xfd,        /* 253 */
/* 114 */    0x0,        /* 0 */
            0xb,        /* 11 */
/* 116 */    0xdb,        /* 219 */
            0xd1,        /* 209 */
/* 118 */    0xf1,        /* 241 */
            0x98,        /* 152 */
/* 120 */
            0x11, 0x0,    /* FC_RP */
/* 122 */    NdrFcShort( 0x2 ),    /* Offset= 2 (124) */
/* 124 */
            0x1b,        /* FC_CARRAY */
            0x0,        /* 0 */
/* 126 */    NdrFcShort( 0x1 ),    /* 1 */
/* 128 */    0x29,        /* Corr desc:  parameter, FC_ULONG */
            0x0,        /*  */
#if !defined(_ALPHA_) && !(defined(_M_MRX000) && (_M_MRX000 >= 5000))
/* 130 */    NdrFcShort( 0x4 ),    /* x86, MIPS, PPC Stack size/offset = 4 */
#else
            NdrFcShort( 0x8 ),    /* Alpha Stack size/offset = 8 */
#endif
/* 132 */    0x1,        /* FC_BYTE */
            0x5b,        /* FC_END */
/* 134 */
            0x11, 0x8,    /* FC_RP [simple_pointer] */
/* 136 */
            0x22,        /* FC_C_CSTRING */
            0x5c,        /* FC_PAD */
/* 138 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 140 */    NdrFcLong( 0xa1230203 ),    /* -1591541245 */
/* 144 */    NdrFcShort( 0xd6a7 ),    /* -10585 */
/* 146 */    NdrFcShort( 0x11d8 ),    /* 4568 */
/* 148 */    0xb9,        /* 185 */
            0xfd,        /* 253 */
/* 150 */    0x0,        /* 0 */
            0xb,        /* 11 */
/* 152 */    0xdb,        /* 219 */
            0xd1,        /* 209 */
/* 154 */    0xf1,        /* 241 */
            0x98,        /* 152 */
/* 156 */
            0x11, 0x10,    /* FC_RP [pointer_deref] */
/* 158 */    NdrFcShort( 0x2 ),    /* Offset= 2 (160) */
/* 160 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 162 */    NdrFcLong( 0xa1230206 ),    /* -1591541242 */
/* 166 */    NdrFcShort( 0x9a39 ),    /* -26055 */
/* 168 */    NdrFcShort( 0x4d58 ),    /* 19800 */
/* 170 */    0x86,        /* 134 */
            0x74,        /* 116 */
/* 172 */    0xcd,        /* 205 */
            0xb4,        /* 180 */
/* 174 */    0xdf,        /* 223 */
            0xf4,        /* 244 */
/* 176 */    0xe7,        /* 231 */
            0x3b,        /* 59 */
/* 178 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 180 */    NdrFcLong( 0x0 ),    /* 0 */
/* 184 */    NdrFcShort( 0x0 ),    /* 0 */
/* 186 */    NdrFcShort( 0x0 ),    /* 0 */
/* 188 */    0xc0,        /* 192 */
            0x0,        /* 0 */
/* 190 */    0x0,        /* 0 */
            0x0,        /* 0 */
/* 192 */    0x0,        /* 0 */
            0x0,        /* 0 */
/* 194 */    0x0,        /* 0 */
            0x46,        /* 70 */

            0x0
        }
    };

const CInterfaceProxyVtbl * _TSVirtualChannels_ProxyVtblList[] =
{
    ( CInterfaceProxyVtbl *) &_IWTSPluginProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSListenerCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSVirtualChannelCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSVirtualChannelManagerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSVirtualChannelProxyVtbl,
    0
};

const CInterfaceStubVtbl * _TSVirtualChannels_StubVtblList[] =
{
    ( CInterfaceStubVtbl *) &_IWTSPluginStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSListenerCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSVirtualChannelCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSVirtualChannelManagerStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSListenerStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSVirtualChannelStubVtbl,
    0
};

PCInterfaceName const _TSVirtualChannels_InterfaceNamesList[] =
{
    "IWTSPlugin",
    "IWTSListenerCallback",
    "IWTSVirtualChannelCallback",
    "IWTSVirtualChannelManager",
    "IWTSListener",
    "IWTSVirtualChannel",
    0
};


#define _TSVirtualChannels_CHECK_IID(n)    IID_GENERIC_CHECK_IID( _TSVirtualChannels, pIID, n)

int __stdcall _TSVirtualChannels_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _TSVirtualChannels, 6, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _TSVirtualChannels, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _TSVirtualChannels, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _TSVirtualChannels, 6, *pIndex )

}

const ExtendedProxyFileInfo TSVirtualChannels_ProxyFileInfo =
{
    (PCInterfaceProxyVtblList *) & _TSVirtualChannels_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _TSVirtualChannels_StubVtblList,
    (const PCInterfaceName * ) & _TSVirtualChannels_InterfaceNamesList,
    0, // no delegation
    & _TSVirtualChannels_IID_Lookup,
    6,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};


#endif /* !defined(_M_IA64) && !defined(_M_AXP64)*/


#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 5.03.0286 */
/* at Mon Jun 29 18:34:52 2009
 */
/* Compiler settings for .\TSVirtualChannels.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win64 (32b run,appending), ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data
    VC __declspec() decoration level:
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if defined(_M_IA64) || defined(_M_AXP64)
#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "TSVirtualChannels.h"

#define TYPE_FORMAT_STRING_SIZE   201
#define PROC_FORMAT_STRING_SIZE   385
#define TRANSMIT_AS_TABLE_SIZE    0
#define WIRE_MARSHAL_TABLE_SIZE   1

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Standard interface: __MIDL_itf_TSVirtualChannels_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWTSPlugin, ver. 0.0,
   GUID={0xA1230201,0x1439,0x4e62,{0xa4,0x14,0x19,0x0d,0x0a,0xc3,0xd4,0x0e}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSPlugin_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSPlugin_FormatStringOffsetTable[] =
    {
    0,
    38,
    70,
    108
    };

static const MIDL_SERVER_INFO IWTSPlugin_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSPlugin_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSPlugin_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSPlugin_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IWTSPluginProxyVtbl =
{
    &IWTSPlugin_ProxyInfo,
    &IID_IWTSPlugin,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSPlugin::Initialize */ ,
    (void *)-1 /* IWTSPlugin::Connected */ ,
    (void *)-1 /* IWTSPlugin::Disconnected */ ,
    (void *)-1 /* IWTSPlugin::Terminated */
};

const CInterfaceStubVtbl _IWTSPluginStubVtbl =
{
    &IID_IWTSPlugin,
    &IWTSPlugin_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0147, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSListener, ver. 0.0,
   GUID={0xA1230206,0x9a39,0x4d58,{0x86,0x74,0xcd,0xb4,0xdf,0xf4,0xe7,0x3b}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSListener_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSListener_FormatStringOffsetTable[] =
    {
    140
    };

static const MIDL_SERVER_INFO IWTSListener_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSListener_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IWTSListenerProxyVtbl =
{
    &IWTSListener_ProxyInfo,
    &IID_IWTSListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSListener::GetConfiguration */
};

const CInterfaceStubVtbl _IWTSListenerStubVtbl =
{
    &IID_IWTSListener,
    &IWTSListener_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0148, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSListenerCallback, ver. 0.0,
   GUID={0xA1230203,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSListenerCallback_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSListenerCallback_FormatStringOffsetTable[] =
    {
    178
    };

static const MIDL_SERVER_INFO IWTSListenerCallback_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSListenerCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSListenerCallback_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSListenerCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IWTSListenerCallbackProxyVtbl =
{
    &IWTSListenerCallback_ProxyInfo,
    &IID_IWTSListenerCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSListenerCallback::OnNewChannelConnection */
};

const CInterfaceStubVtbl _IWTSListenerCallbackStubVtbl =
{
    &IID_IWTSListenerCallback,
    &IWTSListenerCallback_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0149, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSVirtualChannelCallback, ver. 0.0,
   GUID={0xA1230204,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSVirtualChannelCallback_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSVirtualChannelCallback_FormatStringOffsetTable[] =
    {
    234,
    38
    };

static const MIDL_SERVER_INFO IWTSVirtualChannelCallback_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannelCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSVirtualChannelCallback_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannelCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IWTSVirtualChannelCallbackProxyVtbl =
{
    &IWTSVirtualChannelCallback_ProxyInfo,
    &IID_IWTSVirtualChannelCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSVirtualChannelCallback::OnDataReceived */ ,
    (void *)-1 /* IWTSVirtualChannelCallback::OnClose */
};

const CInterfaceStubVtbl _IWTSVirtualChannelCallbackStubVtbl =
{
    &IID_IWTSVirtualChannelCallback,
    &IWTSVirtualChannelCallback_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0150, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSVirtualChannelManager, ver. 0.0,
   GUID={0xA1230205,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSVirtualChannelManager_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSVirtualChannelManager_FormatStringOffsetTable[] =
    {
    278
    };

static const MIDL_SERVER_INFO IWTSVirtualChannelManager_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannelManager_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSVirtualChannelManager_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannelManager_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IWTSVirtualChannelManagerProxyVtbl =
{
    &IWTSVirtualChannelManager_ProxyInfo,
    &IID_IWTSVirtualChannelManager,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSVirtualChannelManager::CreateListener */
};

const CInterfaceStubVtbl _IWTSVirtualChannelManagerStubVtbl =
{
    &IID_IWTSVirtualChannelManager,
    &IWTSVirtualChannelManager_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_TSVirtualChannels_0151, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IWTSVirtualChannel, ver. 0.0,
   GUID={0xA1230207,0xd6a7,0x11d8,{0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IWTSVirtualChannel_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IWTSVirtualChannel_FormatStringOffsetTable[] =
    {
    334,
    38
    };

static const MIDL_SERVER_INFO IWTSVirtualChannel_ServerInfo =
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannel_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IWTSVirtualChannel_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IWTSVirtualChannel_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IWTSVirtualChannelProxyVtbl =
{
    &IWTSVirtualChannel_ProxyInfo,
    &IID_IWTSVirtualChannel,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IWTSVirtualChannel::Write */ ,
    (void *)-1 /* IWTSVirtualChannel::Close */
};

const CInterfaceStubVtbl _IWTSVirtualChannelStubVtbl =
{
    &IID_IWTSVirtualChannel,
    &IWTSVirtualChannel_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

static const MIDL_STUB_DESC Object_StubDesc =
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x503011e, /* MIDL Version 5.3.286 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] =
        {

            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

    /* Procedure Initialize */

            0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/*  2 */    NdrFcLong( 0x0 ),    /* 0 */
/*  6 */    NdrFcShort( 0x3 ),    /* 3 */
/*  8 */    NdrFcShort( 0x18 ),    /* ia64, axp64 Stack size/offset = 24 */
/* 10 */    NdrFcShort( 0x0 ),    /* 0 */
/* 12 */    NdrFcShort( 0x8 ),    /* 8 */
/* 14 */    0x46,        /* Oi2 Flags:  clt must size, has return, has ext, */
            0x2,        /* 2 */
/* 16 */    0xa,        /* 10 */
            0x1,        /* Ext Flags:  new corr desc, */
/* 18 */    NdrFcShort( 0x0 ),    /* 0 */
/* 20 */    NdrFcShort( 0x0 ),    /* 0 */
/* 22 */    NdrFcShort( 0x0 ),    /* 0 */
/* 24 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Parameter pChannelMgr */

/* 26 */    NdrFcShort( 0xb ),    /* Flags:  must size, must free, in, */
/* 28 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 30 */    NdrFcShort( 0x2 ),    /* Type Offset=2 */

    /* Return value */

/* 32 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 34 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 36 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure Close */


    /* Procedure OnClose */


    /* Procedure Connected */

/* 38 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 40 */    NdrFcLong( 0x0 ),    /* 0 */
/* 44 */    NdrFcShort( 0x4 ),    /* 4 */
/* 46 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 48 */    NdrFcShort( 0x0 ),    /* 0 */
/* 50 */    NdrFcShort( 0x8 ),    /* 8 */
/* 52 */    0x44,        /* Oi2 Flags:  has return, has ext, */
            0x1,        /* 1 */
/* 54 */    0xa,        /* 10 */
            0x1,        /* Ext Flags:  new corr desc, */
/* 56 */    NdrFcShort( 0x0 ),    /* 0 */
/* 58 */    NdrFcShort( 0x0 ),    /* 0 */
/* 60 */    NdrFcShort( 0x0 ),    /* 0 */
/* 62 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Return value */


    /* Return value */


    /* Return value */

/* 64 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 66 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 68 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure Disconnected */

/* 70 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 72 */    NdrFcLong( 0x0 ),    /* 0 */
/* 76 */    NdrFcShort( 0x5 ),    /* 5 */
/* 78 */    NdrFcShort( 0x18 ),    /* ia64, axp64 Stack size/offset = 24 */
/* 80 */    NdrFcShort( 0x8 ),    /* 8 */
/* 82 */    NdrFcShort( 0x8 ),    /* 8 */
/* 84 */    0x44,        /* Oi2 Flags:  has return, has ext, */
            0x2,        /* 2 */
/* 86 */    0xa,        /* 10 */
            0x1,        /* Ext Flags:  new corr desc, */
/* 88 */    NdrFcShort( 0x0 ),    /* 0 */
/* 90 */    NdrFcShort( 0x0 ),    /* 0 */
/* 92 */    NdrFcShort( 0x0 ),    /* 0 */
/* 94 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Parameter dwDisconnectCode */

/* 96 */    NdrFcShort( 0x48 ),    /* Flags:  in, base type, */
/* 98 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 100 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Return value */

/* 102 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 104 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 106 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure Terminated */

/* 108 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 110 */    NdrFcLong( 0x0 ),    /* 0 */
/* 114 */    NdrFcShort( 0x6 ),    /* 6 */
/* 116 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 118 */    NdrFcShort( 0x0 ),    /* 0 */
/* 120 */    NdrFcShort( 0x8 ),    /* 8 */
/* 122 */    0x44,        /* Oi2 Flags:  has return, has ext, */
            0x1,        /* 1 */
/* 124 */    0xa,        /* 10 */
            0x1,        /* Ext Flags:  new corr desc, */
/* 126 */    NdrFcShort( 0x0 ),    /* 0 */
/* 128 */    NdrFcShort( 0x0 ),    /* 0 */
/* 130 */    NdrFcShort( 0x0 ),    /* 0 */
/* 132 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Return value */

/* 134 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 136 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 138 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure GetConfiguration */

/* 140 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 142 */    NdrFcLong( 0x0 ),    /* 0 */
/* 146 */    NdrFcShort( 0x3 ),    /* 3 */
/* 148 */    NdrFcShort( 0x18 ),    /* ia64, axp64 Stack size/offset = 24 */
/* 150 */    NdrFcShort( 0x0 ),    /* 0 */
/* 152 */    NdrFcShort( 0x8 ),    /* 8 */
/* 154 */    0x45,        /* Oi2 Flags:  srv must size, has return, has ext, */
            0x2,        /* 2 */
/* 156 */    0xa,        /* 10 */
            0x1,        /* Ext Flags:  new corr desc, */
/* 158 */    NdrFcShort( 0x0 ),    /* 0 */
/* 160 */    NdrFcShort( 0x0 ),    /* 0 */
/* 162 */    NdrFcShort( 0x0 ),    /* 0 */
/* 164 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Parameter ppPropertyBag */

/* 166 */    NdrFcShort( 0x13 ),    /* Flags:  must size, must free, out, */
/* 168 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 170 */    NdrFcShort( 0x14 ),    /* Type Offset=20 */

    /* Return value */

/* 172 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 174 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 176 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure OnNewChannelConnection */

/* 178 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 180 */    NdrFcLong( 0x0 ),    /* 0 */
/* 184 */    NdrFcShort( 0x3 ),    /* 3 */
/* 186 */    NdrFcShort( 0x30 ),    /* ia64, axp64 Stack size/offset = 48 */
/* 188 */    NdrFcShort( 0x0 ),    /* 0 */
/* 190 */    NdrFcShort( 0x10 ),    /* 16 */
/* 192 */    0x47,        /* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
            0x5,        /* 5 */
/* 194 */    0xa,        /* 10 */
            0x5,        /* Ext Flags:  new corr desc, srv corr check, */
/* 196 */    NdrFcShort( 0x0 ),    /* 0 */
/* 198 */    NdrFcShort( 0x1 ),    /* 1 */
/* 200 */    NdrFcShort( 0x0 ),    /* 0 */
/* 202 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Parameter pChannel */

/* 204 */    NdrFcShort( 0xb ),    /* Flags:  must size, must free, in, */
/* 206 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 208 */    NdrFcShort( 0x2a ),    /* Type Offset=42 */

    /* Parameter data */

/* 210 */    NdrFcShort( 0x8b ),    /* Flags:  must size, must free, in, by val, */
/* 212 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 214 */    NdrFcShort( 0x56 ),    /* Type Offset=86 */

    /* Parameter pbAccept */

/* 216 */    NdrFcShort( 0x2150 ),    /* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 218 */    NdrFcShort( 0x18 ),    /* ia64, axp64 Stack size/offset = 24 */
/* 220 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Parameter ppCallback */

/* 222 */    NdrFcShort( 0x13 ),    /* Flags:  must size, must free, out, */
/* 224 */    NdrFcShort( 0x20 ),    /* ia64, axp64 Stack size/offset = 32 */
/* 226 */    NdrFcShort( 0x64 ),    /* Type Offset=100 */

    /* Return value */

/* 228 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 230 */    NdrFcShort( 0x28 ),    /* ia64, axp64 Stack size/offset = 40 */
/* 232 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure OnDataReceived */

/* 234 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 236 */    NdrFcLong( 0x0 ),    /* 0 */
/* 240 */    NdrFcShort( 0x3 ),    /* 3 */
/* 242 */    NdrFcShort( 0x20 ),    /* ia64, axp64 Stack size/offset = 32 */
/* 244 */    NdrFcShort( 0x8 ),    /* 8 */
/* 246 */    NdrFcShort( 0x8 ),    /* 8 */
/* 248 */    0x46,        /* Oi2 Flags:  clt must size, has return, has ext, */
            0x3,        /* 3 */
/* 250 */    0xa,        /* 10 */
            0x5,        /* Ext Flags:  new corr desc, srv corr check, */
/* 252 */    NdrFcShort( 0x0 ),    /* 0 */
/* 254 */    NdrFcShort( 0x1 ),    /* 1 */
/* 256 */    NdrFcShort( 0x0 ),    /* 0 */
/* 258 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Parameter cbSize */

/* 260 */    NdrFcShort( 0x48 ),    /* Flags:  in, base type, */
/* 262 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 264 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Parameter pBuffer */

/* 266 */    NdrFcShort( 0x10b ),    /* Flags:  must size, must free, in, simple ref, */
/* 268 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 270 */    NdrFcShort( 0x7e ),    /* Type Offset=126 */

    /* Return value */

/* 272 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 274 */    NdrFcShort( 0x18 ),    /* ia64, axp64 Stack size/offset = 24 */
/* 276 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure CreateListener */

/* 278 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 280 */    NdrFcLong( 0x0 ),    /* 0 */
/* 284 */    NdrFcShort( 0x3 ),    /* 3 */
/* 286 */    NdrFcShort( 0x30 ),    /* ia64, axp64 Stack size/offset = 48 */
/* 288 */    NdrFcShort( 0x8 ),    /* 8 */
/* 290 */    NdrFcShort( 0x8 ),    /* 8 */
/* 292 */    0x47,        /* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
            0x5,        /* 5 */
/* 294 */    0xa,        /* 10 */
            0x1,        /* Ext Flags:  new corr desc, */
/* 296 */    NdrFcShort( 0x0 ),    /* 0 */
/* 298 */    NdrFcShort( 0x0 ),    /* 0 */
/* 300 */    NdrFcShort( 0x0 ),    /* 0 */
/* 302 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Parameter pszChannelName */

/* 304 */    NdrFcShort( 0x10b ),    /* Flags:  must size, must free, in, simple ref, */
/* 306 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 308 */    NdrFcShort( 0x8c ),    /* Type Offset=140 */

    /* Parameter uFlags */

/* 310 */    NdrFcShort( 0x48 ),    /* Flags:  in, base type, */
/* 312 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 314 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Parameter pListenerCallback */

/* 316 */    NdrFcShort( 0xb ),    /* Flags:  must size, must free, in, */
/* 318 */    NdrFcShort( 0x18 ),    /* ia64, axp64 Stack size/offset = 24 */
/* 320 */    NdrFcShort( 0x8e ),    /* Type Offset=142 */

    /* Parameter ppListener */

/* 322 */    NdrFcShort( 0x13 ),    /* Flags:  must size, must free, out, */
/* 324 */    NdrFcShort( 0x20 ),    /* ia64, axp64 Stack size/offset = 32 */
/* 326 */    NdrFcShort( 0xa0 ),    /* Type Offset=160 */

    /* Return value */

/* 328 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 330 */    NdrFcShort( 0x28 ),    /* ia64, axp64 Stack size/offset = 40 */
/* 332 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Procedure Write */

/* 334 */    0x33,        /* FC_AUTO_HANDLE */
            0x6c,        /* Old Flags:  object, Oi2 */
/* 336 */    NdrFcLong( 0x0 ),    /* 0 */
/* 340 */    NdrFcShort( 0x3 ),    /* 3 */
/* 342 */    NdrFcShort( 0x28 ),    /* ia64, axp64 Stack size/offset = 40 */
/* 344 */    NdrFcShort( 0x8 ),    /* 8 */
/* 346 */    NdrFcShort( 0x8 ),    /* 8 */
/* 348 */    0x46,        /* Oi2 Flags:  clt must size, has return, has ext, */
            0x4,        /* 4 */
/* 350 */    0xa,        /* 10 */
            0x5,        /* Ext Flags:  new corr desc, srv corr check, */
/* 352 */    NdrFcShort( 0x0 ),    /* 0 */
/* 354 */    NdrFcShort( 0x1 ),    /* 1 */
/* 356 */    NdrFcShort( 0x0 ),    /* 0 */
/* 358 */    NdrFcShort( 0x0 ),    /* 0 */

    /* Parameter cbSize */

/* 360 */    NdrFcShort( 0x48 ),    /* Flags:  in, base type, */
/* 362 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 364 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

    /* Parameter pBuffer */

/* 366 */    NdrFcShort( 0x10b ),    /* Flags:  must size, must free, in, simple ref, */
/* 368 */    NdrFcShort( 0x10 ),    /* ia64, axp64 Stack size/offset = 16 */
/* 370 */    NdrFcShort( 0x7e ),    /* Type Offset=126 */

    /* Parameter pReserved */

/* 372 */    NdrFcShort( 0xb ),    /* Flags:  must size, must free, in, */
/* 374 */    NdrFcShort( 0x18 ),    /* ia64, axp64 Stack size/offset = 24 */
/* 376 */    NdrFcShort( 0xb6 ),    /* Type Offset=182 */

    /* Return value */

/* 378 */    NdrFcShort( 0x70 ),    /* Flags:  out, return, base type, */
/* 380 */    NdrFcShort( 0x20 ),    /* ia64, axp64 Stack size/offset = 32 */
/* 382 */    0x8,        /* FC_LONG */
            0x0,        /* 0 */

            0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
            NdrFcShort( 0x0 ),    /* 0 */
/*  2 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/*  4 */    NdrFcLong( 0xa1230205 ),    /* -1591541243 */
/*  8 */    NdrFcShort( 0xd6a7 ),    /* -10585 */
/* 10 */    NdrFcShort( 0x11d8 ),    /* 4568 */
/* 12 */    0xb9,        /* 185 */
            0xfd,        /* 253 */
/* 14 */    0x0,        /* 0 */
            0xb,        /* 11 */
/* 16 */    0xdb,        /* 219 */
            0xd1,        /* 209 */
/* 18 */    0xf1,        /* 241 */
            0x98,        /* 152 */
/* 20 */
            0x11, 0x10,    /* FC_RP [pointer_deref] */
/* 22 */    NdrFcShort( 0x2 ),    /* Offset= 2 (24) */
/* 24 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 26 */    NdrFcLong( 0x55272a00 ),    /* 1428630016 */
/* 30 */    NdrFcShort( 0x42cb ),    /* 17099 */
/* 32 */    NdrFcShort( 0x11ce ),    /* 4558 */
/* 34 */    0x81,        /* 129 */
            0x35,        /* 53 */
/* 36 */    0x0,        /* 0 */
            0xaa,        /* 170 */
/* 38 */    0x0,        /* 0 */
            0x4b,        /* 75 */
/* 40 */    0xb8,        /* 184 */
            0x51,        /* 81 */
/* 42 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 44 */    NdrFcLong( 0xa1230207 ),    /* -1591541241 */
/* 48 */    NdrFcShort( 0xd6a7 ),    /* -10585 */
/* 50 */    NdrFcShort( 0x11d8 ),    /* 4568 */
/* 52 */    0xb9,        /* 185 */
            0xfd,        /* 253 */
/* 54 */    0x0,        /* 0 */
            0xb,        /* 11 */
/* 56 */    0xdb,        /* 219 */
            0xd1,        /* 209 */
/* 58 */    0xf1,        /* 241 */
            0x98,        /* 152 */
/* 60 */
            0x12, 0x0,    /* FC_UP */
/* 62 */    NdrFcShort( 0xe ),    /* Offset= 14 (76) */
/* 64 */
            0x1b,        /* FC_CARRAY */
            0x1,        /* 1 */
/* 66 */    NdrFcShort( 0x2 ),    /* 2 */
/* 68 */    0x9,        /* Corr desc: FC_ULONG */
            0x0,        /*  */
/* 70 */    NdrFcShort( 0xfffc ),    /* -4 */
/* 72 */    NdrFcShort( 0x1 ),    /* Corr flags:  early, */
/* 74 */    0x6,        /* FC_SHORT */
            0x5b,        /* FC_END */
/* 76 */
            0x17,        /* FC_CSTRUCT */
            0x3,        /* 3 */
/* 78 */    NdrFcShort( 0x8 ),    /* 8 */
/* 80 */    NdrFcShort( 0xfffffff0 ),    /* Offset= -16 (64) */
/* 82 */    0x8,        /* FC_LONG */
            0x8,        /* FC_LONG */
/* 84 */    0x5c,        /* FC_PAD */
            0x5b,        /* FC_END */
/* 86 */    0xb4,        /* FC_USER_MARSHAL */
            0x83,        /* 131 */
/* 88 */    NdrFcShort( 0x0 ),    /* 0 */
/* 90 */    NdrFcShort( 0x8 ),    /* 8 */
/* 92 */    NdrFcShort( 0x0 ),    /* 0 */
/* 94 */    NdrFcShort( 0xffffffde ),    /* Offset= -34 (60) */
/* 96 */
            0x11, 0xc,    /* FC_RP [alloced_on_stack] [simple_pointer] */
/* 98 */    0x8,        /* FC_LONG */
            0x5c,        /* FC_PAD */
/* 100 */
            0x11, 0x10,    /* FC_RP [pointer_deref] */
/* 102 */    NdrFcShort( 0x2 ),    /* Offset= 2 (104) */
/* 104 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 106 */    NdrFcLong( 0xa1230204 ),    /* -1591541244 */
/* 110 */    NdrFcShort( 0xd6a7 ),    /* -10585 */
/* 112 */    NdrFcShort( 0x11d8 ),    /* 4568 */
/* 114 */    0xb9,        /* 185 */
            0xfd,        /* 253 */
/* 116 */    0x0,        /* 0 */
            0xb,        /* 11 */
/* 118 */    0xdb,        /* 219 */
            0xd1,        /* 209 */
/* 120 */    0xf1,        /* 241 */
            0x98,        /* 152 */
/* 122 */
            0x11, 0x0,    /* FC_RP */
/* 124 */    NdrFcShort( 0x2 ),    /* Offset= 2 (126) */
/* 126 */
            0x1b,        /* FC_CARRAY */
            0x0,        /* 0 */
/* 128 */    NdrFcShort( 0x1 ),    /* 1 */
/* 130 */    0x29,        /* Corr desc:  parameter, FC_ULONG */
            0x0,        /*  */
/* 132 */    NdrFcShort( 0x8 ),    /* ia64, axp64 Stack size/offset = 8 */
/* 134 */    NdrFcShort( 0x1 ),    /* Corr flags:  early, */
/* 136 */    0x1,        /* FC_BYTE */
            0x5b,        /* FC_END */
/* 138 */
            0x11, 0x8,    /* FC_RP [simple_pointer] */
/* 140 */
            0x22,        /* FC_C_CSTRING */
            0x5c,        /* FC_PAD */
/* 142 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 144 */    NdrFcLong( 0xa1230203 ),    /* -1591541245 */
/* 148 */    NdrFcShort( 0xd6a7 ),    /* -10585 */
/* 150 */    NdrFcShort( 0x11d8 ),    /* 4568 */
/* 152 */    0xb9,        /* 185 */
            0xfd,        /* 253 */
/* 154 */    0x0,        /* 0 */
            0xb,        /* 11 */
/* 156 */    0xdb,        /* 219 */
            0xd1,        /* 209 */
/* 158 */    0xf1,        /* 241 */
            0x98,        /* 152 */
/* 160 */
            0x11, 0x10,    /* FC_RP [pointer_deref] */
/* 162 */    NdrFcShort( 0x2 ),    /* Offset= 2 (164) */
/* 164 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 166 */    NdrFcLong( 0xa1230206 ),    /* -1591541242 */
/* 170 */    NdrFcShort( 0x9a39 ),    /* -26055 */
/* 172 */    NdrFcShort( 0x4d58 ),    /* 19800 */
/* 174 */    0x86,        /* 134 */
            0x74,        /* 116 */
/* 176 */    0xcd,        /* 205 */
            0xb4,        /* 180 */
/* 178 */    0xdf,        /* 223 */
            0xf4,        /* 244 */
/* 180 */    0xe7,        /* 231 */
            0x3b,        /* 59 */
/* 182 */
            0x2f,        /* FC_IP */
            0x5a,        /* FC_CONSTANT_IID */
/* 184 */    NdrFcLong( 0x0 ),    /* 0 */
/* 188 */    NdrFcShort( 0x0 ),    /* 0 */
/* 190 */    NdrFcShort( 0x0 ),    /* 0 */
/* 192 */    0xc0,        /* 192 */
            0x0,        /* 0 */
/* 194 */    0x0,        /* 0 */
            0x0,        /* 0 */
/* 196 */    0x0,        /* 0 */
            0x0,        /* 0 */
/* 198 */    0x0,        /* 0 */
            0x46,        /* 70 */

            0x0
        }
    };

const CInterfaceProxyVtbl * _TSVirtualChannels_ProxyVtblList[] =
{
    ( CInterfaceProxyVtbl *) &_IWTSPluginProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSListenerCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSVirtualChannelCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSVirtualChannelManagerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWTSVirtualChannelProxyVtbl,
    0
};

const CInterfaceStubVtbl * _TSVirtualChannels_StubVtblList[] =
{
    ( CInterfaceStubVtbl *) &_IWTSPluginStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSListenerCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSVirtualChannelCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSVirtualChannelManagerStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSListenerStubVtbl,
    ( CInterfaceStubVtbl *) &_IWTSVirtualChannelStubVtbl,
    0
};

PCInterfaceName const _TSVirtualChannels_InterfaceNamesList[] =
{
    "IWTSPlugin",
    "IWTSListenerCallback",
    "IWTSVirtualChannelCallback",
    "IWTSVirtualChannelManager",
    "IWTSListener",
    "IWTSVirtualChannel",
    0
};


#define _TSVirtualChannels_CHECK_IID(n)    IID_GENERIC_CHECK_IID( _TSVirtualChannels, pIID, n)

int __stdcall _TSVirtualChannels_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _TSVirtualChannels, 6, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _TSVirtualChannels, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _TSVirtualChannels, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _TSVirtualChannels, 6, *pIndex )

}

const ExtendedProxyFileInfo TSVirtualChannels_ProxyFileInfo =
{
    (PCInterfaceProxyVtblList *) & _TSVirtualChannels_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _TSVirtualChannels_StubVtblList,
    (const PCInterfaceName * ) & _TSVirtualChannels_InterfaceNamesList,
    0, // no delegation
    & _TSVirtualChannels_IID_Lookup,
    6,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};


#endif /* defined(_M_IA64) || defined(_M_AXP64)*/

