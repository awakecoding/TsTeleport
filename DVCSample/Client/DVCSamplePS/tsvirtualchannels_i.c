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

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#ifdef __cplusplus
extern "C"{
#endif


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IWTSPlugin,0xA1230201,0x1439,0x4e62,0xa4,0x14,0x19,0x0d,0x0a,0xc3,0xd4,0x0e);


MIDL_DEFINE_GUID(IID, IID_IWTSListener,0xA1230206,0x9a39,0x4d58,0x86,0x74,0xcd,0xb4,0xdf,0xf4,0xe7,0x3b);


MIDL_DEFINE_GUID(IID, IID_IWTSListenerCallback,0xA1230203,0xd6a7,0x11d8,0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98);


MIDL_DEFINE_GUID(IID, IID_IWTSVirtualChannelCallback,0xA1230204,0xd6a7,0x11d8,0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98);


MIDL_DEFINE_GUID(IID, IID_IWTSVirtualChannelManager,0xA1230205,0xd6a7,0x11d8,0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98);


MIDL_DEFINE_GUID(IID, IID_IWTSVirtualChannel,0xA1230207,0xd6a7,0x11d8,0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AXP64)*/


#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#ifdef __cplusplus
extern "C"{
#endif


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IWTSPlugin,0xA1230201,0x1439,0x4e62,0xa4,0x14,0x19,0x0d,0x0a,0xc3,0xd4,0x0e);


MIDL_DEFINE_GUID(IID, IID_IWTSListener,0xA1230206,0x9a39,0x4d58,0x86,0x74,0xcd,0xb4,0xdf,0xf4,0xe7,0x3b);


MIDL_DEFINE_GUID(IID, IID_IWTSListenerCallback,0xA1230203,0xd6a7,0x11d8,0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98);


MIDL_DEFINE_GUID(IID, IID_IWTSVirtualChannelCallback,0xA1230204,0xd6a7,0x11d8,0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98);


MIDL_DEFINE_GUID(IID, IID_IWTSVirtualChannelManager,0xA1230205,0xd6a7,0x11d8,0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98);


MIDL_DEFINE_GUID(IID, IID_IWTSVirtualChannel,0xA1230207,0xd6a7,0x11d8,0xb9,0xfd,0x00,0x0b,0xdb,0xd1,0xf1,0x98);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* defined(_M_IA64) || defined(_M_AXP64)*/

