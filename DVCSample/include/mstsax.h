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
/* Compiler settings for mstsax.idl:
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

#ifndef __mstsax_h__
#define __mstsax_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMsTscNonScriptable_FWD_DEFINED__
#define __IMsTscNonScriptable_FWD_DEFINED__
typedef interface IMsTscNonScriptable IMsTscNonScriptable;
#endif     /* __IMsTscNonScriptable_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable_FWD_DEFINED__
#define __IMsRdpClientNonScriptable_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable IMsRdpClientNonScriptable;
#endif     /* __IMsRdpClientNonScriptable_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable2_FWD_DEFINED__
#define __IMsRdpClientNonScriptable2_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable2 IMsRdpClientNonScriptable2;
#endif     /* __IMsRdpClientNonScriptable2_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable3_FWD_DEFINED__
#define __IMsRdpClientNonScriptable3_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable3 IMsRdpClientNonScriptable3;
#endif     /* __IMsRdpClientNonScriptable3_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable4_FWD_DEFINED__
#define __IMsRdpClientNonScriptable4_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable4 IMsRdpClientNonScriptable4;
#endif     /* __IMsRdpClientNonScriptable4_FWD_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable5_FWD_DEFINED__
#define __IMsRdpClientNonScriptable5_FWD_DEFINED__
typedef interface IMsRdpClientNonScriptable5 IMsRdpClientNonScriptable5;
#endif     /* __IMsRdpClientNonScriptable5_FWD_DEFINED__ */


#ifndef __IMsTscSecuredSettings_FWD_DEFINED__
#define __IMsTscSecuredSettings_FWD_DEFINED__
typedef interface IMsTscSecuredSettings IMsTscSecuredSettings;
#endif     /* __IMsTscSecuredSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientSecuredSettings_FWD_DEFINED__
#define __IMsRdpClientSecuredSettings_FWD_DEFINED__
typedef interface IMsRdpClientSecuredSettings IMsRdpClientSecuredSettings;
#endif     /* __IMsRdpClientSecuredSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientSecuredSettings2_FWD_DEFINED__
#define __IMsRdpClientSecuredSettings2_FWD_DEFINED__
typedef interface IMsRdpClientSecuredSettings2 IMsRdpClientSecuredSettings2;
#endif     /* __IMsRdpClientSecuredSettings2_FWD_DEFINED__ */


#ifndef __IMsTscDebug_FWD_DEFINED__
#define __IMsTscDebug_FWD_DEFINED__
typedef interface IMsTscDebug IMsTscDebug;
#endif     /* __IMsTscDebug_FWD_DEFINED__ */


#ifndef __IMsRdpDrive_FWD_DEFINED__
#define __IMsRdpDrive_FWD_DEFINED__
typedef interface IMsRdpDrive IMsRdpDrive;
#endif     /* __IMsRdpDrive_FWD_DEFINED__ */


#ifndef __IMsRdpDriveCollection_FWD_DEFINED__
#define __IMsRdpDriveCollection_FWD_DEFINED__
typedef interface IMsRdpDriveCollection IMsRdpDriveCollection;
#endif     /* __IMsRdpDriveCollection_FWD_DEFINED__ */


#ifndef __IMsRdpDevice_FWD_DEFINED__
#define __IMsRdpDevice_FWD_DEFINED__
typedef interface IMsRdpDevice IMsRdpDevice;
#endif     /* __IMsRdpDevice_FWD_DEFINED__ */


#ifndef __IMsRdpDeviceCEV2_FWD_DEFINED__
#define __IMsRdpDeviceCEV2_FWD_DEFINED__
typedef interface IMsRdpDeviceCEV2 IMsRdpDeviceCEV2;
#endif     /* __IMsRdpDeviceCEV2_FWD_DEFINED__ */


#ifndef __IMsRdpDeviceCollection_FWD_DEFINED__
#define __IMsRdpDeviceCollection_FWD_DEFINED__
typedef interface IMsRdpDeviceCollection IMsRdpDeviceCollection;
#endif     /* __IMsRdpDeviceCollection_FWD_DEFINED__ */


#ifndef __IMsTscAdvancedSettings_FWD_DEFINED__
#define __IMsTscAdvancedSettings_FWD_DEFINED__
typedef interface IMsTscAdvancedSettings IMsTscAdvancedSettings;
#endif     /* __IMsTscAdvancedSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings IMsRdpClientAdvancedSettings;
#endif     /* __IMsRdpClientAdvancedSettings_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings2_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings2_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings2 IMsRdpClientAdvancedSettings2;
#endif     /* __IMsRdpClientAdvancedSettings2_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings3_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings3_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings3 IMsRdpClientAdvancedSettings3;
#endif     /* __IMsRdpClientAdvancedSettings3_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings4_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings4_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings4 IMsRdpClientAdvancedSettings4;
#endif     /* __IMsRdpClientAdvancedSettings4_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings5_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings5_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings5 IMsRdpClientAdvancedSettings5;
#endif     /* __IMsRdpClientAdvancedSettings5_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings6_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings6_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings6 IMsRdpClientAdvancedSettings6;
#endif     /* __IMsRdpClientAdvancedSettings6_FWD_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings7_FWD_DEFINED__
#define __IMsRdpClientAdvancedSettings7_FWD_DEFINED__
typedef interface IMsRdpClientAdvancedSettings7 IMsRdpClientAdvancedSettings7;
#endif     /* __IMsRdpClientAdvancedSettings7_FWD_DEFINED__ */


#ifndef __IMsTscAx_Redist_FWD_DEFINED__
#define __IMsTscAx_Redist_FWD_DEFINED__
typedef interface IMsTscAx_Redist IMsTscAx_Redist;
#endif     /* __IMsTscAx_Redist_FWD_DEFINED__ */


#ifndef __IMsTscAx_FWD_DEFINED__
#define __IMsTscAx_FWD_DEFINED__
typedef interface IMsTscAx IMsTscAx;
#endif     /* __IMsTscAx_FWD_DEFINED__ */


#ifndef __IMsRdpClient_FWD_DEFINED__
#define __IMsRdpClient_FWD_DEFINED__
typedef interface IMsRdpClient IMsRdpClient;
#endif     /* __IMsRdpClient_FWD_DEFINED__ */


#ifndef __IMsRdpClient2_FWD_DEFINED__
#define __IMsRdpClient2_FWD_DEFINED__
typedef interface IMsRdpClient2 IMsRdpClient2;
#endif     /* __IMsRdpClient2_FWD_DEFINED__ */


#ifndef __IMsRdpClient3_FWD_DEFINED__
#define __IMsRdpClient3_FWD_DEFINED__
typedef interface IMsRdpClient3 IMsRdpClient3;
#endif     /* __IMsRdpClient3_FWD_DEFINED__ */


#ifndef __IMsRdpClient4_FWD_DEFINED__
#define __IMsRdpClient4_FWD_DEFINED__
typedef interface IMsRdpClient4 IMsRdpClient4;
#endif     /* __IMsRdpClient4_FWD_DEFINED__ */


#ifndef __IMsRdpClient5_FWD_DEFINED__
#define __IMsRdpClient5_FWD_DEFINED__
typedef interface IMsRdpClient5 IMsRdpClient5;
#endif     /* __IMsRdpClient5_FWD_DEFINED__ */


#ifndef __IMsRdpClient6_FWD_DEFINED__
#define __IMsRdpClient6_FWD_DEFINED__
typedef interface IMsRdpClient6 IMsRdpClient6;
#endif     /* __IMsRdpClient6_FWD_DEFINED__ */


#ifndef __IMsRdpClient7_FWD_DEFINED__
#define __IMsRdpClient7_FWD_DEFINED__
typedef interface IMsRdpClient7 IMsRdpClient7;
#endif     /* __IMsRdpClient7_FWD_DEFINED__ */


#ifndef __IMsRdpClientEncoderServices_FWD_DEFINED__
#define __IMsRdpClientEncoderServices_FWD_DEFINED__
typedef interface IMsRdpClientEncoderServices IMsRdpClientEncoderServices;
#endif     /* __IMsRdpClientEncoderServices_FWD_DEFINED__ */


#ifndef __IMsRdpPreferredRedirectionInfo_FWD_DEFINED__
#define __IMsRdpPreferredRedirectionInfo_FWD_DEFINED__
typedef interface IMsRdpPreferredRedirectionInfo IMsRdpPreferredRedirectionInfo;
#endif     /* __IMsRdpPreferredRedirectionInfo_FWD_DEFINED__ */


#ifndef __IMsTscAxEvents_FWD_DEFINED__
#define __IMsTscAxEvents_FWD_DEFINED__
typedef interface IMsTscAxEvents IMsTscAxEvents;
#endif     /* __IMsTscAxEvents_FWD_DEFINED__ */


#ifndef __MsTscAxNotSafeForScripting_FWD_DEFINED__
#define __MsTscAxNotSafeForScripting_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsTscAxNotSafeForScripting MsTscAxNotSafeForScripting;
#else
typedef struct MsTscAxNotSafeForScripting MsTscAxNotSafeForScripting;
#endif /* __cplusplus */

#endif     /* __MsTscAxNotSafeForScripting_FWD_DEFINED__ */


#ifndef __MsTscAx_FWD_DEFINED__
#define __MsTscAx_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsTscAx MsTscAx;
#else
typedef struct MsTscAx MsTscAx;
#endif /* __cplusplus */

#endif     /* __MsTscAx_FWD_DEFINED__ */


#ifndef __MsRdpClientNotSafeForScripting_FWD_DEFINED__
#define __MsRdpClientNotSafeForScripting_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClientNotSafeForScripting MsRdpClientNotSafeForScripting;
#else
typedef struct MsRdpClientNotSafeForScripting MsRdpClientNotSafeForScripting;
#endif /* __cplusplus */

#endif     /* __MsRdpClientNotSafeForScripting_FWD_DEFINED__ */


#ifndef __MsRdpClient_FWD_DEFINED__
#define __MsRdpClient_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient MsRdpClient;
#else
typedef struct MsRdpClient MsRdpClient;
#endif /* __cplusplus */

#endif     /* __MsRdpClient_FWD_DEFINED__ */


#ifndef __MsRdpClient2NotSafeForScripting_FWD_DEFINED__
#define __MsRdpClient2NotSafeForScripting_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient2NotSafeForScripting MsRdpClient2NotSafeForScripting;
#else
typedef struct MsRdpClient2NotSafeForScripting MsRdpClient2NotSafeForScripting;
#endif /* __cplusplus */

#endif     /* __MsRdpClient2NotSafeForScripting_FWD_DEFINED__ */


#ifndef __MsRdpClient2_FWD_DEFINED__
#define __MsRdpClient2_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient2 MsRdpClient2;
#else
typedef struct MsRdpClient2 MsRdpClient2;
#endif /* __cplusplus */

#endif     /* __MsRdpClient2_FWD_DEFINED__ */


#ifndef __MsRdpClient2a_FWD_DEFINED__
#define __MsRdpClient2a_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient2a MsRdpClient2a;
#else
typedef struct MsRdpClient2a MsRdpClient2a;
#endif /* __cplusplus */

#endif     /* __MsRdpClient2a_FWD_DEFINED__ */


#ifndef __MsRdpClient3NotSafeForScripting_FWD_DEFINED__
#define __MsRdpClient3NotSafeForScripting_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient3NotSafeForScripting MsRdpClient3NotSafeForScripting;
#else
typedef struct MsRdpClient3NotSafeForScripting MsRdpClient3NotSafeForScripting;
#endif /* __cplusplus */

#endif     /* __MsRdpClient3NotSafeForScripting_FWD_DEFINED__ */


#ifndef __MsRdpClient3_FWD_DEFINED__
#define __MsRdpClient3_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient3 MsRdpClient3;
#else
typedef struct MsRdpClient3 MsRdpClient3;
#endif /* __cplusplus */

#endif     /* __MsRdpClient3_FWD_DEFINED__ */


#ifndef __MsRdpClient3a_FWD_DEFINED__
#define __MsRdpClient3a_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient3a MsRdpClient3a;
#else
typedef struct MsRdpClient3a MsRdpClient3a;
#endif /* __cplusplus */

#endif     /* __MsRdpClient3a_FWD_DEFINED__ */


#ifndef __MsRdpClient4NotSafeForScripting_FWD_DEFINED__
#define __MsRdpClient4NotSafeForScripting_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient4NotSafeForScripting MsRdpClient4NotSafeForScripting;
#else
typedef struct MsRdpClient4NotSafeForScripting MsRdpClient4NotSafeForScripting;
#endif /* __cplusplus */

#endif     /* __MsRdpClient4NotSafeForScripting_FWD_DEFINED__ */


#ifndef __MsRdpClient4_FWD_DEFINED__
#define __MsRdpClient4_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient4 MsRdpClient4;
#else
typedef struct MsRdpClient4 MsRdpClient4;
#endif /* __cplusplus */

#endif     /* __MsRdpClient4_FWD_DEFINED__ */


#ifndef __MsRdpClient4a_FWD_DEFINED__
#define __MsRdpClient4a_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient4a MsRdpClient4a;
#else
typedef struct MsRdpClient4a MsRdpClient4a;
#endif /* __cplusplus */

#endif     /* __MsRdpClient4a_FWD_DEFINED__ */


#ifndef __MsRdpClient5NotSafeForScripting_FWD_DEFINED__
#define __MsRdpClient5NotSafeForScripting_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient5NotSafeForScripting MsRdpClient5NotSafeForScripting;
#else
typedef struct MsRdpClient5NotSafeForScripting MsRdpClient5NotSafeForScripting;
#endif /* __cplusplus */

#endif     /* __MsRdpClient5NotSafeForScripting_FWD_DEFINED__ */


#ifndef __MsRdpClient5_FWD_DEFINED__
#define __MsRdpClient5_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient5 MsRdpClient5;
#else
typedef struct MsRdpClient5 MsRdpClient5;
#endif /* __cplusplus */

#endif     /* __MsRdpClient5_FWD_DEFINED__ */


#ifndef __MsRdpClient6NotSafeForScripting_FWD_DEFINED__
#define __MsRdpClient6NotSafeForScripting_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient6NotSafeForScripting MsRdpClient6NotSafeForScripting;
#else
typedef struct MsRdpClient6NotSafeForScripting MsRdpClient6NotSafeForScripting;
#endif /* __cplusplus */

#endif     /* __MsRdpClient6NotSafeForScripting_FWD_DEFINED__ */


#ifndef __MsRdpClient6_FWD_DEFINED__
#define __MsRdpClient6_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient6 MsRdpClient6;
#else
typedef struct MsRdpClient6 MsRdpClient6;
#endif /* __cplusplus */

#endif     /* __MsRdpClient6_FWD_DEFINED__ */


#ifndef __MsRdpClient7NotSafeForScripting_FWD_DEFINED__
#define __MsRdpClient7NotSafeForScripting_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient7NotSafeForScripting MsRdpClient7NotSafeForScripting;
#else
typedef struct MsRdpClient7NotSafeForScripting MsRdpClient7NotSafeForScripting;
#endif /* __cplusplus */

#endif     /* __MsRdpClient7NotSafeForScripting_FWD_DEFINED__ */


#ifndef __MsRdpClient7_FWD_DEFINED__
#define __MsRdpClient7_FWD_DEFINED__

#ifdef __cplusplus
typedef class MsRdpClient7 MsRdpClient7;
#else
typedef struct MsRdpClient7 MsRdpClient7;
#endif /* __cplusplus */

#endif     /* __MsRdpClient7_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_mstsax_0000_0000 */
/* [local] */ 

#define    AUDIOREDIRECT_TO_CLIENT    ( 0 )

#define    AUDIOREDIRECT_ON_SERVER    ( 1 )

#define    AUDIOREDIRECT_NOAUDIO    ( 2 )

#define    DISPID_METHOD_CONNECT    ( 30 )

#define    DISPID_METHOD_DISCONNECT    ( 31 )

#define    DISPID_METHOD_CREATEVIRTUALCHANNELS    ( 33 )

#define    DISPID_METHOD_SENDONVIRTUALCHANNEL    ( 34 )

#define    DISPID_PROP_SERVER    ( 1 )

#define    DISPID_PROP_DOMAIN    ( 2 )

#define    DISPID_PROP_USERNAME    ( 3 )

#define    DISPID_PROP_DISCONNECTED_TEXT    ( 4 )

#define    DISPID_PROP_CONNECTING_TEXT    ( 5 )

#define    DISPID_PROP_CONNECTED    ( 6 )

#define    DISPID_PROP_DESKTOPWIDTH    ( 12 )

#define    DISPID_PROP_DESKTOPHEIGHT    ( 13 )

#define    DISPID_PROP_STARTCONNECTED    ( 16 )

#define    DISPID_PROP_HORIZSCROLLBAR    ( 17 )

#define    DISPID_PROP_VERTSCROLLBAR    ( 18 )

#define    DISPID_PROP_FULLSCREENTITLE    ( 19 )

#define    DISPID_PROP_CIPHERSTRENGTH    ( 20 )

#define    DISPID_PROP_VERSION    ( 21 )

#define    DISPID_PROP_SECUREDSETTINGSENABLED    ( 22 )

#define    DISPID_PROP_SECUREDSETTINGS    ( 97 )

#define    DISPID_PROP_ADVSETTINGS    ( 98 )

#define    DISPID_PROP_DEBUGGER    ( 99 )

#define    DISPID_METHOD_SET_VIRTUALCHANNELOPTIONS    ( 35 )

#define    DISPID_METHOD_GET_VIRTUALCHANNELOPTIONS    ( 36 )

#define    DISPID_METHOD_REQUESTCLOSE    ( 37 )

#define    DISPID_PROP_COLORDEPTH    ( 100 )

#define    DISPID_PROP_ADVSETTINGS2    ( 101 )

#define    DISPID_PROP_SECUREDSETTINGS2    ( 102 )

#define    DISPID_PROP_EXTENDEDDISCONNECTREASON    ( 103 )

#define    DISPID_PROP_FULLSCREEN    ( 104 )

#define    DISPID_PROP_ADVSETTINGS3    ( 200 )

#define    DISPID_PROP_CONNECTED_STATUS_TEXT    ( 201 )

#define    DISPID_PROP_ADVSETTINGS4    ( 300 )

#define    DISPID_PROP_ADVSETTINGS5    ( 400 )

#define    DISPID_PROP_TRANSPORT_CONNECTION    ( 500 )

#define    DISPID_PROP_ADVSETTINGS6    ( 502 )

#define    DISPID_METHOD_GET_ERROR_DESCRIPTION    ( 503 )

#define    DISPID_PROP_TRANSPORT_CONNECTION2    ( 506 )

#define    DISPID_PROP_ADVSETTINGS7    ( 507 )

#define    DISPID_PROP_ADVSETTINGS8    ( 600 )

#define    DISPID_PROP_TRANSPORT_CONNECTION3    ( 601 )

#define    DISPID_METHOD_GET_STATUS_TEXT    ( 602 )

#define    DISPID_PROP_SECUREDSETTINGS3    ( 603 )

#define    DISPID_PROP_REMOTEPROGRAM2    ( 604 )

#define    DISPID_PROP_ADV_COMPRESS    ( 121 )

#define    DISPID_PROP_ADV_BITMAPPERISTENCE    ( 122 )

#define    DISPID_PROP_ADV_ALLOWBACKGROUNDINPUT    ( 161 )

#define    DISPID_PROP_ADV_KEYBOARDLAYOUTSTR    ( 162 )

#define    DISPID_PROP_ADV_PLUGINDLLS    ( 170 )

#define    DISPID_PROP_ADV_ICONFILE    ( 171 )

#define    DISPID_PROP_ADV_ICONINDEX    ( 172 )

#define    DISPID_PROP_ADV_CONTAINER_FULLSCREEN    ( 173 )

#define    DISPID_PROP_ADV_DISABLE_RDPDR    ( 174 )

#define    DISPID_PROP_ADV_SMOOTHSCROLL    ( 101 )

#define    DISPID_PROP_ADV_ACCELERATORPASSTHROUGH    ( 102 )

#define    DISPID_PROP_ADV_SHADOWBITMAP    ( 103 )

#define    DISPID_PROP_ADV_TRANSPORTTYPE    ( 104 )

#define    DISPID_PROP_ADV_SASSEQUENCE    ( 105 )

#define    DISPID_PROP_ADV_ENCRYPTIONENABLED    ( 106 )

#define    DISPID_PROP_ADV_DEDICATEDTERMINAL    ( 107 )

#define    DISPID_PROP_ADV_RDPPORT    ( 108 )

#define    DISPID_PROP_ADV_ENABLEMOUSE    ( 109 )

#define    DISPID_PROP_ADV_DISABLECTRLALTDEL    ( 110 )

#define    DISPID_PROP_ADV_ENABLEWINDOWSKEY    ( 111 )

#define    DISPID_PROP_ADV_DOUBLECLICKDETECT    ( 112 )

#define    DISPID_PROP_ADV_MAXIMIZESHELL    ( 113 )

#define    DISPID_PROP_ADV_HOTKEYFULLSCREEN    ( 114 )

#define    DISPID_PROP_ADV_HOTKEYCTRLESC    ( 115 )

#define    DISPID_PROP_ADV_HOTKEYALTESC    ( 116 )

#define    DISPID_PROP_ADV_HOTKEYALTTAB    ( 117 )

#define    DISPID_PROP_ADV_HOTKEYALTSHIFTTAB    ( 118 )

#define    DISPID_PROP_ADV_HOTKEYALTSPACE    ( 119 )

#define    DISPID_PROP_ADV_HOTKEYCTRLALTDEL    ( 120 )

#define    DISPID_PROP_ADV_ORDERDRAWTHRESHOLD    ( 123 )

#define    DISPID_PROP_ADV_BITMAPCACHESIZE    ( 124 )

#define    DISPID_PROP_ADV_BITMAPVIRTUALCACHESIZE    ( 125 )

#define    DISPID_PROP_ADV_NUMBITMAPCACHES    ( 126 )

#define    DISPID_PROP_ADV_CACHEPERSISTENCEACTIVE    ( 127 )

#define    DISPID_PROP_ADV_PERSISTCACHEDIRECTORY    ( 138 )

#define    DISPID_PROP_ADV_BRUSHSUPPORTLEVEL    ( 156 )

#define    DISPID_PROP_ADV_MININPUTSENDINTERVAL    ( 157 )

#define    DISPID_PROP_ADV_INPUTEVENTSATONCE    ( 158 )

#define    DISPID_PROP_ADV_MAXEVENTCOUNT    ( 159 )

#define    DISPID_PROP_ADV_KEEPALIVEINTERVAL    ( 160 )

#define    DISPID_PROP_ADV_SHUTDOWNTIMEOUT    ( 163 )

#define    DISPID_PROP_ADV_OVERALLCONNECTIONTIMEOUT    ( 164 )

#define    DISPID_PROP_ADV_SINGLECONNECTIONTIMEOUT    ( 165 )

#define    DISPID_PROP_ADV_KEYBOARDTYPE    ( 166 )

#define    DISPID_PROP_ADV_KEYBOARDSUBTYPE    ( 167 )

#define    DISPID_PROP_ADV_KEYBOARDFUNCTIONKEY    ( 168 )

#define    DISPID_PROP_ADV_WINCEFIXEDPALETTE    ( 169 )

#define    DISPID_PROP_ADV_SCALEBITMAPCACHESBYBPP    ( 175 )

#define    DISPID_PROP_ADV_CONNECT_TO_SERVER_CONSOLE    ( 178 )

#define    DISPID_PROP_ADV_BITMAPPERSISTENCE    ( 182 )

#define    DISPID_PROP_ADV_MINUTESTOIDLETIMEOUT    ( 183 )

#define    DISPID_PROP_ADV_RDPDR_LOCALPRINTINGDOCNAME    ( 185 )

#define    DISPID_PROP_ADV_CLEARTEXTPASSWORD    ( 186 )

#define    DISPID_PROP_ADV_DISPLAYCONNECTIONBAR    ( 187 )

#define    DISPID_PROP_ADV_PINCONNECTIONBAR    ( 188 )

#define    DISPID_PROP_ADV_GRABFOCUSONCONNECT    ( 189 )

#define    DISPID_PROP_ADV_LOADBALANCE_INFO    ( 190 )

#define    DISPID_PROP_ADV_REDIRECT_DRIVES    ( 191 )

#define    DISPID_PROP_ADV_REDIRECT_PRINTERS    ( 192 )

#define    DISPID_PROP_ADV_REDIRECT_PORTS    ( 193 )

#define    DISPID_PROP_ADV_REDIRECT_SMARTCARDS    ( 194 )

#define    DISPID_PROP_ADV_BITMAPVIRTUALCACHE16BPPSIZE    ( 195 )

#define    DISPID_PROP_ADV_BITMAPVIRTUALCACHE24BPPSIZE    ( 196 )

#define    DISIPD_PROP_ADV_PERFORMANCEFLAGS    ( 200 )

#define    DISPID_PROP_ADV_RDPDR_CLIPCLEANTEMPDIR_STRING    ( 201 )

#define    DISPID_PROP_ADV_RDPDR_CLIPPASTEINFO_STRING    ( 202 )

#define    DISPID_PROP_ADV_CONNECTIONSOCKET    ( 203 )

#define    DISPID_PROP_ADV_NOTIFYTSPUBLICKEY    ( 204 )

#define    DISPID_PROP_ADV_CANAUTORECONNECT    ( 205 )

#define    DISPID_PROP_ADV_ENABLEAUTORECONNECT    ( 206 )

#define    DISPID_PROP_ADV_MAXRECONNECTATTEMPTS    ( 207 )

#define    DISPID_PROP_ADV_CONBAR_SHOWMINIMIZE    ( 210 )

#define    DISPID_PROP_ADV_CONBAR_SHOWRESTORE    ( 211 )

#define    DISPID_PROP_ADV_AUTH_LEVEL    ( 212 )

#define    DISPID_PROP_ADV_REDIRECT_CLIPBOARD    ( 213 )

#define    DISPID_PROP_ADV_AUDIO_REDIRECTION_MODE    ( 215 )

#define    DISPID_PROP_ADV_CONBAR_SHOWPIN    ( 216 )

#define    DISPID_PROP_ADV_PUBLIC_MODE    ( 217 )

#define    DISPID_PROP_ADV_DEVICE_REDIRECT    ( 218 )

#define    DISPID_PROP_ADV_POS_DEVICE_REDIRECT    ( 219 )

#define    DISPID_PROP_ADV_BITMAPVIRTUALCACHE32BPPSIZE    ( 220 )

#define    DISPID_PROP_ADV_RELATIVEMOUSEMODE    ( 221 )

#define    DISPID_PROP_ADV_AUTH_SERVICE_CLASS    ( 222 )

#define    DISPID_PROP_ADV_PCB    ( 223 )

#define    DISPID_PROP_ADV_HOTKEYFOCUSRELEASELEFT    ( 224 )

#define    DISPID_PROP_ADV_HOTKEYFOCUSRELEASERIGHT    ( 225 )

#define    DISPID_PROP_ADV_AUTH_TYPE    ( 226 )

#define    DISPID_PROP_ADV_CONNECT_TO_ADMINISTER_SERVER    ( 227 )

#define    DISPID_PROP_ADV_AUDIO_CAPTURE_REDIRECTION_MODE    ( 228 )

#define    DISPID_PROP_ADV_VIDEO_PLAYBACK_MODE    ( 229 )

#define    DISPID_PROP_ADV_ENABLE_SUPERPAN    ( 230 )

#define    DISPID_PROP_ADV_SUPERPAN_ACCEL_FACTOR    ( 231 )

#define    DISPID_PROP_ADV_NEG_SEC_LAYER    ( 232 )

#define    DISPID_PROP_ADV_AUDIO_QUALITY_MODE    ( 233 )

#define    DISPID_PROP_ADV_REDIRECT_DIRECTX    ( 234 )

#define    DISPID_PROP_ADV_NETWORK_CONNECTION_TYPE    ( 235 )

#define    DISPID_PROP_SECURED_STARTPROGRAM    ( 1 )

#define    DISPID_PROP_SECURED_WORKDIR    ( 2 )

#define    DISPID_PROP_SECURED_FULLSCREEN    ( 3 )

#define    DISPID_PROP_SECURED_KEYBOARD_HOOKING_MODE    ( 4 )

#define    DISPID_PROP_SECURED_AUDIO_REDIRECTION_MODE    ( 5 )

#define    DISPID_PROP_SECURED_PCB    ( 6 )

#define    DISPID_PROP_DBG_HATCH_BMP_PDU    ( 200 )

#define    DISPID_PROP_DBG_HATCH_SSB_ORDER    ( 201 )

#define    DISPID_PROP_DBG_HATCH_MEMBLT_ORDER    ( 202 )

#define    DISPID_PROP_DBG_HATCH_INDEX_PDU    ( 203 )

#define    DISPID_PROP_DBG_LABEL_MEMBLT    ( 204 )

#define    DISPID_PROP_DBG_BMP_CACHE_MON    ( 205 )

#define    DISPID_PROP_DBG_MALLOC_FAILURES    ( 206 )

#define    DISPID_PROP_DBG_MALLOC_HUGE_FAILURES    ( 207 )

#define    DISPID_PROP_DBG_NET_THRUPUT    ( 208 )

#define    DISPID_PROP_DBG_CLX_CMDLINE    ( 209 )

#define    DISPID_PROP_DBG_CLX_CLXDLL    ( 210 )

#define    DISPID_PROP_DBG_CONTROL_TYPE    ( 216 )

#define    DISPID_PROP_REMOTEPROGRAM_REMOTE_APPLICATIONNAME    ( 202 )

#define    DISPID_PROP_REMOTEPROGRAM_REMOTE_APPLICATION_PROGRAM    ( 203 )

#define    DISPID_PROP_REMOTEPROGRAM_REMOTE_APPLICATION_ARGS    ( 204 )

#define    DISPID_PROP_GET_FRIENDLY_NAME    ( 220 )

#define    DISPID_PROP_GET_DEVICE_DESC    ( 221 )

#define    DISPID_PROP_GET_DEV_ID    ( 222 )

#define    DISPID_PROP_REDIR_STATE    ( 223 )

#define    DISPID_PROP_GET_INDEX    ( 224 )

#define    DISPID_PROP_GET_DEVICECOUNT    ( 225 )

#define    DISPID_PROP_RESCAN    ( 226 )

#define    DISPID_PROP_DEVBYID    ( 227 )

#define    DISPID_PROP_DEVBYINDEX    ( 228 )

#define    DISPID_PROP_GET_DRIVE_NAME    ( 229 )

#define    DISPID_PROP_DRIVE_REDIR_STATE    ( 230 )

#define    DISPID_PROP_DRIVEBYINDEX    ( 231 )

#define    DISPID_PROP_RESCANDRIVES    ( 232 )

#define    DISPID_PROP_GET_DRIVECOUNT    ( 233 )

#define    DISPID_PROP_GET_DEVICE_CLASS_CODES    ( 234 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYREQUIREPREAUTH    ( 217 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYPREAUTHSERVERADDR    ( 218 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYSUPPORTURL    ( 219 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYOTPCOOKIE    ( 220 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYOTPCOOKIESIZE    ( 221 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYCREDSHARING    ( 222 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYUSERNAME    ( 223 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYDOMAIN    ( 224 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYPASSWORD    ( 225 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYCREDSOURCECOOKIE    ( 226 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYAUTHCOOKIESERVERADDR    ( 227 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYAUTHCOOKIE    ( 228 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYAUTHCOOKIESIZE    ( 229 )

#define    DISPID_PROP_TRANSPORT_HTTP_PROXYAUTHLOGINPAGE    ( 230 )

#define    DISPID_PROP_CLEARTEXTPASSWORD    ( 1 )

#define    DISPID_PROP_PORTABLEPASSWORD    ( 2 )

#define    DISPID_PROP_PORTABLESALT    ( 3 )

#define    DISPID_PROP_BINARYPASSWORD    ( 4 )

#define    DISPID_PROP_BINARYSALT    ( 5 )

#define    DISPID_METHOD_RESETPASSWORD    ( 10 )

#define    DISPID_METHOD_NOTIFY_REDIRECT_DEVICE_CHANGE    ( 11 )

#define    DISPID_METHOD_SENDKEYS    ( 12 )

#define    DISPID_PROP_UI_PARENT_WINDOW_HANDLE    ( 13 )

#define    DISPID_PROP_SHOW_RDRWARN_DLG    ( 14 )

#define    DISPID_PROP_PROMPT_FOR_CREDS    ( 15 )

#define    DISPID_PROP_NEG_SEC_LAYER    ( 16 )

#define    DISPID_PROP_ENABLE_CREDSSP_SUPPORT    ( 17 )

#define    DISPID_PROP_DEVICE_COLLECTION    ( 18 )

#define    DISPID_PROP_DRIVE_COLLECTION    ( 19 )

#define    DISPID_PROP_DYN_DEVICE_REDIRECT    ( 20 )

#define    DISPID_PROP_DYN_DRIVE_REDIRECT    ( 21 )

#define    DISPID_PROP_WARN_ABOUT_CLIPBOARD    ( 22 )

#define    DISPID_PROP_WARN_ABOUT_SENDINGCREDS    ( 23 )

#define    DISPID_PROP_CONNECTIONBAR_TEXT    ( 24 )

#define    DISPID_PROP_RDRWARN_TYPE    ( 25 )

#define    DISPID_PROP_PUBLISHER_CERTIFICATE_CHAIN    ( 26 )

#define    DISPID_PROP_WARN_ABOUT_PRINTERS    ( 27 )

#define    DISPID_PROP_SHELL_MARK_RDPSECURE    ( 28 )

#define    DISPID_PROP_ALLOW_CRED_SAVING    ( 29 )

#define    DISPID_PROP_PROMPT_FOR_CREDS_ON_CLIENT    ( 30 )

#define    DISPID_PROP_LAUNCHED_VIA_CLIENTSHELL_IFACE    ( 31 )

#define    DISPID_PROP_TRUSTED_ZONE_SITE    ( 32 )

#define    DISPID_PROP_USE_MULTIMON    ( 33 )

#define    DISPID_PROP_USING_MULTIMON    ( 34 )

#define    DISPID_PROP_REMOTE_MONITOR_COUNT    ( 35 )

#define    DISPID_METHOD_MONITOR_BOUNDING_BOX    ( 36 )

#define    DISPID_PROP_REMOTE_MONITORS_MATCH_LOCAL    ( 37 )

#define    DISPID_PROP_DISABLE_CONNECTION_BAR    ( 38 )

#define    DISPID_PROP_DISABLE_REMOTEAPPS_CAPSCHECK    ( 39 )

#define    DISPID_PROP_WARN_ABOUT_DIRECTX    ( 40 )

#define    DISPID_ALLOW_PROMPTING_FOR_CREDS    ( 41 )

#define    DISPID_METHOD_SETWRITECOMPLETIONOPTIONS    ( 242 )

#define    DISPID_PROP_USE_REDIRECTION_SERVER_NAME    ( 1 )

#define    DISPID_CONNECTING    ( 1 )

#define    DISPID_CONNECTED    ( 2 )

#define    DISPID_LOGINCOMPLETE    ( 3 )

#define    DISPID_DISCONNECTED    ( 4 )

#define    DISPID_ENTERFULLSCREENMODE    ( 5 )

#define    DISPID_LEAVEFULLSCREENMODE    ( 6 )

#define    DISPID_CHANNELRECEIVEDDATA    ( 7 )

#define    DISPID_REQUESTGOFULLSCREEN    ( 8 )

#define    DISPID_REQUESTLEAVEFULLSCREEN    ( 9 )

#define    DISPID_FATALERROR    ( 10 )

#define    DISPID_WARNING    ( 11 )

#define    DISPID_REMOTEDESKTOPSIZECHANGE    ( 12 )

#define    DISPID_IDLETIMEOUTNOTIFICATION    ( 13 )

#define    DISPID_REQUESTCONTAINERMINIMIZE    ( 14 )

#define    DISPID_CONFIRMCLOSE    ( 15 )

#define    DISPID_RECEVIEDTSPUBLICKEY    ( 16 )

#define    DISPID_AUTORECONNECTING    ( 17 )

#define    DISPID_INTERNALDIALOGDISPLAYED    ( 18 )

#define    DISPID_INTERNALDIALOGDISMISSED    ( 19 )

#define    DISPID_ONREMOTEPROGRAMRESULT    ( 20 )

#define    DISPID_ONREMOTEPROGRAMDISPLAYED    ( 21 )

#define    DISPID_LOGONERROR    ( 22 )

#define    DISPID_FOCUSRELEASED    ( 23 )

#define    DISPID_USERNAMEACQUIRED    ( 24 )

#define    DISPID_CHANNELWRITECOMPLETED    ( 25 )

#define    DISPID_MOUSEINPUTMODECHANGED    ( 26 )

#define    DISPID_ONSTATUSINFO    ( 27 )

#define    DISPID_SERVICEMESSAGERECEIVED    ( 28 )



extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0000_v0_0_s_ifspec;

#ifndef __IMsTscNonScriptable_INTERFACE_DEFINED__
#define __IMsTscNonScriptable_INTERFACE_DEFINED__

/* interface IMsTscNonScriptable */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsTscNonScriptable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c1e6743a-41c1-4a74-832a-0dd06c1c7a0e")
    IMsTscNonScriptable : public IUnknown
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ClearTextPassword( 
            /* [in] */ BSTR newClearTextPass) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PortablePassword( 
            /* [in] */ BSTR newPortablePassVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PortablePassword( 
            /* [retval][out] */ BSTR *pPortablePass) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PortableSalt( 
            /* [in] */ BSTR newPortableSalt) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PortableSalt( 
            /* [retval][out] */ BSTR *pPortableSalt) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BinaryPassword( 
            /* [in] */ BSTR newPassword) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BinaryPassword( 
            /* [retval][out] */ BSTR *pBinaryPassword) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BinarySalt( 
            /* [in] */ BSTR newSalt) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BinarySalt( 
            /* [retval][out] */ BSTR *pSalt) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetPassword( void) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsTscNonScriptableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscNonScriptable * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscNonScriptable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscNonScriptable * This);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR newClearTextPass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortablePassword )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR newPortablePassVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortablePassword )( 
            IMsTscNonScriptable * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortableSalt )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR newPortableSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortableSalt )( 
            IMsTscNonScriptable * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinaryPassword )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR newPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryPassword )( 
            IMsTscNonScriptable * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinarySalt )( 
            IMsTscNonScriptable * This,
            /* [in] */ BSTR newSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinarySalt )( 
            IMsTscNonScriptable * This,
            /* [retval][out] */ BSTR *pSalt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetPassword )( 
            IMsTscNonScriptable * This);
        
        END_INTERFACE
    } IMsTscNonScriptableVtbl;

    interface IMsTscNonScriptable
    {
        CONST_VTBL struct IMsTscNonScriptableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscNonScriptable_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscNonScriptable_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscNonScriptable_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscNonScriptable_put_ClearTextPassword(This,newClearTextPass)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,newClearTextPass) ) 

#define IMsTscNonScriptable_put_PortablePassword(This,newPortablePassVal)    \
    ( (This)->lpVtbl -> put_PortablePassword(This,newPortablePassVal) ) 

#define IMsTscNonScriptable_get_PortablePassword(This,pPortablePass)    \
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsTscNonScriptable_put_PortableSalt(This,newPortableSalt)    \
    ( (This)->lpVtbl -> put_PortableSalt(This,newPortableSalt) ) 

#define IMsTscNonScriptable_get_PortableSalt(This,pPortableSalt)    \
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsTscNonScriptable_put_BinaryPassword(This,newPassword)    \
    ( (This)->lpVtbl -> put_BinaryPassword(This,newPassword) ) 

#define IMsTscNonScriptable_get_BinaryPassword(This,pBinaryPassword)    \
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsTscNonScriptable_put_BinarySalt(This,newSalt)    \
    ( (This)->lpVtbl -> put_BinarySalt(This,newSalt) ) 

#define IMsTscNonScriptable_get_BinarySalt(This,pSalt)    \
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsTscNonScriptable_ResetPassword(This)    \
    ( (This)->lpVtbl -> ResetPassword(This) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsTscNonScriptable_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2f079c4c-87b2-4afd-97ab-20cdb43038ae")
    IMsRdpClientNonScriptable : public IMsTscNonScriptable
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NotifyRedirectDeviceChange( 
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendKeys( 
            /* [in] */ LONG numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ LONG *plKeyData) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientNonScriptableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable * This);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR newClearTextPass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortablePassword )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR newPortablePassVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortablePassword )( 
            IMsRdpClientNonScriptable * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortableSalt )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR newPortableSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortableSalt )( 
            IMsRdpClientNonScriptable * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinaryPassword )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR newPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryPassword )( 
            IMsRdpClientNonScriptable * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinarySalt )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ BSTR newSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinarySalt )( 
            IMsRdpClientNonScriptable * This,
            /* [retval][out] */ BSTR *pSalt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetPassword )( 
            IMsRdpClientNonScriptable * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendKeys )( 
            IMsRdpClientNonScriptable * This,
            /* [in] */ LONG numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ LONG *plKeyData);
        
        END_INTERFACE
    } IMsRdpClientNonScriptableVtbl;

    interface IMsRdpClientNonScriptable
    {
        CONST_VTBL struct IMsRdpClientNonScriptableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable_put_ClearTextPassword(This,newClearTextPass)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,newClearTextPass) ) 

#define IMsRdpClientNonScriptable_put_PortablePassword(This,newPortablePassVal)    \
    ( (This)->lpVtbl -> put_PortablePassword(This,newPortablePassVal) ) 

#define IMsRdpClientNonScriptable_get_PortablePassword(This,pPortablePass)    \
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable_put_PortableSalt(This,newPortableSalt)    \
    ( (This)->lpVtbl -> put_PortableSalt(This,newPortableSalt) ) 

#define IMsRdpClientNonScriptable_get_PortableSalt(This,pPortableSalt)    \
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable_put_BinaryPassword(This,newPassword)    \
    ( (This)->lpVtbl -> put_BinaryPassword(This,newPassword) ) 

#define IMsRdpClientNonScriptable_get_BinaryPassword(This,pBinaryPassword)    \
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable_put_BinarySalt(This,newSalt)    \
    ( (This)->lpVtbl -> put_BinarySalt(This,newSalt) ) 

#define IMsRdpClientNonScriptable_get_BinarySalt(This,pSalt)    \
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable_ResetPassword(This)    \
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable_NotifyRedirectDeviceChange(This,wParam,lParam)    \
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)    \
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClientNonScriptable_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable2_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable2_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17a5e535-4072-4fa4-af32-c8d0d47345e9")
    IMsRdpClientNonScriptable2 : public IMsRdpClientNonScriptable
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UIParentWindowHandle( 
            /* [in] */ HWND hwndUIParentWindowHandle) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UIParentWindowHandle( 
            /* [retval][out] */ HWND *phwndUIParentWindowHandle) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientNonScriptable2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable2 * This);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR newClearTextPass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortablePassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR newPortablePassVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortablePassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortableSalt )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR newPortableSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortableSalt )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinaryPassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR newPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryPassword )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinarySalt )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ BSTR newSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinarySalt )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ BSTR *pSalt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetPassword )( 
            IMsRdpClientNonScriptable2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendKeys )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ LONG numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ LONG *plKeyData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable2 * This,
            /* [in] */ HWND hwndUIParentWindowHandle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable2 * This,
            /* [retval][out] */ HWND *phwndUIParentWindowHandle);
        
        END_INTERFACE
    } IMsRdpClientNonScriptable2Vtbl;

    interface IMsRdpClientNonScriptable2
    {
        CONST_VTBL struct IMsRdpClientNonScriptable2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable2_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable2_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable2_put_ClearTextPassword(This,newClearTextPass)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,newClearTextPass) ) 

#define IMsRdpClientNonScriptable2_put_PortablePassword(This,newPortablePassVal)    \
    ( (This)->lpVtbl -> put_PortablePassword(This,newPortablePassVal) ) 

#define IMsRdpClientNonScriptable2_get_PortablePassword(This,pPortablePass)    \
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable2_put_PortableSalt(This,newPortableSalt)    \
    ( (This)->lpVtbl -> put_PortableSalt(This,newPortableSalt) ) 

#define IMsRdpClientNonScriptable2_get_PortableSalt(This,pPortableSalt)    \
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable2_put_BinaryPassword(This,newPassword)    \
    ( (This)->lpVtbl -> put_BinaryPassword(This,newPassword) ) 

#define IMsRdpClientNonScriptable2_get_BinaryPassword(This,pBinaryPassword)    \
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable2_put_BinarySalt(This,newSalt)    \
    ( (This)->lpVtbl -> put_BinarySalt(This,newSalt) ) 

#define IMsRdpClientNonScriptable2_get_BinarySalt(This,pSalt)    \
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable2_ResetPassword(This)    \
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable2_NotifyRedirectDeviceChange(This,wParam,lParam)    \
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable2_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)    \
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 


#define IMsRdpClientNonScriptable2_put_UIParentWindowHandle(This,hwndUIParentWindowHandle)    \
    ( (This)->lpVtbl -> put_UIParentWindowHandle(This,hwndUIParentWindowHandle) ) 

#define IMsRdpClientNonScriptable2_get_UIParentWindowHandle(This,phwndUIParentWindowHandle)    \
    ( (This)->lpVtbl -> get_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClientNonScriptable2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mstsax_0000_0003 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0003_v0_0_s_ifspec;

#ifndef __IMsRdpClientNonScriptable3_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable3_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable3 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b3378d90-0728-45c7-8ed7-b6159fb92219")
    IMsRdpClientNonScriptable3 : public IMsRdpClientNonScriptable2
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShowRedirectionWarningDialog( 
            /* [in] */ VARIANT_BOOL fShowRdrDlg) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowRedirectionWarningDialog( 
            /* [retval][out] */ VARIANT_BOOL *pfShowRdrDlg) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PromptForCredentials( 
            /* [in] */ VARIANT_BOOL fPrompt) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PromptForCredentials( 
            /* [retval][out] */ VARIANT_BOOL *pfPrompt) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NegotiateSecurityLayer( 
            /* [in] */ VARIANT_BOOL fNegotiate) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NegotiateSecurityLayer( 
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableCredSspSupport( 
            /* [in] */ VARIANT_BOOL fEnableSupport) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableCredSspSupport( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectDynamicDrives( 
            /* [in] */ VARIANT_BOOL fRedirectDynamicDrives) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectDynamicDrives( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDrives) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectDynamicDevices( 
            /* [in] */ VARIANT_BOOL fRedirectDynamicDevices) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectDynamicDevices( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDevices) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceCollection( 
            /* [retval][out] */ IMsRdpDeviceCollection **ppDeviceCollection) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriveCollection( 
            /* [retval][out] */ IMsRdpDriveCollection **ppDeviceCollection) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WarnAboutSendingCredentials( 
            /* [in] */ VARIANT_BOOL fWarn) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WarnAboutSendingCredentials( 
            /* [retval][out] */ VARIANT_BOOL *pfWarn) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WarnAboutClipboardRedirection( 
            /* [in] */ VARIANT_BOOL fWarn) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WarnAboutClipboardRedirection( 
            /* [retval][out] */ VARIANT_BOOL *pfWarn) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionBarText( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionBarText( 
            /* [retval][out] */ BSTR *pConnectionBarText) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientNonScriptable3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable3 * This);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR newClearTextPass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortablePassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR newPortablePassVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortablePassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortableSalt )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR newPortableSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortableSalt )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinaryPassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR newPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryPassword )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinarySalt )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR newSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinarySalt )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pSalt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetPassword )( 
            IMsRdpClientNonScriptable3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendKeys )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ LONG numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ LONG *plKeyData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ HWND hwndUIParentWindowHandle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ HWND *phwndUIParentWindowHandle);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL fShowRdrDlg);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRdrDlg);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PromptForCredentials )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL fPrompt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PromptForCredentials )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPrompt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL fNegotiate);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL fEnableSupport);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL fRedirectDynamicDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL fRedirectDynamicDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceCollection )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ IMsRdpDeviceCollection **ppDeviceCollection);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriveCollection )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ IMsRdpDriveCollection **ppDeviceCollection);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarText )( 
            IMsRdpClientNonScriptable3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarText )( 
            IMsRdpClientNonScriptable3 * This,
            /* [retval][out] */ BSTR *pConnectionBarText);
        
        END_INTERFACE
    } IMsRdpClientNonScriptable3Vtbl;

    interface IMsRdpClientNonScriptable3
    {
        CONST_VTBL struct IMsRdpClientNonScriptable3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable3_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable3_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable3_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable3_put_ClearTextPassword(This,newClearTextPass)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,newClearTextPass) ) 

#define IMsRdpClientNonScriptable3_put_PortablePassword(This,newPortablePassVal)    \
    ( (This)->lpVtbl -> put_PortablePassword(This,newPortablePassVal) ) 

#define IMsRdpClientNonScriptable3_get_PortablePassword(This,pPortablePass)    \
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable3_put_PortableSalt(This,newPortableSalt)    \
    ( (This)->lpVtbl -> put_PortableSalt(This,newPortableSalt) ) 

#define IMsRdpClientNonScriptable3_get_PortableSalt(This,pPortableSalt)    \
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable3_put_BinaryPassword(This,newPassword)    \
    ( (This)->lpVtbl -> put_BinaryPassword(This,newPassword) ) 

#define IMsRdpClientNonScriptable3_get_BinaryPassword(This,pBinaryPassword)    \
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable3_put_BinarySalt(This,newSalt)    \
    ( (This)->lpVtbl -> put_BinarySalt(This,newSalt) ) 

#define IMsRdpClientNonScriptable3_get_BinarySalt(This,pSalt)    \
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable3_ResetPassword(This)    \
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable3_NotifyRedirectDeviceChange(This,wParam,lParam)    \
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable3_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)    \
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 


#define IMsRdpClientNonScriptable3_put_UIParentWindowHandle(This,hwndUIParentWindowHandle)    \
    ( (This)->lpVtbl -> put_UIParentWindowHandle(This,hwndUIParentWindowHandle) ) 

#define IMsRdpClientNonScriptable3_get_UIParentWindowHandle(This,phwndUIParentWindowHandle)    \
    ( (This)->lpVtbl -> get_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 


#define IMsRdpClientNonScriptable3_put_ShowRedirectionWarningDialog(This,fShowRdrDlg)    \
    ( (This)->lpVtbl -> put_ShowRedirectionWarningDialog(This,fShowRdrDlg) ) 

#define IMsRdpClientNonScriptable3_get_ShowRedirectionWarningDialog(This,pfShowRdrDlg)    \
    ( (This)->lpVtbl -> get_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable3_put_PromptForCredentials(This,fPrompt)    \
    ( (This)->lpVtbl -> put_PromptForCredentials(This,fPrompt) ) 

#define IMsRdpClientNonScriptable3_get_PromptForCredentials(This,pfPrompt)    \
    ( (This)->lpVtbl -> get_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable3_put_NegotiateSecurityLayer(This,fNegotiate)    \
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,fNegotiate) ) 

#define IMsRdpClientNonScriptable3_get_NegotiateSecurityLayer(This,pfNegotiate)    \
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable3_put_EnableCredSspSupport(This,fEnableSupport)    \
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,fEnableSupport) ) 

#define IMsRdpClientNonScriptable3_get_EnableCredSspSupport(This,pfEnableSupport)    \
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable3_put_RedirectDynamicDrives(This,fRedirectDynamicDrives)    \
    ( (This)->lpVtbl -> put_RedirectDynamicDrives(This,fRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable3_get_RedirectDynamicDrives(This,pfRedirectDynamicDrives)    \
    ( (This)->lpVtbl -> get_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable3_put_RedirectDynamicDevices(This,fRedirectDynamicDevices)    \
    ( (This)->lpVtbl -> put_RedirectDynamicDevices(This,fRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable3_get_RedirectDynamicDevices(This,pfRedirectDynamicDevices)    \
    ( (This)->lpVtbl -> get_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable3_get_DeviceCollection(This,ppDeviceCollection)    \
    ( (This)->lpVtbl -> get_DeviceCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable3_get_DriveCollection(This,ppDeviceCollection)    \
    ( (This)->lpVtbl -> get_DriveCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable3_put_WarnAboutSendingCredentials(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutSendingCredentials(This,fWarn) ) 

#define IMsRdpClientNonScriptable3_get_WarnAboutSendingCredentials(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable3_put_WarnAboutClipboardRedirection(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutClipboardRedirection(This,fWarn) ) 

#define IMsRdpClientNonScriptable3_get_WarnAboutClipboardRedirection(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable3_put_ConnectionBarText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectionBarText(This,newVal) ) 

#define IMsRdpClientNonScriptable3_get_ConnectionBarText(This,pConnectionBarText)    \
    ( (This)->lpVtbl -> get_ConnectionBarText(This,pConnectionBarText) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClientNonScriptable3_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable4_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable4_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable4 */
/* [unique][uuid][object] */ 

typedef /* [public][public][public] */ 
enum __MIDL_IMsRdpClientNonScriptable4_0001
    {    RedirectionWarningTypeDefault    = 0,
    RedirectionWarningTypeUnsigned    = ( RedirectionWarningTypeDefault + 1 ) ,
    RedirectionWarningTypeUnknown    = ( RedirectionWarningTypeUnsigned + 1 ) ,
    RedirectionWarningTypeUser    = ( RedirectionWarningTypeUnknown + 1 ) ,
    RedirectionWarningTypeThirdPartySigned    = ( RedirectionWarningTypeUser + 1 ) ,
    RedirectionWarningTypeTrusted    = ( RedirectionWarningTypeThirdPartySigned + 1 ) ,
    RedirectionWarningTypeMax    = RedirectionWarningTypeTrusted
    }     RedirectionWarningType;


EXTERN_C const IID IID_IMsRdpClientNonScriptable4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f50fa8aa-1c7d-4f59-b15c-a90cacae1fcb")
    IMsRdpClientNonScriptable4 : public IMsRdpClientNonScriptable3
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectionWarningType( 
            /* [in] */ RedirectionWarningType wrnType) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectionWarningType( 
            /* [retval][out] */ RedirectionWarningType *pWrnType) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MarkRdpSettingsSecure( 
            /* [in] */ VARIANT_BOOL fRdpSecure) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MarkRdpSettingsSecure( 
            /* [retval][out] */ VARIANT_BOOL *pfRdpSecure) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PublisherCertificateChain( 
            /* [in] */ VARIANT *pVarCert) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PublisherCertificateChain( 
            /* [retval][out] */ VARIANT *pVarCert) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WarnAboutPrinterRedirection( 
            /* [in] */ VARIANT_BOOL fWarn) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WarnAboutPrinterRedirection( 
            /* [retval][out] */ VARIANT_BOOL *pfWarn) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowCredentialSaving( 
            /* [in] */ VARIANT_BOOL fAllowSave) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowCredentialSaving( 
            /* [retval][out] */ VARIANT_BOOL *pfAllowSave) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PromptForCredsOnClient( 
            /* [in] */ VARIANT_BOOL fPromptForCredsOnClient) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PromptForCredsOnClient( 
            /* [retval][out] */ VARIANT_BOOL *pfPromptForCredsOnClient) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LaunchedViaClientShellInterface( 
            /* [in] */ VARIANT_BOOL fLaunchedViaClientShellInterface) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LaunchedViaClientShellInterface( 
            /* [retval][out] */ VARIANT_BOOL *pfLaunchedViaClientShellInterface) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TrustedZoneSite( 
            /* [in] */ VARIANT_BOOL fIsTrustedZone) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TrustedZoneSite( 
            /* [retval][out] */ VARIANT_BOOL *pfIsTrustedZone) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientNonScriptable4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable4 * This);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR newClearTextPass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortablePassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR newPortablePassVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortablePassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortableSalt )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR newPortableSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortableSalt )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinaryPassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR newPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryPassword )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinarySalt )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR newSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinarySalt )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pSalt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetPassword )( 
            IMsRdpClientNonScriptable4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendKeys )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ LONG numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ LONG *plKeyData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ HWND hwndUIParentWindowHandle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ HWND *phwndUIParentWindowHandle);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fShowRdrDlg);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRdrDlg);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PromptForCredentials )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fPrompt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PromptForCredentials )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPrompt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fNegotiate);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fEnableSupport);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fRedirectDynamicDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fRedirectDynamicDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceCollection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ IMsRdpDeviceCollection **ppDeviceCollection);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriveCollection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ IMsRdpDriveCollection **ppDeviceCollection);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarText )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarText )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ BSTR *pConnectionBarText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectionWarningType )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ RedirectionWarningType wrnType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectionWarningType )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ RedirectionWarningType *pWrnType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MarkRdpSettingsSecure )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fRdpSecure);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MarkRdpSettingsSecure )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRdpSecure);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PublisherCertificateChain )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT *pVarCert);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublisherCertificateChain )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT *pVarCert);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutPrinterRedirection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutPrinterRedirection )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowCredentialSaving )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fAllowSave);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowCredentialSaving )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllowSave);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PromptForCredsOnClient )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fPromptForCredsOnClient);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PromptForCredsOnClient )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPromptForCredsOnClient);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LaunchedViaClientShellInterface )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fLaunchedViaClientShellInterface);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LaunchedViaClientShellInterface )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfLaunchedViaClientShellInterface);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TrustedZoneSite )( 
            IMsRdpClientNonScriptable4 * This,
            /* [in] */ VARIANT_BOOL fIsTrustedZone);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TrustedZoneSite )( 
            IMsRdpClientNonScriptable4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsTrustedZone);
        
        END_INTERFACE
    } IMsRdpClientNonScriptable4Vtbl;

    interface IMsRdpClientNonScriptable4
    {
        CONST_VTBL struct IMsRdpClientNonScriptable4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable4_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable4_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable4_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable4_put_ClearTextPassword(This,newClearTextPass)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,newClearTextPass) ) 

#define IMsRdpClientNonScriptable4_put_PortablePassword(This,newPortablePassVal)    \
    ( (This)->lpVtbl -> put_PortablePassword(This,newPortablePassVal) ) 

#define IMsRdpClientNonScriptable4_get_PortablePassword(This,pPortablePass)    \
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable4_put_PortableSalt(This,newPortableSalt)    \
    ( (This)->lpVtbl -> put_PortableSalt(This,newPortableSalt) ) 

#define IMsRdpClientNonScriptable4_get_PortableSalt(This,pPortableSalt)    \
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable4_put_BinaryPassword(This,newPassword)    \
    ( (This)->lpVtbl -> put_BinaryPassword(This,newPassword) ) 

#define IMsRdpClientNonScriptable4_get_BinaryPassword(This,pBinaryPassword)    \
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable4_put_BinarySalt(This,newSalt)    \
    ( (This)->lpVtbl -> put_BinarySalt(This,newSalt) ) 

#define IMsRdpClientNonScriptable4_get_BinarySalt(This,pSalt)    \
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable4_ResetPassword(This)    \
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable4_NotifyRedirectDeviceChange(This,wParam,lParam)    \
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable4_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)    \
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 


#define IMsRdpClientNonScriptable4_put_UIParentWindowHandle(This,hwndUIParentWindowHandle)    \
    ( (This)->lpVtbl -> put_UIParentWindowHandle(This,hwndUIParentWindowHandle) ) 

#define IMsRdpClientNonScriptable4_get_UIParentWindowHandle(This,phwndUIParentWindowHandle)    \
    ( (This)->lpVtbl -> get_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 


#define IMsRdpClientNonScriptable4_put_ShowRedirectionWarningDialog(This,fShowRdrDlg)    \
    ( (This)->lpVtbl -> put_ShowRedirectionWarningDialog(This,fShowRdrDlg) ) 

#define IMsRdpClientNonScriptable4_get_ShowRedirectionWarningDialog(This,pfShowRdrDlg)    \
    ( (This)->lpVtbl -> get_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable4_put_PromptForCredentials(This,fPrompt)    \
    ( (This)->lpVtbl -> put_PromptForCredentials(This,fPrompt) ) 

#define IMsRdpClientNonScriptable4_get_PromptForCredentials(This,pfPrompt)    \
    ( (This)->lpVtbl -> get_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable4_put_NegotiateSecurityLayer(This,fNegotiate)    \
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,fNegotiate) ) 

#define IMsRdpClientNonScriptable4_get_NegotiateSecurityLayer(This,pfNegotiate)    \
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable4_put_EnableCredSspSupport(This,fEnableSupport)    \
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,fEnableSupport) ) 

#define IMsRdpClientNonScriptable4_get_EnableCredSspSupport(This,pfEnableSupport)    \
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable4_put_RedirectDynamicDrives(This,fRedirectDynamicDrives)    \
    ( (This)->lpVtbl -> put_RedirectDynamicDrives(This,fRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable4_get_RedirectDynamicDrives(This,pfRedirectDynamicDrives)    \
    ( (This)->lpVtbl -> get_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable4_put_RedirectDynamicDevices(This,fRedirectDynamicDevices)    \
    ( (This)->lpVtbl -> put_RedirectDynamicDevices(This,fRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable4_get_RedirectDynamicDevices(This,pfRedirectDynamicDevices)    \
    ( (This)->lpVtbl -> get_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable4_get_DeviceCollection(This,ppDeviceCollection)    \
    ( (This)->lpVtbl -> get_DeviceCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable4_get_DriveCollection(This,ppDeviceCollection)    \
    ( (This)->lpVtbl -> get_DriveCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable4_put_WarnAboutSendingCredentials(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutSendingCredentials(This,fWarn) ) 

#define IMsRdpClientNonScriptable4_get_WarnAboutSendingCredentials(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_put_WarnAboutClipboardRedirection(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutClipboardRedirection(This,fWarn) ) 

#define IMsRdpClientNonScriptable4_get_WarnAboutClipboardRedirection(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_put_ConnectionBarText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectionBarText(This,newVal) ) 

#define IMsRdpClientNonScriptable4_get_ConnectionBarText(This,pConnectionBarText)    \
    ( (This)->lpVtbl -> get_ConnectionBarText(This,pConnectionBarText) ) 


#define IMsRdpClientNonScriptable4_put_RedirectionWarningType(This,wrnType)    \
    ( (This)->lpVtbl -> put_RedirectionWarningType(This,wrnType) ) 

#define IMsRdpClientNonScriptable4_get_RedirectionWarningType(This,pWrnType)    \
    ( (This)->lpVtbl -> get_RedirectionWarningType(This,pWrnType) ) 

#define IMsRdpClientNonScriptable4_put_MarkRdpSettingsSecure(This,fRdpSecure)    \
    ( (This)->lpVtbl -> put_MarkRdpSettingsSecure(This,fRdpSecure) ) 

#define IMsRdpClientNonScriptable4_get_MarkRdpSettingsSecure(This,pfRdpSecure)    \
    ( (This)->lpVtbl -> get_MarkRdpSettingsSecure(This,pfRdpSecure) ) 

#define IMsRdpClientNonScriptable4_put_PublisherCertificateChain(This,pVarCert)    \
    ( (This)->lpVtbl -> put_PublisherCertificateChain(This,pVarCert) ) 

#define IMsRdpClientNonScriptable4_get_PublisherCertificateChain(This,pVarCert)    \
    ( (This)->lpVtbl -> get_PublisherCertificateChain(This,pVarCert) ) 

#define IMsRdpClientNonScriptable4_put_WarnAboutPrinterRedirection(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutPrinterRedirection(This,fWarn) ) 

#define IMsRdpClientNonScriptable4_get_WarnAboutPrinterRedirection(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutPrinterRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable4_put_AllowCredentialSaving(This,fAllowSave)    \
    ( (This)->lpVtbl -> put_AllowCredentialSaving(This,fAllowSave) ) 

#define IMsRdpClientNonScriptable4_get_AllowCredentialSaving(This,pfAllowSave)    \
    ( (This)->lpVtbl -> get_AllowCredentialSaving(This,pfAllowSave) ) 

#define IMsRdpClientNonScriptable4_put_PromptForCredsOnClient(This,fPromptForCredsOnClient)    \
    ( (This)->lpVtbl -> put_PromptForCredsOnClient(This,fPromptForCredsOnClient) ) 

#define IMsRdpClientNonScriptable4_get_PromptForCredsOnClient(This,pfPromptForCredsOnClient)    \
    ( (This)->lpVtbl -> get_PromptForCredsOnClient(This,pfPromptForCredsOnClient) ) 

#define IMsRdpClientNonScriptable4_put_LaunchedViaClientShellInterface(This,fLaunchedViaClientShellInterface)    \
    ( (This)->lpVtbl -> put_LaunchedViaClientShellInterface(This,fLaunchedViaClientShellInterface) ) 

#define IMsRdpClientNonScriptable4_get_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface)    \
    ( (This)->lpVtbl -> get_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface) ) 

#define IMsRdpClientNonScriptable4_put_TrustedZoneSite(This,fIsTrustedZone)    \
    ( (This)->lpVtbl -> put_TrustedZoneSite(This,fIsTrustedZone) ) 

#define IMsRdpClientNonScriptable4_get_TrustedZoneSite(This,pfIsTrustedZone)    \
    ( (This)->lpVtbl -> get_TrustedZoneSite(This,pfIsTrustedZone) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClientNonScriptable4_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientNonScriptable5_INTERFACE_DEFINED__
#define __IMsRdpClientNonScriptable5_INTERFACE_DEFINED__

/* interface IMsRdpClientNonScriptable5 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientNonScriptable5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4f6996d5-d7b1-412c-b0ff-063718566907")
    IMsRdpClientNonScriptable5 : public IMsRdpClientNonScriptable4
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseMultimon( 
            /* [in] */ VARIANT_BOOL fUseMultimon) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseMultimon( 
            /* [retval][out] */ VARIANT_BOOL *pfUseMultimon) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RemoteMonitorCount( 
            /* [retval][out] */ ULONG *pcRemoteMonitors) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetRemoteMonitorsBoundingBox( 
            /* [out] */ LONG *pLeft,
            /* [out] */ LONG *pTop,
            /* [out] */ LONG *pRight,
            /* [out] */ LONG *pBottom) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RemoteMonitorLayoutMatchesLocal( 
            /* [retval][out] */ VARIANT_BOOL *pfRemoteMatchesLocal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableConnectionBar( 
            /* [in] */ VARIANT_BOOL fDisableConnectionBar) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableRemoteAppCapsCheck( 
            /* [in] */ VARIANT_BOOL fDisableRemoteAppCapsCheck) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DisableRemoteAppCapsCheck( 
            /* [retval][out] */ VARIANT_BOOL *pfDisableRemoteAppCapsCheck) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WarnAboutDirectXRedirection( 
            /* [in] */ VARIANT_BOOL fWarn) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WarnAboutDirectXRedirection( 
            /* [retval][out] */ VARIANT_BOOL *pfWarn) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowPromptingForCredentials( 
            /* [in] */ VARIANT_BOOL fAllow) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowPromptingForCredentials( 
            /* [retval][out] */ VARIANT_BOOL *pfAllow) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientNonScriptable5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientNonScriptable5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientNonScriptable5 * This);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR newClearTextPass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortablePassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR newPortablePassVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortablePassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pPortablePass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PortableSalt )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR newPortableSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PortableSalt )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pPortableSalt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinaryPassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR newPassword);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinaryPassword )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pBinaryPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BinarySalt )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR newSalt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BinarySalt )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pSalt);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetPassword )( 
            IMsRdpClientNonScriptable5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NotifyRedirectDeviceChange )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ WPARAM wParam,
            /* [in] */ LPARAM lParam);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendKeys )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ LONG numKeys,
            /* [in] */ VARIANT_BOOL *pbArrayKeyUp,
            /* [in] */ LONG *plKeyData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ HWND hwndUIParentWindowHandle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIParentWindowHandle )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ HWND *phwndUIParentWindowHandle);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fShowRdrDlg);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowRedirectionWarningDialog )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRdrDlg);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PromptForCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fPrompt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PromptForCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPrompt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fNegotiate);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NegotiateSecurityLayer )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fEnableSupport);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCredSspSupport )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fRedirectDynamicDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDynamicDrives )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fRedirectDynamicDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDynamicDevices )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDynamicDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceCollection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ IMsRdpDeviceCollection **ppDeviceCollection);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriveCollection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ IMsRdpDriveCollection **ppDeviceCollection);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutSendingCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutClipboardRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarText )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarText )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ BSTR *pConnectionBarText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectionWarningType )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ RedirectionWarningType wrnType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectionWarningType )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ RedirectionWarningType *pWrnType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MarkRdpSettingsSecure )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fRdpSecure);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MarkRdpSettingsSecure )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRdpSecure);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PublisherCertificateChain )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT *pVarCert);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublisherCertificateChain )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT *pVarCert);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutPrinterRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutPrinterRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowCredentialSaving )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fAllowSave);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowCredentialSaving )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllowSave);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PromptForCredsOnClient )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fPromptForCredsOnClient);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PromptForCredsOnClient )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPromptForCredsOnClient);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LaunchedViaClientShellInterface )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fLaunchedViaClientShellInterface);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LaunchedViaClientShellInterface )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfLaunchedViaClientShellInterface);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TrustedZoneSite )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fIsTrustedZone);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TrustedZoneSite )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsTrustedZone);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseMultimon )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fUseMultimon);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseMultimon )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfUseMultimon);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteMonitorCount )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ ULONG *pcRemoteMonitors);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetRemoteMonitorsBoundingBox )( 
            IMsRdpClientNonScriptable5 * This,
            /* [out] */ LONG *pLeft,
            /* [out] */ LONG *pTop,
            /* [out] */ LONG *pRight,
            /* [out] */ LONG *pBottom);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteMonitorLayoutMatchesLocal )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRemoteMatchesLocal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableConnectionBar )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fDisableConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRemoteAppCapsCheck )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fDisableRemoteAppCapsCheck);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRemoteAppCapsCheck )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfDisableRemoteAppCapsCheck);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WarnAboutDirectXRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fWarn);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WarnAboutDirectXRedirection )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfWarn);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowPromptingForCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [in] */ VARIANT_BOOL fAllow);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowPromptingForCredentials )( 
            IMsRdpClientNonScriptable5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllow);
        
        END_INTERFACE
    } IMsRdpClientNonScriptable5Vtbl;

    interface IMsRdpClientNonScriptable5
    {
        CONST_VTBL struct IMsRdpClientNonScriptable5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientNonScriptable5_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientNonScriptable5_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientNonScriptable5_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientNonScriptable5_put_ClearTextPassword(This,newClearTextPass)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,newClearTextPass) ) 

#define IMsRdpClientNonScriptable5_put_PortablePassword(This,newPortablePassVal)    \
    ( (This)->lpVtbl -> put_PortablePassword(This,newPortablePassVal) ) 

#define IMsRdpClientNonScriptable5_get_PortablePassword(This,pPortablePass)    \
    ( (This)->lpVtbl -> get_PortablePassword(This,pPortablePass) ) 

#define IMsRdpClientNonScriptable5_put_PortableSalt(This,newPortableSalt)    \
    ( (This)->lpVtbl -> put_PortableSalt(This,newPortableSalt) ) 

#define IMsRdpClientNonScriptable5_get_PortableSalt(This,pPortableSalt)    \
    ( (This)->lpVtbl -> get_PortableSalt(This,pPortableSalt) ) 

#define IMsRdpClientNonScriptable5_put_BinaryPassword(This,newPassword)    \
    ( (This)->lpVtbl -> put_BinaryPassword(This,newPassword) ) 

#define IMsRdpClientNonScriptable5_get_BinaryPassword(This,pBinaryPassword)    \
    ( (This)->lpVtbl -> get_BinaryPassword(This,pBinaryPassword) ) 

#define IMsRdpClientNonScriptable5_put_BinarySalt(This,newSalt)    \
    ( (This)->lpVtbl -> put_BinarySalt(This,newSalt) ) 

#define IMsRdpClientNonScriptable5_get_BinarySalt(This,pSalt)    \
    ( (This)->lpVtbl -> get_BinarySalt(This,pSalt) ) 

#define IMsRdpClientNonScriptable5_ResetPassword(This)    \
    ( (This)->lpVtbl -> ResetPassword(This) ) 


#define IMsRdpClientNonScriptable5_NotifyRedirectDeviceChange(This,wParam,lParam)    \
    ( (This)->lpVtbl -> NotifyRedirectDeviceChange(This,wParam,lParam) ) 

#define IMsRdpClientNonScriptable5_SendKeys(This,numKeys,pbArrayKeyUp,plKeyData)    \
    ( (This)->lpVtbl -> SendKeys(This,numKeys,pbArrayKeyUp,plKeyData) ) 


#define IMsRdpClientNonScriptable5_put_UIParentWindowHandle(This,hwndUIParentWindowHandle)    \
    ( (This)->lpVtbl -> put_UIParentWindowHandle(This,hwndUIParentWindowHandle) ) 

#define IMsRdpClientNonScriptable5_get_UIParentWindowHandle(This,phwndUIParentWindowHandle)    \
    ( (This)->lpVtbl -> get_UIParentWindowHandle(This,phwndUIParentWindowHandle) ) 


#define IMsRdpClientNonScriptable5_put_ShowRedirectionWarningDialog(This,fShowRdrDlg)    \
    ( (This)->lpVtbl -> put_ShowRedirectionWarningDialog(This,fShowRdrDlg) ) 

#define IMsRdpClientNonScriptable5_get_ShowRedirectionWarningDialog(This,pfShowRdrDlg)    \
    ( (This)->lpVtbl -> get_ShowRedirectionWarningDialog(This,pfShowRdrDlg) ) 

#define IMsRdpClientNonScriptable5_put_PromptForCredentials(This,fPrompt)    \
    ( (This)->lpVtbl -> put_PromptForCredentials(This,fPrompt) ) 

#define IMsRdpClientNonScriptable5_get_PromptForCredentials(This,pfPrompt)    \
    ( (This)->lpVtbl -> get_PromptForCredentials(This,pfPrompt) ) 

#define IMsRdpClientNonScriptable5_put_NegotiateSecurityLayer(This,fNegotiate)    \
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,fNegotiate) ) 

#define IMsRdpClientNonScriptable5_get_NegotiateSecurityLayer(This,pfNegotiate)    \
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientNonScriptable5_put_EnableCredSspSupport(This,fEnableSupport)    \
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,fEnableSupport) ) 

#define IMsRdpClientNonScriptable5_get_EnableCredSspSupport(This,pfEnableSupport)    \
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientNonScriptable5_put_RedirectDynamicDrives(This,fRedirectDynamicDrives)    \
    ( (This)->lpVtbl -> put_RedirectDynamicDrives(This,fRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable5_get_RedirectDynamicDrives(This,pfRedirectDynamicDrives)    \
    ( (This)->lpVtbl -> get_RedirectDynamicDrives(This,pfRedirectDynamicDrives) ) 

#define IMsRdpClientNonScriptable5_put_RedirectDynamicDevices(This,fRedirectDynamicDevices)    \
    ( (This)->lpVtbl -> put_RedirectDynamicDevices(This,fRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable5_get_RedirectDynamicDevices(This,pfRedirectDynamicDevices)    \
    ( (This)->lpVtbl -> get_RedirectDynamicDevices(This,pfRedirectDynamicDevices) ) 

#define IMsRdpClientNonScriptable5_get_DeviceCollection(This,ppDeviceCollection)    \
    ( (This)->lpVtbl -> get_DeviceCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable5_get_DriveCollection(This,ppDeviceCollection)    \
    ( (This)->lpVtbl -> get_DriveCollection(This,ppDeviceCollection) ) 

#define IMsRdpClientNonScriptable5_put_WarnAboutSendingCredentials(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutSendingCredentials(This,fWarn) ) 

#define IMsRdpClientNonScriptable5_get_WarnAboutSendingCredentials(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutSendingCredentials(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_put_WarnAboutClipboardRedirection(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutClipboardRedirection(This,fWarn) ) 

#define IMsRdpClientNonScriptable5_get_WarnAboutClipboardRedirection(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutClipboardRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_put_ConnectionBarText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectionBarText(This,newVal) ) 

#define IMsRdpClientNonScriptable5_get_ConnectionBarText(This,pConnectionBarText)    \
    ( (This)->lpVtbl -> get_ConnectionBarText(This,pConnectionBarText) ) 


#define IMsRdpClientNonScriptable5_put_RedirectionWarningType(This,wrnType)    \
    ( (This)->lpVtbl -> put_RedirectionWarningType(This,wrnType) ) 

#define IMsRdpClientNonScriptable5_get_RedirectionWarningType(This,pWrnType)    \
    ( (This)->lpVtbl -> get_RedirectionWarningType(This,pWrnType) ) 

#define IMsRdpClientNonScriptable5_put_MarkRdpSettingsSecure(This,fRdpSecure)    \
    ( (This)->lpVtbl -> put_MarkRdpSettingsSecure(This,fRdpSecure) ) 

#define IMsRdpClientNonScriptable5_get_MarkRdpSettingsSecure(This,pfRdpSecure)    \
    ( (This)->lpVtbl -> get_MarkRdpSettingsSecure(This,pfRdpSecure) ) 

#define IMsRdpClientNonScriptable5_put_PublisherCertificateChain(This,pVarCert)    \
    ( (This)->lpVtbl -> put_PublisherCertificateChain(This,pVarCert) ) 

#define IMsRdpClientNonScriptable5_get_PublisherCertificateChain(This,pVarCert)    \
    ( (This)->lpVtbl -> get_PublisherCertificateChain(This,pVarCert) ) 

#define IMsRdpClientNonScriptable5_put_WarnAboutPrinterRedirection(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutPrinterRedirection(This,fWarn) ) 

#define IMsRdpClientNonScriptable5_get_WarnAboutPrinterRedirection(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutPrinterRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_put_AllowCredentialSaving(This,fAllowSave)    \
    ( (This)->lpVtbl -> put_AllowCredentialSaving(This,fAllowSave) ) 

#define IMsRdpClientNonScriptable5_get_AllowCredentialSaving(This,pfAllowSave)    \
    ( (This)->lpVtbl -> get_AllowCredentialSaving(This,pfAllowSave) ) 

#define IMsRdpClientNonScriptable5_put_PromptForCredsOnClient(This,fPromptForCredsOnClient)    \
    ( (This)->lpVtbl -> put_PromptForCredsOnClient(This,fPromptForCredsOnClient) ) 

#define IMsRdpClientNonScriptable5_get_PromptForCredsOnClient(This,pfPromptForCredsOnClient)    \
    ( (This)->lpVtbl -> get_PromptForCredsOnClient(This,pfPromptForCredsOnClient) ) 

#define IMsRdpClientNonScriptable5_put_LaunchedViaClientShellInterface(This,fLaunchedViaClientShellInterface)    \
    ( (This)->lpVtbl -> put_LaunchedViaClientShellInterface(This,fLaunchedViaClientShellInterface) ) 

#define IMsRdpClientNonScriptable5_get_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface)    \
    ( (This)->lpVtbl -> get_LaunchedViaClientShellInterface(This,pfLaunchedViaClientShellInterface) ) 

#define IMsRdpClientNonScriptable5_put_TrustedZoneSite(This,fIsTrustedZone)    \
    ( (This)->lpVtbl -> put_TrustedZoneSite(This,fIsTrustedZone) ) 

#define IMsRdpClientNonScriptable5_get_TrustedZoneSite(This,pfIsTrustedZone)    \
    ( (This)->lpVtbl -> get_TrustedZoneSite(This,pfIsTrustedZone) ) 


#define IMsRdpClientNonScriptable5_put_UseMultimon(This,fUseMultimon)    \
    ( (This)->lpVtbl -> put_UseMultimon(This,fUseMultimon) ) 

#define IMsRdpClientNonScriptable5_get_UseMultimon(This,pfUseMultimon)    \
    ( (This)->lpVtbl -> get_UseMultimon(This,pfUseMultimon) ) 

#define IMsRdpClientNonScriptable5_get_RemoteMonitorCount(This,pcRemoteMonitors)    \
    ( (This)->lpVtbl -> get_RemoteMonitorCount(This,pcRemoteMonitors) ) 

#define IMsRdpClientNonScriptable5_GetRemoteMonitorsBoundingBox(This,pLeft,pTop,pRight,pBottom)    \
    ( (This)->lpVtbl -> GetRemoteMonitorsBoundingBox(This,pLeft,pTop,pRight,pBottom) ) 

#define IMsRdpClientNonScriptable5_get_RemoteMonitorLayoutMatchesLocal(This,pfRemoteMatchesLocal)    \
    ( (This)->lpVtbl -> get_RemoteMonitorLayoutMatchesLocal(This,pfRemoteMatchesLocal) ) 

#define IMsRdpClientNonScriptable5_put_DisableConnectionBar(This,fDisableConnectionBar)    \
    ( (This)->lpVtbl -> put_DisableConnectionBar(This,fDisableConnectionBar) ) 

#define IMsRdpClientNonScriptable5_put_DisableRemoteAppCapsCheck(This,fDisableRemoteAppCapsCheck)    \
    ( (This)->lpVtbl -> put_DisableRemoteAppCapsCheck(This,fDisableRemoteAppCapsCheck) ) 

#define IMsRdpClientNonScriptable5_get_DisableRemoteAppCapsCheck(This,pfDisableRemoteAppCapsCheck)    \
    ( (This)->lpVtbl -> get_DisableRemoteAppCapsCheck(This,pfDisableRemoteAppCapsCheck) ) 

#define IMsRdpClientNonScriptable5_put_WarnAboutDirectXRedirection(This,fWarn)    \
    ( (This)->lpVtbl -> put_WarnAboutDirectXRedirection(This,fWarn) ) 

#define IMsRdpClientNonScriptable5_get_WarnAboutDirectXRedirection(This,pfWarn)    \
    ( (This)->lpVtbl -> get_WarnAboutDirectXRedirection(This,pfWarn) ) 

#define IMsRdpClientNonScriptable5_put_AllowPromptingForCredentials(This,fAllow)    \
    ( (This)->lpVtbl -> put_AllowPromptingForCredentials(This,fAllow) ) 

#define IMsRdpClientNonScriptable5_get_AllowPromptingForCredentials(This,pfAllow)    \
    ( (This)->lpVtbl -> get_AllowPromptingForCredentials(This,pfAllow) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClientNonScriptable5_INTERFACE_DEFINED__ */


#ifndef __IMsTscSecuredSettings_INTERFACE_DEFINED__
#define __IMsTscSecuredSettings_INTERFACE_DEFINED__

/* interface IMsTscSecuredSettings */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsTscSecuredSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c9d65442-a0f9-45b2-8f73-d61d2db8cbb6")
    IMsTscSecuredSettings : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StartProgram( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StartProgram( 
            /* [retval][out] */ BSTR *pStartProgram) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WorkDir( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkDir( 
            /* [retval][out] */ BSTR *pWorkDir) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FullScreen( 
            /* [in] */ BOOL fFullScreen) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullScreen( 
            /* [retval][out] */ BOOL *pfFullScreen) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsTscSecuredSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscSecuredSettings * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscSecuredSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscSecuredSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscSecuredSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscSecuredSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscSecuredSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscSecuredSettings * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartProgram )( 
            IMsTscSecuredSettings * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartProgram )( 
            IMsTscSecuredSettings * This,
            /* [retval][out] */ BSTR *pStartProgram);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WorkDir )( 
            IMsTscSecuredSettings * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkDir )( 
            IMsTscSecuredSettings * This,
            /* [retval][out] */ BSTR *pWorkDir);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsTscSecuredSettings * This,
            /* [in] */ BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsTscSecuredSettings * This,
            /* [retval][out] */ BOOL *pfFullScreen);
        
        END_INTERFACE
    } IMsTscSecuredSettingsVtbl;

    interface IMsTscSecuredSettings
    {
        CONST_VTBL struct IMsTscSecuredSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscSecuredSettings_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscSecuredSettings_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscSecuredSettings_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscSecuredSettings_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscSecuredSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscSecuredSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscSecuredSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsTscSecuredSettings_put_StartProgram(This,newVal)    \
    ( (This)->lpVtbl -> put_StartProgram(This,newVal) ) 

#define IMsTscSecuredSettings_get_StartProgram(This,pStartProgram)    \
    ( (This)->lpVtbl -> get_StartProgram(This,pStartProgram) ) 

#define IMsTscSecuredSettings_put_WorkDir(This,newVal)    \
    ( (This)->lpVtbl -> put_WorkDir(This,newVal) ) 

#define IMsTscSecuredSettings_get_WorkDir(This,pWorkDir)    \
    ( (This)->lpVtbl -> get_WorkDir(This,pWorkDir) ) 

#define IMsTscSecuredSettings_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsTscSecuredSettings_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsTscSecuredSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientSecuredSettings_INTERFACE_DEFINED__
#define __IMsRdpClientSecuredSettings_INTERFACE_DEFINED__

/* interface IMsRdpClientSecuredSettings */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientSecuredSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("605befcf-39c1-45cc-a811-068fb7be346d")
    IMsRdpClientSecuredSettings : public IMsTscSecuredSettings
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyboardHookMode( 
            /* [in] */ LONG keyboardHookMode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyboardHookMode( 
            /* [retval][out] */ LONG *pkeyboardHookMode) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AudioRedirectionMode( 
            /* [in] */ LONG audioRedirectionMode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AudioRedirectionMode( 
            /* [retval][out] */ LONG *pAudioRedirectionMode) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientSecuredSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientSecuredSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientSecuredSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientSecuredSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartProgram )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartProgram )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ BSTR *pStartProgram);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WorkDir )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkDir )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ BSTR *pWorkDir);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ BOOL *pfFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardHookMode )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ LONG keyboardHookMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardHookMode )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ LONG *pkeyboardHookMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientSecuredSettings * This,
            /* [in] */ LONG audioRedirectionMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientSecuredSettings * This,
            /* [retval][out] */ LONG *pAudioRedirectionMode);
        
        END_INTERFACE
    } IMsRdpClientSecuredSettingsVtbl;

    interface IMsRdpClientSecuredSettings
    {
        CONST_VTBL struct IMsRdpClientSecuredSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientSecuredSettings_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientSecuredSettings_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientSecuredSettings_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientSecuredSettings_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientSecuredSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientSecuredSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientSecuredSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientSecuredSettings_put_StartProgram(This,newVal)    \
    ( (This)->lpVtbl -> put_StartProgram(This,newVal) ) 

#define IMsRdpClientSecuredSettings_get_StartProgram(This,pStartProgram)    \
    ( (This)->lpVtbl -> get_StartProgram(This,pStartProgram) ) 

#define IMsRdpClientSecuredSettings_put_WorkDir(This,newVal)    \
    ( (This)->lpVtbl -> put_WorkDir(This,newVal) ) 

#define IMsRdpClientSecuredSettings_get_WorkDir(This,pWorkDir)    \
    ( (This)->lpVtbl -> get_WorkDir(This,pWorkDir) ) 

#define IMsRdpClientSecuredSettings_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClientSecuredSettings_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 


#define IMsRdpClientSecuredSettings_put_KeyboardHookMode(This,keyboardHookMode)    \
    ( (This)->lpVtbl -> put_KeyboardHookMode(This,keyboardHookMode) ) 

#define IMsRdpClientSecuredSettings_get_KeyboardHookMode(This,pkeyboardHookMode)    \
    ( (This)->lpVtbl -> get_KeyboardHookMode(This,pkeyboardHookMode) ) 

#define IMsRdpClientSecuredSettings_put_AudioRedirectionMode(This,audioRedirectionMode)    \
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,audioRedirectionMode) ) 

#define IMsRdpClientSecuredSettings_get_AudioRedirectionMode(This,pAudioRedirectionMode)    \
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,pAudioRedirectionMode) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClientSecuredSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientSecuredSettings2_INTERFACE_DEFINED__
#define __IMsRdpClientSecuredSettings2_INTERFACE_DEFINED__

/* interface IMsRdpClientSecuredSettings2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientSecuredSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25f2ce20-8b1d-4971-a7cd-549dae201fc0")
    IMsRdpClientSecuredSettings2 : public IMsRdpClientSecuredSettings
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PCB( 
            /* [retval][out] */ BSTR *bstrPCB) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PCB( 
            /* [in] */ BSTR bstrPCB) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientSecuredSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientSecuredSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientSecuredSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartProgram )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartProgram )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ BSTR *pStartProgram);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WorkDir )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkDir )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ BSTR *pWorkDir);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ BOOL *pfFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardHookMode )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ LONG keyboardHookMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardHookMode )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ LONG *pkeyboardHookMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ LONG audioRedirectionMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ LONG *pAudioRedirectionMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PCB )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [retval][out] */ BSTR *bstrPCB);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PCB )( 
            IMsRdpClientSecuredSettings2 * This,
            /* [in] */ BSTR bstrPCB);
        
        END_INTERFACE
    } IMsRdpClientSecuredSettings2Vtbl;

    interface IMsRdpClientSecuredSettings2
    {
        CONST_VTBL struct IMsRdpClientSecuredSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientSecuredSettings2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientSecuredSettings2_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientSecuredSettings2_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientSecuredSettings2_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientSecuredSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientSecuredSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientSecuredSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientSecuredSettings2_put_StartProgram(This,newVal)    \
    ( (This)->lpVtbl -> put_StartProgram(This,newVal) ) 

#define IMsRdpClientSecuredSettings2_get_StartProgram(This,pStartProgram)    \
    ( (This)->lpVtbl -> get_StartProgram(This,pStartProgram) ) 

#define IMsRdpClientSecuredSettings2_put_WorkDir(This,newVal)    \
    ( (This)->lpVtbl -> put_WorkDir(This,newVal) ) 

#define IMsRdpClientSecuredSettings2_get_WorkDir(This,pWorkDir)    \
    ( (This)->lpVtbl -> get_WorkDir(This,pWorkDir) ) 

#define IMsRdpClientSecuredSettings2_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClientSecuredSettings2_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 


#define IMsRdpClientSecuredSettings2_put_KeyboardHookMode(This,keyboardHookMode)    \
    ( (This)->lpVtbl -> put_KeyboardHookMode(This,keyboardHookMode) ) 

#define IMsRdpClientSecuredSettings2_get_KeyboardHookMode(This,pkeyboardHookMode)    \
    ( (This)->lpVtbl -> get_KeyboardHookMode(This,pkeyboardHookMode) ) 

#define IMsRdpClientSecuredSettings2_put_AudioRedirectionMode(This,audioRedirectionMode)    \
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,audioRedirectionMode) ) 

#define IMsRdpClientSecuredSettings2_get_AudioRedirectionMode(This,pAudioRedirectionMode)    \
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,pAudioRedirectionMode) ) 


#define IMsRdpClientSecuredSettings2_get_PCB(This,bstrPCB)    \
    ( (This)->lpVtbl -> get_PCB(This,bstrPCB) ) 

#define IMsRdpClientSecuredSettings2_put_PCB(This,bstrPCB)    \
    ( (This)->lpVtbl -> put_PCB(This,bstrPCB) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClientSecuredSettings2_INTERFACE_DEFINED__ */


#ifndef __IMsTscDebug_INTERFACE_DEFINED__
#define __IMsTscDebug_INTERFACE_DEFINED__

/* interface IMsTscDebug */
/* [unique][dual][hidden][uuid][object] */ 


EXTERN_C const IID IID_IMsTscDebug;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("209d0eb9-6254-47b1-9033-a98dae55bb27")
    IMsTscDebug : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HatchBitmapPDU( 
            /* [in] */ BOOL hatchBitmapPDU) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HatchBitmapPDU( 
            /* [retval][out] */ BOOL *phatchBitmapPDU) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HatchSSBOrder( 
            /* [in] */ BOOL hatchSSBOrder) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HatchSSBOrder( 
            /* [retval][out] */ BOOL *phatchSSBOrder) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HatchMembltOrder( 
            /* [in] */ BOOL hatchMembltOrder) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HatchMembltOrder( 
            /* [retval][out] */ BOOL *phatchMembltOrder) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HatchIndexPDU( 
            /* [in] */ BOOL hatchIndexPDU) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HatchIndexPDU( 
            /* [retval][out] */ BOOL *phatchIndexPDU) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LabelMemblt( 
            /* [in] */ BOOL labelMemblt) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LabelMemblt( 
            /* [retval][out] */ BOOL *plabelMemblt) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapCacheMonitor( 
            /* [in] */ BOOL bitmapCacheMonitor) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapCacheMonitor( 
            /* [retval][out] */ BOOL *pbitmapCacheMonitor) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MallocFailuresPercent( 
            /* [in] */ LONG mallocFailures) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MallocFailuresPercent( 
            /* [retval][out] */ LONG *pmallocFailuresPercent) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MallocHugeFailuresPercent( 
            /* [in] */ LONG mallocHugeFailures) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MallocHugeFailuresPercent( 
            /* [retval][out] */ LONG *pmallocHugeFailuresPercent) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NetThroughput( 
            /* [in] */ LONG netThroughput) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NetThroughput( 
            /* [retval][out] */ LONG *netThroughput) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CLXCmdLine( 
            /* [in] */ BSTR CLXCmdLine) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CLXCmdLine( 
            /* [retval][out] */ BSTR *pCLXCmdLine) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CLXDll( 
            /* [in] */ BSTR CLXDll) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CLXDll( 
            /* [retval][out] */ BSTR *pCLXDll) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ControlType( 
            /* [retval][out] */ UINT *pControlType) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsTscDebugVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscDebug * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscDebug * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscDebug * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscDebug * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscDebug * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscDebug * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscDebug * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HatchBitmapPDU )( 
            IMsTscDebug * This,
            /* [in] */ BOOL hatchBitmapPDU);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HatchBitmapPDU )( 
            IMsTscDebug * This,
            /* [retval][out] */ BOOL *phatchBitmapPDU);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HatchSSBOrder )( 
            IMsTscDebug * This,
            /* [in] */ BOOL hatchSSBOrder);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HatchSSBOrder )( 
            IMsTscDebug * This,
            /* [retval][out] */ BOOL *phatchSSBOrder);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HatchMembltOrder )( 
            IMsTscDebug * This,
            /* [in] */ BOOL hatchMembltOrder);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HatchMembltOrder )( 
            IMsTscDebug * This,
            /* [retval][out] */ BOOL *phatchMembltOrder);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HatchIndexPDU )( 
            IMsTscDebug * This,
            /* [in] */ BOOL hatchIndexPDU);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HatchIndexPDU )( 
            IMsTscDebug * This,
            /* [retval][out] */ BOOL *phatchIndexPDU);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LabelMemblt )( 
            IMsTscDebug * This,
            /* [in] */ BOOL labelMemblt);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LabelMemblt )( 
            IMsTscDebug * This,
            /* [retval][out] */ BOOL *plabelMemblt);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheMonitor )( 
            IMsTscDebug * This,
            /* [in] */ BOOL bitmapCacheMonitor);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheMonitor )( 
            IMsTscDebug * This,
            /* [retval][out] */ BOOL *pbitmapCacheMonitor);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MallocFailuresPercent )( 
            IMsTscDebug * This,
            /* [in] */ LONG mallocFailures);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MallocFailuresPercent )( 
            IMsTscDebug * This,
            /* [retval][out] */ LONG *pmallocFailuresPercent);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MallocHugeFailuresPercent )( 
            IMsTscDebug * This,
            /* [in] */ LONG mallocHugeFailures);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MallocHugeFailuresPercent )( 
            IMsTscDebug * This,
            /* [retval][out] */ LONG *pmallocHugeFailuresPercent);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NetThroughput )( 
            IMsTscDebug * This,
            /* [in] */ LONG netThroughput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NetThroughput )( 
            IMsTscDebug * This,
            /* [retval][out] */ LONG *netThroughput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CLXCmdLine )( 
            IMsTscDebug * This,
            /* [in] */ BSTR CLXCmdLine);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CLXCmdLine )( 
            IMsTscDebug * This,
            /* [retval][out] */ BSTR *pCLXCmdLine);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CLXDll )( 
            IMsTscDebug * This,
            /* [in] */ BSTR CLXDll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CLXDll )( 
            IMsTscDebug * This,
            /* [retval][out] */ BSTR *pCLXDll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlType )( 
            IMsTscDebug * This,
            /* [retval][out] */ UINT *pControlType);
        
        END_INTERFACE
    } IMsTscDebugVtbl;

    interface IMsTscDebug
    {
        CONST_VTBL struct IMsTscDebugVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscDebug_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscDebug_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscDebug_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscDebug_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscDebug_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscDebug_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscDebug_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsTscDebug_put_HatchBitmapPDU(This,hatchBitmapPDU)    \
    ( (This)->lpVtbl -> put_HatchBitmapPDU(This,hatchBitmapPDU) ) 

#define IMsTscDebug_get_HatchBitmapPDU(This,phatchBitmapPDU)    \
    ( (This)->lpVtbl -> get_HatchBitmapPDU(This,phatchBitmapPDU) ) 

#define IMsTscDebug_put_HatchSSBOrder(This,hatchSSBOrder)    \
    ( (This)->lpVtbl -> put_HatchSSBOrder(This,hatchSSBOrder) ) 

#define IMsTscDebug_get_HatchSSBOrder(This,phatchSSBOrder)    \
    ( (This)->lpVtbl -> get_HatchSSBOrder(This,phatchSSBOrder) ) 

#define IMsTscDebug_put_HatchMembltOrder(This,hatchMembltOrder)    \
    ( (This)->lpVtbl -> put_HatchMembltOrder(This,hatchMembltOrder) ) 

#define IMsTscDebug_get_HatchMembltOrder(This,phatchMembltOrder)    \
    ( (This)->lpVtbl -> get_HatchMembltOrder(This,phatchMembltOrder) ) 

#define IMsTscDebug_put_HatchIndexPDU(This,hatchIndexPDU)    \
    ( (This)->lpVtbl -> put_HatchIndexPDU(This,hatchIndexPDU) ) 

#define IMsTscDebug_get_HatchIndexPDU(This,phatchIndexPDU)    \
    ( (This)->lpVtbl -> get_HatchIndexPDU(This,phatchIndexPDU) ) 

#define IMsTscDebug_put_LabelMemblt(This,labelMemblt)    \
    ( (This)->lpVtbl -> put_LabelMemblt(This,labelMemblt) ) 

#define IMsTscDebug_get_LabelMemblt(This,plabelMemblt)    \
    ( (This)->lpVtbl -> get_LabelMemblt(This,plabelMemblt) ) 

#define IMsTscDebug_put_BitmapCacheMonitor(This,bitmapCacheMonitor)    \
    ( (This)->lpVtbl -> put_BitmapCacheMonitor(This,bitmapCacheMonitor) ) 

#define IMsTscDebug_get_BitmapCacheMonitor(This,pbitmapCacheMonitor)    \
    ( (This)->lpVtbl -> get_BitmapCacheMonitor(This,pbitmapCacheMonitor) ) 

#define IMsTscDebug_put_MallocFailuresPercent(This,mallocFailures)    \
    ( (This)->lpVtbl -> put_MallocFailuresPercent(This,mallocFailures) ) 

#define IMsTscDebug_get_MallocFailuresPercent(This,pmallocFailuresPercent)    \
    ( (This)->lpVtbl -> get_MallocFailuresPercent(This,pmallocFailuresPercent) ) 

#define IMsTscDebug_put_MallocHugeFailuresPercent(This,mallocHugeFailures)    \
    ( (This)->lpVtbl -> put_MallocHugeFailuresPercent(This,mallocHugeFailures) ) 

#define IMsTscDebug_get_MallocHugeFailuresPercent(This,pmallocHugeFailuresPercent)    \
    ( (This)->lpVtbl -> get_MallocHugeFailuresPercent(This,pmallocHugeFailuresPercent) ) 

#define IMsTscDebug_put_NetThroughput(This,netThroughput)    \
    ( (This)->lpVtbl -> put_NetThroughput(This,netThroughput) ) 

#define IMsTscDebug_get_NetThroughput(This,netThroughput)    \
    ( (This)->lpVtbl -> get_NetThroughput(This,netThroughput) ) 

#define IMsTscDebug_put_CLXCmdLine(This,CLXCmdLine)    \
    ( (This)->lpVtbl -> put_CLXCmdLine(This,CLXCmdLine) ) 

#define IMsTscDebug_get_CLXCmdLine(This,pCLXCmdLine)    \
    ( (This)->lpVtbl -> get_CLXCmdLine(This,pCLXCmdLine) ) 

#define IMsTscDebug_put_CLXDll(This,CLXDll)    \
    ( (This)->lpVtbl -> put_CLXDll(This,CLXDll) ) 

#define IMsTscDebug_get_CLXDll(This,pCLXDll)    \
    ( (This)->lpVtbl -> get_CLXDll(This,pCLXDll) ) 

#define IMsTscDebug_get_ControlType(This,pControlType)    \
    ( (This)->lpVtbl -> get_ControlType(This,pControlType) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsTscDebug_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDrive_INTERFACE_DEFINED__
#define __IMsRdpDrive_INTERFACE_DEFINED__

/* interface IMsRdpDrive */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDrive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d28b5458-f694-47a8-8e61-40356a767e46")
    IMsRdpDrive : public IUnknown
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pName) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectionState( 
            /* [in] */ VARIANT_BOOL vboolRedirState) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectionState( 
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpDriveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDrive * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDrive * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDrive * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IMsRdpDrive * This,
            /* [retval][out] */ BSTR *pName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectionState )( 
            IMsRdpDrive * This,
            /* [in] */ VARIANT_BOOL vboolRedirState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectionState )( 
            IMsRdpDrive * This,
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState);
        
        END_INTERFACE
    } IMsRdpDriveVtbl;

    interface IMsRdpDrive
    {
        CONST_VTBL struct IMsRdpDriveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDrive_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDrive_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDrive_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDrive_get_Name(This,pName)    \
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IMsRdpDrive_put_RedirectionState(This,vboolRedirState)    \
    ( (This)->lpVtbl -> put_RedirectionState(This,vboolRedirState) ) 

#define IMsRdpDrive_get_RedirectionState(This,pvboolRedirState)    \
    ( (This)->lpVtbl -> get_RedirectionState(This,pvboolRedirState) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpDrive_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDriveCollection_INTERFACE_DEFINED__
#define __IMsRdpDriveCollection_INTERFACE_DEFINED__

/* interface IMsRdpDriveCollection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDriveCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7ff17599-da2c-4677-ad35-f60c04fe1585")
    IMsRdpDriveCollection : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RescanDrives( 
            VARIANT_BOOL vboolDynRedir) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriveByIndex( 
            /* [in] */ ULONG index,
            /* [retval][out] */ IMsRdpDrive **ppDevice) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DriveCount( 
            /* [retval][out] */ ULONG *pDriveCount) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpDriveCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDriveCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDriveCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDriveCollection * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RescanDrives )( 
            IMsRdpDriveCollection * This,
            VARIANT_BOOL vboolDynRedir);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriveByIndex )( 
            IMsRdpDriveCollection * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ IMsRdpDrive **ppDevice);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DriveCount )( 
            IMsRdpDriveCollection * This,
            /* [retval][out] */ ULONG *pDriveCount);
        
        END_INTERFACE
    } IMsRdpDriveCollectionVtbl;

    interface IMsRdpDriveCollection
    {
        CONST_VTBL struct IMsRdpDriveCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDriveCollection_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDriveCollection_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDriveCollection_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDriveCollection_RescanDrives(This,vboolDynRedir)    \
    ( (This)->lpVtbl -> RescanDrives(This,vboolDynRedir) ) 

#define IMsRdpDriveCollection_get_DriveByIndex(This,index,ppDevice)    \
    ( (This)->lpVtbl -> get_DriveByIndex(This,index,ppDevice) ) 

#define IMsRdpDriveCollection_get_DriveCount(This,pDriveCount)    \
    ( (This)->lpVtbl -> get_DriveCount(This,pDriveCount) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpDriveCollection_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDevice_INTERFACE_DEFINED__
#define __IMsRdpDevice_INTERFACE_DEFINED__

/* interface IMsRdpDevice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60c3b9c8-9e92-4f5e-a3e7-604a912093ea")
    IMsRdpDevice : public IUnknown
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceInstanceId( 
            /* [retval][out] */ BSTR *pDevInstanceId) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR *pFriendlyName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceDescription( 
            /* [retval][out] */ BSTR *pDeviceDescription) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectionState( 
            /* [in] */ VARIANT_BOOL vboolRedirState) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectionState( 
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDevice * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceInstanceId )( 
            IMsRdpDevice * This,
            /* [retval][out] */ BSTR *pDevInstanceId);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            IMsRdpDevice * This,
            /* [retval][out] */ BSTR *pFriendlyName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceDescription )( 
            IMsRdpDevice * This,
            /* [retval][out] */ BSTR *pDeviceDescription);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectionState )( 
            IMsRdpDevice * This,
            /* [in] */ VARIANT_BOOL vboolRedirState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectionState )( 
            IMsRdpDevice * This,
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState);
        
        END_INTERFACE
    } IMsRdpDeviceVtbl;

    interface IMsRdpDevice
    {
        CONST_VTBL struct IMsRdpDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDevice_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDevice_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDevice_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDevice_get_DeviceInstanceId(This,pDevInstanceId)    \
    ( (This)->lpVtbl -> get_DeviceInstanceId(This,pDevInstanceId) ) 

#define IMsRdpDevice_get_FriendlyName(This,pFriendlyName)    \
    ( (This)->lpVtbl -> get_FriendlyName(This,pFriendlyName) ) 

#define IMsRdpDevice_get_DeviceDescription(This,pDeviceDescription)    \
    ( (This)->lpVtbl -> get_DeviceDescription(This,pDeviceDescription) ) 

#define IMsRdpDevice_put_RedirectionState(This,vboolRedirState)    \
    ( (This)->lpVtbl -> put_RedirectionState(This,vboolRedirState) ) 

#define IMsRdpDevice_get_RedirectionState(This,pvboolRedirState)    \
    ( (This)->lpVtbl -> get_RedirectionState(This,pvboolRedirState) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpDevice_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDeviceCEV2_INTERFACE_DEFINED__
#define __IMsRdpDeviceCEV2_INTERFACE_DEFINED__

/* interface IMsRdpDeviceCEV2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDeviceCEV2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5fb94466-7661-42a8-98b7-01904c11668f")
    IMsRdpDeviceCEV2 : public IMsRdpDevice
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceClassCodes( 
            /* [retval][out] */ BSTR *pDeviceClassCodes) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpDeviceCEV2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDeviceCEV2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDeviceCEV2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDeviceCEV2 * This);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceInstanceId )( 
            IMsRdpDeviceCEV2 * This,
            /* [retval][out] */ BSTR *pDevInstanceId);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            IMsRdpDeviceCEV2 * This,
            /* [retval][out] */ BSTR *pFriendlyName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceDescription )( 
            IMsRdpDeviceCEV2 * This,
            /* [retval][out] */ BSTR *pDeviceDescription);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectionState )( 
            IMsRdpDeviceCEV2 * This,
            /* [in] */ VARIANT_BOOL vboolRedirState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectionState )( 
            IMsRdpDeviceCEV2 * This,
            /* [retval][out] */ VARIANT_BOOL *pvboolRedirState);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceClassCodes )( 
            IMsRdpDeviceCEV2 * This,
            /* [retval][out] */ BSTR *pDeviceClassCodes);
        
        END_INTERFACE
    } IMsRdpDeviceCEV2Vtbl;

    interface IMsRdpDeviceCEV2
    {
        CONST_VTBL struct IMsRdpDeviceCEV2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDeviceCEV2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDeviceCEV2_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDeviceCEV2_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDeviceCEV2_get_DeviceInstanceId(This,pDevInstanceId)    \
    ( (This)->lpVtbl -> get_DeviceInstanceId(This,pDevInstanceId) ) 

#define IMsRdpDeviceCEV2_get_FriendlyName(This,pFriendlyName)    \
    ( (This)->lpVtbl -> get_FriendlyName(This,pFriendlyName) ) 

#define IMsRdpDeviceCEV2_get_DeviceDescription(This,pDeviceDescription)    \
    ( (This)->lpVtbl -> get_DeviceDescription(This,pDeviceDescription) ) 

#define IMsRdpDeviceCEV2_put_RedirectionState(This,vboolRedirState)    \
    ( (This)->lpVtbl -> put_RedirectionState(This,vboolRedirState) ) 

#define IMsRdpDeviceCEV2_get_RedirectionState(This,pvboolRedirState)    \
    ( (This)->lpVtbl -> get_RedirectionState(This,pvboolRedirState) ) 


#define IMsRdpDeviceCEV2_get_DeviceClassCodes(This,pDeviceClassCodes)    \
    ( (This)->lpVtbl -> get_DeviceClassCodes(This,pDeviceClassCodes) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpDeviceCEV2_INTERFACE_DEFINED__ */


#ifndef __IMsRdpDeviceCollection_INTERFACE_DEFINED__
#define __IMsRdpDeviceCollection_INTERFACE_DEFINED__

/* interface IMsRdpDeviceCollection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpDeviceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56540617-d281-488c-8738-6a8fdf64a118")
    IMsRdpDeviceCollection : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RescanDevices( 
            VARIANT_BOOL vboolDynRedir) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceByIndex( 
            /* [in] */ ULONG index,
            /* [retval][out] */ IMsRdpDevice **ppDevice) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceById( 
            /* [in] */ BSTR devInstanceId,
            /* [retval][out] */ IMsRdpDevice **ppDevice) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceCount( 
            /* [retval][out] */ ULONG *pDeviceCount) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpDeviceCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpDeviceCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpDeviceCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpDeviceCollection * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RescanDevices )( 
            IMsRdpDeviceCollection * This,
            VARIANT_BOOL vboolDynRedir);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceByIndex )( 
            IMsRdpDeviceCollection * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ IMsRdpDevice **ppDevice);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceById )( 
            IMsRdpDeviceCollection * This,
            /* [in] */ BSTR devInstanceId,
            /* [retval][out] */ IMsRdpDevice **ppDevice);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceCount )( 
            IMsRdpDeviceCollection * This,
            /* [retval][out] */ ULONG *pDeviceCount);
        
        END_INTERFACE
    } IMsRdpDeviceCollectionVtbl;

    interface IMsRdpDeviceCollection
    {
        CONST_VTBL struct IMsRdpDeviceCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpDeviceCollection_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpDeviceCollection_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpDeviceCollection_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpDeviceCollection_RescanDevices(This,vboolDynRedir)    \
    ( (This)->lpVtbl -> RescanDevices(This,vboolDynRedir) ) 

#define IMsRdpDeviceCollection_get_DeviceByIndex(This,index,ppDevice)    \
    ( (This)->lpVtbl -> get_DeviceByIndex(This,index,ppDevice) ) 

#define IMsRdpDeviceCollection_get_DeviceById(This,devInstanceId,ppDevice)    \
    ( (This)->lpVtbl -> get_DeviceById(This,devInstanceId,ppDevice) ) 

#define IMsRdpDeviceCollection_get_DeviceCount(This,pDeviceCount)    \
    ( (This)->lpVtbl -> get_DeviceCount(This,pDeviceCount) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpDeviceCollection_INTERFACE_DEFINED__ */


#ifndef __IMsTscAdvancedSettings_INTERFACE_DEFINED__
#define __IMsTscAdvancedSettings_INTERFACE_DEFINED__

/* interface IMsTscAdvancedSettings */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsTscAdvancedSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("809945cc-4b3b-4a92-a6b0-dbf9b5f2ef2d")
    IMsTscAdvancedSettings : public IDispatch
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Compress( 
            /* [in] */ LONG compress) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Compress( 
            /* [retval][out] */ LONG *pcompress) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapPeristence( 
            /* [in] */ LONG bitmapPeristence) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapPeristence( 
            /* [retval][out] */ LONG *pbitmapPeristence) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_allowBackgroundInput( 
            /* [in] */ LONG allowBackgroundInput) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_allowBackgroundInput( 
            /* [retval][out] */ LONG *pallowBackgroundInput) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyBoardLayoutStr( 
            /* [in] */ BSTR KeyBoardLayoutStr) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PluginDlls( 
            /* [in] */ BSTR PluginDlls) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IconFile( 
            /* [in] */ BSTR IconFile) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IconIndex( 
            /* [in] */ LONG IconIndex) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ContainerHandledFullScreen( 
            /* [in] */ BOOL ContainerHandledFullScreen) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ContainerHandledFullScreen( 
            /* [retval][out] */ BOOL *pContainerHandledFullScreen) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableRdpdr( 
            /* [in] */ BOOL DisableRdpdr) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DisableRdpdr( 
            /* [retval][out] */ BOOL *pDisableRdpdr) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsTscAdvancedSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscAdvancedSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscAdvancedSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscAdvancedSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ LONG compress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ LONG *pcompress);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ LONG *pbitmapPeristence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ LONG allowBackgroundInput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ LONG *pallowBackgroundInput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ BSTR KeyBoardLayoutStr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ BSTR PluginDlls);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ BSTR IconFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ LONG IconIndex);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ BOOL ContainerHandledFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ BOOL *pContainerHandledFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsTscAdvancedSettings * This,
            /* [in] */ BOOL DisableRdpdr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsTscAdvancedSettings * This,
            /* [retval][out] */ BOOL *pDisableRdpdr);
        
        END_INTERFACE
    } IMsTscAdvancedSettingsVtbl;

    interface IMsTscAdvancedSettings
    {
        CONST_VTBL struct IMsTscAdvancedSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscAdvancedSettings_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscAdvancedSettings_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscAdvancedSettings_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscAdvancedSettings_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscAdvancedSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscAdvancedSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscAdvancedSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsTscAdvancedSettings_put_Compress(This,compress)    \
    ( (This)->lpVtbl -> put_Compress(This,compress) ) 

#define IMsTscAdvancedSettings_get_Compress(This,pcompress)    \
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsTscAdvancedSettings_put_BitmapPeristence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPeristence(This,bitmapPeristence) ) 

#define IMsTscAdvancedSettings_get_BitmapPeristence(This,pbitmapPeristence)    \
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsTscAdvancedSettings_put_allowBackgroundInput(This,allowBackgroundInput)    \
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,allowBackgroundInput) ) 

#define IMsTscAdvancedSettings_get_allowBackgroundInput(This,pallowBackgroundInput)    \
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsTscAdvancedSettings_put_KeyBoardLayoutStr(This,KeyBoardLayoutStr)    \
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,KeyBoardLayoutStr) ) 

#define IMsTscAdvancedSettings_put_PluginDlls(This,PluginDlls)    \
    ( (This)->lpVtbl -> put_PluginDlls(This,PluginDlls) ) 

#define IMsTscAdvancedSettings_put_IconFile(This,IconFile)    \
    ( (This)->lpVtbl -> put_IconFile(This,IconFile) ) 

#define IMsTscAdvancedSettings_put_IconIndex(This,IconIndex)    \
    ( (This)->lpVtbl -> put_IconIndex(This,IconIndex) ) 

#define IMsTscAdvancedSettings_put_ContainerHandledFullScreen(This,ContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,ContainerHandledFullScreen) ) 

#define IMsTscAdvancedSettings_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsTscAdvancedSettings_put_DisableRdpdr(This,DisableRdpdr)    \
    ( (This)->lpVtbl -> put_DisableRdpdr(This,DisableRdpdr) ) 

#define IMsTscAdvancedSettings_get_DisableRdpdr(This,pDisableRdpdr)    \
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsTscAdvancedSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3c65b4ab-12b3-465b-acd4-b8dad3bff9e2")
    IMsRdpClientAdvancedSettings : public IMsTscAdvancedSettings
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SmoothScroll( 
            /* [in] */ LONG smoothScroll) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SmoothScroll( 
            /* [retval][out] */ LONG *psmoothScroll) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AcceleratorPassthrough( 
            /* [in] */ LONG acceleratorPassthrough) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AcceleratorPassthrough( 
            /* [retval][out] */ LONG *pacceleratorPassthrough) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ShadowBitmap( 
            /* [in] */ LONG shadowBitmap) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShadowBitmap( 
            /* [retval][out] */ LONG *pshadowBitmap) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_TransportType( 
            /* [in] */ LONG transportType) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_TransportType( 
            /* [retval][out] */ LONG *ptransportType) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SasSequence( 
            /* [in] */ LONG sasSequence) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SasSequence( 
            /* [retval][out] */ LONG *psasSequence) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EncryptionEnabled( 
            /* [in] */ LONG encryptionEnabled) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EncryptionEnabled( 
            /* [retval][out] */ LONG *pencryptionEnabled) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DedicatedTerminal( 
            /* [in] */ LONG dedicatedTerminal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DedicatedTerminal( 
            /* [retval][out] */ LONG *pdedicatedTerminal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RDPPort( 
            /* [in] */ LONG rdpPort) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RDPPort( 
            /* [retval][out] */ LONG *prdpPort) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableMouse( 
            /* [in] */ LONG enableMouse) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableMouse( 
            /* [retval][out] */ LONG *penableMouse) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DisableCtrlAltDel( 
            /* [in] */ LONG disableCtrlAltDel) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DisableCtrlAltDel( 
            /* [retval][out] */ LONG *pdisableCtrlAltDel) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableWindowsKey( 
            /* [in] */ LONG enableWindowsKey) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableWindowsKey( 
            /* [retval][out] */ LONG *penableWindowsKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DoubleClickDetect( 
            /* [in] */ LONG doubleClickDetect) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DoubleClickDetect( 
            /* [retval][out] */ LONG *pdoubleClickDetect) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaximizeShell( 
            /* [in] */ LONG maximizeShell) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaximizeShell( 
            /* [retval][out] */ LONG *pmaximizeShell) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyFullScreen( 
            /* [in] */ LONG hotKeyFullScreen) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyFullScreen( 
            /* [retval][out] */ LONG *photKeyFullScreen) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyCtrlEsc( 
            /* [in] */ LONG hotKeyCtrlEsc) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyCtrlEsc( 
            /* [retval][out] */ LONG *photKeyCtrlEsc) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyAltEsc( 
            /* [in] */ LONG hotKeyAltEsc) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyAltEsc( 
            /* [retval][out] */ LONG *photKeyAltEsc) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyAltTab( 
            /* [in] */ LONG hotKeyAltTab) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyAltTab( 
            /* [retval][out] */ LONG *photKeyAltTab) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyAltShiftTab( 
            /* [in] */ LONG hotKeyAltShiftTab) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyAltShiftTab( 
            /* [retval][out] */ LONG *photKeyAltShiftTab) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyAltSpace( 
            /* [in] */ LONG hotKeyAltSpace) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyAltSpace( 
            /* [retval][out] */ LONG *photKeyAltSpace) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyCtrlAltDel( 
            /* [in] */ LONG hotKeyCtrlAltDel) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyCtrlAltDel( 
            /* [retval][out] */ LONG *photKeyCtrlAltDel) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_orderDrawThreshold( 
            /* [in] */ LONG orderDrawThreshold) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_orderDrawThreshold( 
            /* [retval][out] */ LONG *porderDrawThreshold) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapCacheSize( 
            /* [in] */ LONG bitmapCacheSize) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapCacheSize( 
            /* [retval][out] */ LONG *pbitmapCacheSize) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapVirtualCacheSize( 
            /* [in] */ LONG bitmapVirtualCacheSize) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapVirtualCacheSize( 
            /* [retval][out] */ LONG *pbitmapVirtualCacheSize) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ScaleBitmapCachesByBPP( 
            /* [in] */ LONG bScale) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ScaleBitmapCachesByBPP( 
            /* [retval][out] */ LONG *pbScale) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NumBitmapCaches( 
            /* [in] */ LONG numBitmapCaches) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NumBitmapCaches( 
            /* [retval][out] */ LONG *pnumBitmapCaches) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CachePersistenceActive( 
            /* [in] */ LONG cachePersistenceActive) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CachePersistenceActive( 
            /* [retval][out] */ LONG *pcachePersistenceActive) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PersistCacheDirectory( 
            /* [in] */ BSTR PersistCacheDirectory) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_brushSupportLevel( 
            /* [in] */ LONG brushSupportLevel) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_brushSupportLevel( 
            /* [retval][out] */ LONG *pbrushSupportLevel) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_minInputSendInterval( 
            /* [in] */ LONG minInputSendInterval) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_minInputSendInterval( 
            /* [retval][out] */ LONG *pminInputSendInterval) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_InputEventsAtOnce( 
            /* [in] */ LONG inputEventsAtOnce) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_InputEventsAtOnce( 
            /* [retval][out] */ LONG *pinputEventsAtOnce) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_maxEventCount( 
            /* [in] */ LONG maxEventCount) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_maxEventCount( 
            /* [retval][out] */ LONG *pmaxEventCount) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_keepAliveInterval( 
            /* [in] */ LONG keepAliveInterval) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_keepAliveInterval( 
            /* [retval][out] */ LONG *pkeepAliveInterval) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_shutdownTimeout( 
            /* [in] */ LONG shutdownTimeout) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_shutdownTimeout( 
            /* [retval][out] */ LONG *pshutdownTimeout) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_overallConnectionTimeout( 
            /* [in] */ LONG overallConnectionTimeout) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_overallConnectionTimeout( 
            /* [retval][out] */ LONG *poverallConnectionTimeout) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_singleConnectionTimeout( 
            /* [in] */ LONG singleConnectionTimeout) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_singleConnectionTimeout( 
            /* [retval][out] */ LONG *psingleConnectionTimeout) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyboardType( 
            /* [in] */ LONG keyboardType) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyboardType( 
            /* [retval][out] */ LONG *pkeyboardType) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyboardSubType( 
            /* [in] */ LONG keyboardSubType) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyboardSubType( 
            /* [retval][out] */ LONG *pkeyboardSubType) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_KeyboardFunctionKey( 
            /* [in] */ LONG keyboardFunctionKey) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_KeyboardFunctionKey( 
            /* [retval][out] */ LONG *pkeyboardFunctionKey) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_WinceFixedPalette( 
            /* [in] */ LONG winceFixedPalette) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_WinceFixedPalette( 
            /* [retval][out] */ LONG *pwinceFixedPalette) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectToServerConsole( 
            /* [in] */ VARIANT_BOOL connectToServerConsole) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectToServerConsole( 
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapPersistence( 
            /* [in] */ LONG bitmapPeristence) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapPersistence( 
            /* [retval][out] */ LONG *pbitmapPersistence) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MinutesToIdleTimeout( 
            /* [in] */ LONG minutesToIdleTimeout) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MinutesToIdleTimeout( 
            /* [retval][out] */ LONG *pminutesToIdleTimeout) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RdpdrLocalPrintingDocName( 
            /* [in] */ BSTR localPrintingDocName) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RdpdrLocalPrintingDocName( 
            /* [retval][out] */ BSTR *pLocalPrintingDocName) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RdpdrClipCleanTempDirString( 
            /* [in] */ BSTR clipCleanTempDirString) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RdpdrClipCleanTempDirString( 
            /* [retval][out] */ BSTR *clipCleanTempDirString) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RdpdrClipPasteInfoString( 
            /* [in] */ BSTR clipPasteInfoString) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RdpdrClipPasteInfoString( 
            /* [retval][out] */ BSTR *clipPasteInfoString) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ClearTextPassword( 
            /* [in] */ BSTR clearTextPassword) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayConnectionBar( 
            /* [in] */ VARIANT_BOOL fDisplayConnectionBar) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayConnectionBar( 
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PinConnectionBar( 
            /* [in] */ VARIANT_BOOL fPinConnectionBar) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PinConnectionBar( 
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_GrabFocusOnConnect( 
            /* [in] */ VARIANT_BOOL fGrabFocusOnConnect) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GrabFocusOnConnect( 
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_LoadBalanceInfo( 
            /* [in] */ BSTR newLBInfo) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_LoadBalanceInfo( 
            /* [retval][out] */ BSTR *pLBInfo) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectDrives( 
            /* [in] */ VARIANT_BOOL redirectDrives) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectDrives( 
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectPrinters( 
            /* [in] */ VARIANT_BOOL redirectPrinters) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectPrinters( 
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectPorts( 
            /* [in] */ VARIANT_BOOL redirectPorts) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectPorts( 
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectSmartCards( 
            /* [in] */ VARIANT_BOOL redirectSmartCards) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectSmartCards( 
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapVirtualCache16BppSize( 
            /* [in] */ LONG bitmapVirtualCache16BppSize) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapVirtualCache16BppSize( 
            /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapVirtualCache24BppSize( 
            /* [in] */ LONG bitmapVirtualCache24BppSize) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapVirtualCache24BppSize( 
            /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PerformanceFlags( 
            /* [in] */ LONG DisableList) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PerformanceFlags( 
            /* [retval][out] */ LONG *pDisableList) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectWithEndpoint( 
            /* [in] */ VARIANT *ConnectEndpoint) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NotifyTSPublicKey( 
            /* [in] */ VARIANT_BOOL fNotify) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NotifyTSPublicKey( 
            /* [retval][out] */ VARIANT_BOOL *pfNotify) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientAdvancedSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG compress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pcompress);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pbitmapPeristence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG allowBackgroundInput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pallowBackgroundInput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR KeyBoardLayoutStr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR PluginDlls);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR IconFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG IconIndex);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BOOL ContainerHandledFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BOOL *pContainerHandledFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BOOL DisableRdpdr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BOOL *pDisableRdpdr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG smoothScroll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *psmoothScroll);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG acceleratorPassthrough);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pacceleratorPassthrough);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG shadowBitmap);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pshadowBitmap);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG transportType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *ptransportType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG sasSequence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *psasSequence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG encryptionEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pencryptionEnabled);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG dedicatedTerminal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pdedicatedTerminal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG rdpPort);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *prdpPort);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG enableMouse);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *penableMouse);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG disableCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pdisableCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG enableWindowsKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *penableWindowsKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG doubleClickDetect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pdoubleClickDetect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG maximizeShell);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pmaximizeShell);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG hotKeyFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *photKeyFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG hotKeyCtrlEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *photKeyCtrlEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG hotKeyAltEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *photKeyAltEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG hotKeyAltTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *photKeyAltTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG hotKeyAltShiftTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *photKeyAltShiftTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG hotKeyAltSpace);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *photKeyAltSpace);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG hotKeyCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *photKeyCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG orderDrawThreshold);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *porderDrawThreshold);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG bitmapCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pbitmapCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG bitmapVirtualCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pbitmapVirtualCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG bScale);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pbScale);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG numBitmapCaches);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pnumBitmapCaches);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG cachePersistenceActive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pcachePersistenceActive);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR PersistCacheDirectory);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG brushSupportLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pbrushSupportLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG minInputSendInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pminInputSendInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG inputEventsAtOnce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pinputEventsAtOnce);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG maxEventCount);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pmaxEventCount);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG keepAliveInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pkeepAliveInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG shutdownTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pshutdownTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG overallConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *poverallConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG singleConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *psingleConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG keyboardType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pkeyboardType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG keyboardSubType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pkeyboardSubType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG keyboardFunctionKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pkeyboardFunctionKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG winceFixedPalette);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pwinceFixedPalette);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL connectToServerConsole);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pbitmapPersistence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG minutesToIdleTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pminutesToIdleTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR localPrintingDocName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR clearTextPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL fDisplayConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL fPinConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL fGrabFocusOnConnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ BSTR newLBInfo);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL redirectDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL redirectPrinters);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL redirectPorts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL redirectSmartCards);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG bitmapVirtualCache16BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG bitmapVirtualCache24BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ LONG DisableList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ LONG *pDisableList);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT *ConnectEndpoint);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [in] */ VARIANT_BOOL fNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettingsVtbl;

    interface IMsRdpClientAdvancedSettings
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings_put_Compress(This,compress)    \
    ( (This)->lpVtbl -> put_Compress(This,compress) ) 

#define IMsRdpClientAdvancedSettings_get_Compress(This,pcompress)    \
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapPeristence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPeristence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapPeristence(This,pbitmapPeristence)    \
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings_put_allowBackgroundInput(This,allowBackgroundInput)    \
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,allowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings_get_allowBackgroundInput(This,pallowBackgroundInput)    \
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings_put_KeyBoardLayoutStr(This,KeyBoardLayoutStr)    \
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,KeyBoardLayoutStr) ) 

#define IMsRdpClientAdvancedSettings_put_PluginDlls(This,PluginDlls)    \
    ( (This)->lpVtbl -> put_PluginDlls(This,PluginDlls) ) 

#define IMsRdpClientAdvancedSettings_put_IconFile(This,IconFile)    \
    ( (This)->lpVtbl -> put_IconFile(This,IconFile) ) 

#define IMsRdpClientAdvancedSettings_put_IconIndex(This,IconIndex)    \
    ( (This)->lpVtbl -> put_IconIndex(This,IconIndex) ) 

#define IMsRdpClientAdvancedSettings_put_ContainerHandledFullScreen(This,ContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,ContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings_put_DisableRdpdr(This,DisableRdpdr)    \
    ( (This)->lpVtbl -> put_DisableRdpdr(This,DisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings_get_DisableRdpdr(This,pDisableRdpdr)    \
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings_put_SmoothScroll(This,smoothScroll)    \
    ( (This)->lpVtbl -> put_SmoothScroll(This,smoothScroll) ) 

#define IMsRdpClientAdvancedSettings_get_SmoothScroll(This,psmoothScroll)    \
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings_put_AcceleratorPassthrough(This,acceleratorPassthrough)    \
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,acceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings_get_AcceleratorPassthrough(This,pacceleratorPassthrough)    \
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings_put_ShadowBitmap(This,shadowBitmap)    \
    ( (This)->lpVtbl -> put_ShadowBitmap(This,shadowBitmap) ) 

#define IMsRdpClientAdvancedSettings_get_ShadowBitmap(This,pshadowBitmap)    \
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings_put_TransportType(This,transportType)    \
    ( (This)->lpVtbl -> put_TransportType(This,transportType) ) 

#define IMsRdpClientAdvancedSettings_get_TransportType(This,ptransportType)    \
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings_put_SasSequence(This,sasSequence)    \
    ( (This)->lpVtbl -> put_SasSequence(This,sasSequence) ) 

#define IMsRdpClientAdvancedSettings_get_SasSequence(This,psasSequence)    \
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings_put_EncryptionEnabled(This,encryptionEnabled)    \
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,encryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings_get_EncryptionEnabled(This,pencryptionEnabled)    \
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings_put_DedicatedTerminal(This,dedicatedTerminal)    \
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,dedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings_get_DedicatedTerminal(This,pdedicatedTerminal)    \
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings_put_RDPPort(This,rdpPort)    \
    ( (This)->lpVtbl -> put_RDPPort(This,rdpPort) ) 

#define IMsRdpClientAdvancedSettings_get_RDPPort(This,prdpPort)    \
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings_put_EnableMouse(This,enableMouse)    \
    ( (This)->lpVtbl -> put_EnableMouse(This,enableMouse) ) 

#define IMsRdpClientAdvancedSettings_get_EnableMouse(This,penableMouse)    \
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings_put_DisableCtrlAltDel(This,disableCtrlAltDel)    \
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,disableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)    \
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings_put_EnableWindowsKey(This,enableWindowsKey)    \
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,enableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings_get_EnableWindowsKey(This,penableWindowsKey)    \
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings_put_DoubleClickDetect(This,doubleClickDetect)    \
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,doubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings_get_DoubleClickDetect(This,pdoubleClickDetect)    \
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings_put_MaximizeShell(This,maximizeShell)    \
    ( (This)->lpVtbl -> put_MaximizeShell(This,maximizeShell) ) 

#define IMsRdpClientAdvancedSettings_get_MaximizeShell(This,pmaximizeShell)    \
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyFullScreen(This,hotKeyFullScreen)    \
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,hotKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyFullScreen(This,photKeyFullScreen)    \
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyCtrlEsc(This,hotKeyCtrlEsc)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,hotKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyAltEsc(This,hotKeyAltEsc)    \
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,hotKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyAltEsc(This,photKeyAltEsc)    \
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyAltTab(This,hotKeyAltTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,hotKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyAltTab(This,photKeyAltTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyAltShiftTab(This,hotKeyAltShiftTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,hotKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyAltSpace(This,hotKeyAltSpace)    \
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,hotKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyAltSpace(This,photKeyAltSpace)    \
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings_put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings_put_orderDrawThreshold(This,orderDrawThreshold)    \
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,orderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings_get_orderDrawThreshold(This,porderDrawThreshold)    \
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapCacheSize(This,bitmapCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,bitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapCacheSize(This,pbitmapCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings_put_ScaleBitmapCachesByBPP(This,bScale)    \
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,bScale) ) 

#define IMsRdpClientAdvancedSettings_get_ScaleBitmapCachesByBPP(This,pbScale)    \
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings_put_NumBitmapCaches(This,numBitmapCaches)    \
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,numBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings_get_NumBitmapCaches(This,pnumBitmapCaches)    \
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings_put_CachePersistenceActive(This,cachePersistenceActive)    \
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,cachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings_get_CachePersistenceActive(This,pcachePersistenceActive)    \
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings_put_PersistCacheDirectory(This,PersistCacheDirectory)    \
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,PersistCacheDirectory) ) 

#define IMsRdpClientAdvancedSettings_put_brushSupportLevel(This,brushSupportLevel)    \
    ( (This)->lpVtbl -> put_brushSupportLevel(This,brushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings_get_brushSupportLevel(This,pbrushSupportLevel)    \
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings_put_minInputSendInterval(This,minInputSendInterval)    \
    ( (This)->lpVtbl -> put_minInputSendInterval(This,minInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings_get_minInputSendInterval(This,pminInputSendInterval)    \
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings_put_InputEventsAtOnce(This,inputEventsAtOnce)    \
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,inputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings_get_InputEventsAtOnce(This,pinputEventsAtOnce)    \
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings_put_maxEventCount(This,maxEventCount)    \
    ( (This)->lpVtbl -> put_maxEventCount(This,maxEventCount) ) 

#define IMsRdpClientAdvancedSettings_get_maxEventCount(This,pmaxEventCount)    \
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings_put_keepAliveInterval(This,keepAliveInterval)    \
    ( (This)->lpVtbl -> put_keepAliveInterval(This,keepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings_get_keepAliveInterval(This,pkeepAliveInterval)    \
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings_put_shutdownTimeout(This,shutdownTimeout)    \
    ( (This)->lpVtbl -> put_shutdownTimeout(This,shutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings_get_shutdownTimeout(This,pshutdownTimeout)    \
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings_put_overallConnectionTimeout(This,overallConnectionTimeout)    \
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,overallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings_get_overallConnectionTimeout(This,poverallConnectionTimeout)    \
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings_put_singleConnectionTimeout(This,singleConnectionTimeout)    \
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,singleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings_get_singleConnectionTimeout(This,psingleConnectionTimeout)    \
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings_put_KeyboardType(This,keyboardType)    \
    ( (This)->lpVtbl -> put_KeyboardType(This,keyboardType) ) 

#define IMsRdpClientAdvancedSettings_get_KeyboardType(This,pkeyboardType)    \
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings_put_KeyboardSubType(This,keyboardSubType)    \
    ( (This)->lpVtbl -> put_KeyboardSubType(This,keyboardSubType) ) 

#define IMsRdpClientAdvancedSettings_get_KeyboardSubType(This,pkeyboardSubType)    \
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings_put_KeyboardFunctionKey(This,keyboardFunctionKey)    \
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,keyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)    \
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings_put_WinceFixedPalette(This,winceFixedPalette)    \
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,winceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings_get_WinceFixedPalette(This,pwinceFixedPalette)    \
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings_put_ConnectToServerConsole(This,connectToServerConsole)    \
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,connectToServerConsole) ) 

#define IMsRdpClientAdvancedSettings_get_ConnectToServerConsole(This,pConnectToConsole)    \
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapPersistence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPersistence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapPersistence(This,pbitmapPersistence)    \
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings_put_MinutesToIdleTimeout(This,minutesToIdleTimeout)    \
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,minutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)    \
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings_put_RdpdrLocalPrintingDocName(This,localPrintingDocName)    \
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,localPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)    \
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings_put_ClearTextPassword(This,clearTextPassword)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,clearTextPassword) ) 

#define IMsRdpClientAdvancedSettings_put_DisplayConnectionBar(This,fDisplayConnectionBar)    \
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,fDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings_get_DisplayConnectionBar(This,pDisplayConnectionBar)    \
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings_put_PinConnectionBar(This,fPinConnectionBar)    \
    ( (This)->lpVtbl -> put_PinConnectionBar(This,fPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings_get_PinConnectionBar(This,pPinConnectionBar)    \
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings_put_GrabFocusOnConnect(This,fGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,fGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings_put_LoadBalanceInfo(This,newLBInfo)    \
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,newLBInfo) ) 

#define IMsRdpClientAdvancedSettings_get_LoadBalanceInfo(This,pLBInfo)    \
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings_put_RedirectDrives(This,redirectDrives)    \
    ( (This)->lpVtbl -> put_RedirectDrives(This,redirectDrives) ) 

#define IMsRdpClientAdvancedSettings_get_RedirectDrives(This,pRedirectDrives)    \
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings_put_RedirectPrinters(This,redirectPrinters)    \
    ( (This)->lpVtbl -> put_RedirectPrinters(This,redirectPrinters) ) 

#define IMsRdpClientAdvancedSettings_get_RedirectPrinters(This,pRedirectPrinters)    \
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings_put_RedirectPorts(This,redirectPorts)    \
    ( (This)->lpVtbl -> put_RedirectPorts(This,redirectPorts) ) 

#define IMsRdpClientAdvancedSettings_get_RedirectPorts(This,pRedirectPorts)    \
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings_put_RedirectSmartCards(This,redirectSmartCards)    \
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,redirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings_get_RedirectSmartCards(This,pRedirectSmartCards)    \
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings_put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings_put_PerformanceFlags(This,DisableList)    \
    ( (This)->lpVtbl -> put_PerformanceFlags(This,DisableList) ) 

#define IMsRdpClientAdvancedSettings_get_PerformanceFlags(This,pDisableList)    \
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings_put_ConnectWithEndpoint(This,ConnectEndpoint)    \
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,ConnectEndpoint) ) 

#define IMsRdpClientAdvancedSettings_put_NotifyTSPublicKey(This,fNotify)    \
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,fNotify) ) 

#define IMsRdpClientAdvancedSettings_get_NotifyTSPublicKey(This,pfNotify)    \
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_BitmapVirtualCache16BppSize_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_BitmapVirtualCache16BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_BitmapVirtualCache24BppSize_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ LONG bitmapVirtualCache24BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_BitmapVirtualCache24BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_BitmapVirtualCache24BppSize_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_BitmapVirtualCache24BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_PerformanceFlags_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ LONG DisableList);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_PerformanceFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_PerformanceFlags_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ LONG *pDisableList);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_PerformanceFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_ConnectWithEndpoint_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ VARIANT *ConnectEndpoint);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_ConnectWithEndpoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_put_NotifyTSPublicKey_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [in] */ VARIANT_BOOL fNotify);


void __RPC_STUB IMsRdpClientAdvancedSettings_put_NotifyTSPublicKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings_get_NotifyTSPublicKey_Proxy( 
    IMsRdpClientAdvancedSettings * This,
    /* [retval][out] */ VARIANT_BOOL *pfNotify);


void __RPC_STUB IMsRdpClientAdvancedSettings_get_NotifyTSPublicKey_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IMsRdpClientAdvancedSettings_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings2_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings2_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9ac42117-2b76-4320-aa44-0e616ab8437b")
    IMsRdpClientAdvancedSettings2 : public IMsRdpClientAdvancedSettings
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CanAutoReconnect( 
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableAutoReconnect( 
            /* [in] */ VARIANT_BOOL fEnableAutoReconnect) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableAutoReconnect( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_MaxReconnectAttempts( 
            /* [in] */ LONG MaxReconnectAttempts) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxReconnectAttempts( 
            /* [retval][out] */ LONG *pMaxReconnectAttempts) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientAdvancedSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG compress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pcompress);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pbitmapPeristence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG allowBackgroundInput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pallowBackgroundInput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR KeyBoardLayoutStr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR PluginDlls);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR IconFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG IconIndex);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BOOL ContainerHandledFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BOOL *pContainerHandledFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BOOL DisableRdpdr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BOOL *pDisableRdpdr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG smoothScroll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *psmoothScroll);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG acceleratorPassthrough);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pacceleratorPassthrough);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG shadowBitmap);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pshadowBitmap);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG transportType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *ptransportType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG sasSequence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *psasSequence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG encryptionEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pencryptionEnabled);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG dedicatedTerminal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pdedicatedTerminal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG rdpPort);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *prdpPort);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG enableMouse);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *penableMouse);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG disableCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pdisableCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG enableWindowsKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *penableWindowsKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG doubleClickDetect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pdoubleClickDetect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG maximizeShell);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pmaximizeShell);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG hotKeyFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *photKeyFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG hotKeyCtrlEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *photKeyCtrlEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG hotKeyAltEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *photKeyAltEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG hotKeyAltTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *photKeyAltTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG hotKeyAltShiftTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *photKeyAltShiftTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG hotKeyAltSpace);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *photKeyAltSpace);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG hotKeyCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *photKeyCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG orderDrawThreshold);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *porderDrawThreshold);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG bitmapCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pbitmapCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG bitmapVirtualCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pbitmapVirtualCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG bScale);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pbScale);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG numBitmapCaches);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pnumBitmapCaches);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG cachePersistenceActive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pcachePersistenceActive);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR PersistCacheDirectory);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG brushSupportLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pbrushSupportLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG minInputSendInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pminInputSendInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG inputEventsAtOnce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pinputEventsAtOnce);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG maxEventCount);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pmaxEventCount);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG keepAliveInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pkeepAliveInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG shutdownTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pshutdownTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG overallConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *poverallConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG singleConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *psingleConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG keyboardType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pkeyboardType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG keyboardSubType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pkeyboardSubType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG keyboardFunctionKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pkeyboardFunctionKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG winceFixedPalette);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pwinceFixedPalette);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL connectToServerConsole);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pbitmapPersistence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG minutesToIdleTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pminutesToIdleTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR localPrintingDocName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR clearTextPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL fDisplayConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL fPinConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL fGrabFocusOnConnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ BSTR newLBInfo);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL redirectDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL redirectPrinters);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL redirectPorts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL redirectSmartCards);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG bitmapVirtualCache16BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG bitmapVirtualCache24BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG DisableList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pDisableList);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT *ConnectEndpoint);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL fNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ VARIANT_BOOL fEnableAutoReconnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [in] */ LONG MaxReconnectAttempts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings2 * This,
            /* [retval][out] */ LONG *pMaxReconnectAttempts);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings2Vtbl;

    interface IMsRdpClientAdvancedSettings2
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings2_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings2_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings2_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings2_put_Compress(This,compress)    \
    ( (This)->lpVtbl -> put_Compress(This,compress) ) 

#define IMsRdpClientAdvancedSettings2_get_Compress(This,pcompress)    \
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapPeristence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPeristence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapPeristence(This,pbitmapPeristence)    \
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings2_put_allowBackgroundInput(This,allowBackgroundInput)    \
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,allowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings2_get_allowBackgroundInput(This,pallowBackgroundInput)    \
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings2_put_KeyBoardLayoutStr(This,KeyBoardLayoutStr)    \
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,KeyBoardLayoutStr) ) 

#define IMsRdpClientAdvancedSettings2_put_PluginDlls(This,PluginDlls)    \
    ( (This)->lpVtbl -> put_PluginDlls(This,PluginDlls) ) 

#define IMsRdpClientAdvancedSettings2_put_IconFile(This,IconFile)    \
    ( (This)->lpVtbl -> put_IconFile(This,IconFile) ) 

#define IMsRdpClientAdvancedSettings2_put_IconIndex(This,IconIndex)    \
    ( (This)->lpVtbl -> put_IconIndex(This,IconIndex) ) 

#define IMsRdpClientAdvancedSettings2_put_ContainerHandledFullScreen(This,ContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,ContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings2_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings2_put_DisableRdpdr(This,DisableRdpdr)    \
    ( (This)->lpVtbl -> put_DisableRdpdr(This,DisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings2_get_DisableRdpdr(This,pDisableRdpdr)    \
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings2_put_SmoothScroll(This,smoothScroll)    \
    ( (This)->lpVtbl -> put_SmoothScroll(This,smoothScroll) ) 

#define IMsRdpClientAdvancedSettings2_get_SmoothScroll(This,psmoothScroll)    \
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings2_put_AcceleratorPassthrough(This,acceleratorPassthrough)    \
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,acceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings2_get_AcceleratorPassthrough(This,pacceleratorPassthrough)    \
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings2_put_ShadowBitmap(This,shadowBitmap)    \
    ( (This)->lpVtbl -> put_ShadowBitmap(This,shadowBitmap) ) 

#define IMsRdpClientAdvancedSettings2_get_ShadowBitmap(This,pshadowBitmap)    \
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings2_put_TransportType(This,transportType)    \
    ( (This)->lpVtbl -> put_TransportType(This,transportType) ) 

#define IMsRdpClientAdvancedSettings2_get_TransportType(This,ptransportType)    \
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings2_put_SasSequence(This,sasSequence)    \
    ( (This)->lpVtbl -> put_SasSequence(This,sasSequence) ) 

#define IMsRdpClientAdvancedSettings2_get_SasSequence(This,psasSequence)    \
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings2_put_EncryptionEnabled(This,encryptionEnabled)    \
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,encryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings2_get_EncryptionEnabled(This,pencryptionEnabled)    \
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings2_put_DedicatedTerminal(This,dedicatedTerminal)    \
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,dedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings2_get_DedicatedTerminal(This,pdedicatedTerminal)    \
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings2_put_RDPPort(This,rdpPort)    \
    ( (This)->lpVtbl -> put_RDPPort(This,rdpPort) ) 

#define IMsRdpClientAdvancedSettings2_get_RDPPort(This,prdpPort)    \
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings2_put_EnableMouse(This,enableMouse)    \
    ( (This)->lpVtbl -> put_EnableMouse(This,enableMouse) ) 

#define IMsRdpClientAdvancedSettings2_get_EnableMouse(This,penableMouse)    \
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings2_put_DisableCtrlAltDel(This,disableCtrlAltDel)    \
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,disableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings2_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)    \
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings2_put_EnableWindowsKey(This,enableWindowsKey)    \
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,enableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings2_get_EnableWindowsKey(This,penableWindowsKey)    \
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings2_put_DoubleClickDetect(This,doubleClickDetect)    \
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,doubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings2_get_DoubleClickDetect(This,pdoubleClickDetect)    \
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings2_put_MaximizeShell(This,maximizeShell)    \
    ( (This)->lpVtbl -> put_MaximizeShell(This,maximizeShell) ) 

#define IMsRdpClientAdvancedSettings2_get_MaximizeShell(This,pmaximizeShell)    \
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyFullScreen(This,hotKeyFullScreen)    \
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,hotKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyFullScreen(This,photKeyFullScreen)    \
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyCtrlEsc(This,hotKeyCtrlEsc)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,hotKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyAltEsc(This,hotKeyAltEsc)    \
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,hotKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyAltEsc(This,photKeyAltEsc)    \
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyAltTab(This,hotKeyAltTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,hotKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyAltTab(This,photKeyAltTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyAltShiftTab(This,hotKeyAltShiftTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,hotKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyAltSpace(This,hotKeyAltSpace)    \
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,hotKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyAltSpace(This,photKeyAltSpace)    \
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings2_put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings2_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings2_put_orderDrawThreshold(This,orderDrawThreshold)    \
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,orderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings2_get_orderDrawThreshold(This,porderDrawThreshold)    \
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapCacheSize(This,bitmapCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,bitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapCacheSize(This,pbitmapCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings2_put_ScaleBitmapCachesByBPP(This,bScale)    \
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,bScale) ) 

#define IMsRdpClientAdvancedSettings2_get_ScaleBitmapCachesByBPP(This,pbScale)    \
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings2_put_NumBitmapCaches(This,numBitmapCaches)    \
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,numBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings2_get_NumBitmapCaches(This,pnumBitmapCaches)    \
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings2_put_CachePersistenceActive(This,cachePersistenceActive)    \
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,cachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings2_get_CachePersistenceActive(This,pcachePersistenceActive)    \
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings2_put_PersistCacheDirectory(This,PersistCacheDirectory)    \
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,PersistCacheDirectory) ) 

#define IMsRdpClientAdvancedSettings2_put_brushSupportLevel(This,brushSupportLevel)    \
    ( (This)->lpVtbl -> put_brushSupportLevel(This,brushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings2_get_brushSupportLevel(This,pbrushSupportLevel)    \
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings2_put_minInputSendInterval(This,minInputSendInterval)    \
    ( (This)->lpVtbl -> put_minInputSendInterval(This,minInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings2_get_minInputSendInterval(This,pminInputSendInterval)    \
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings2_put_InputEventsAtOnce(This,inputEventsAtOnce)    \
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,inputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings2_get_InputEventsAtOnce(This,pinputEventsAtOnce)    \
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings2_put_maxEventCount(This,maxEventCount)    \
    ( (This)->lpVtbl -> put_maxEventCount(This,maxEventCount) ) 

#define IMsRdpClientAdvancedSettings2_get_maxEventCount(This,pmaxEventCount)    \
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings2_put_keepAliveInterval(This,keepAliveInterval)    \
    ( (This)->lpVtbl -> put_keepAliveInterval(This,keepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings2_get_keepAliveInterval(This,pkeepAliveInterval)    \
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings2_put_shutdownTimeout(This,shutdownTimeout)    \
    ( (This)->lpVtbl -> put_shutdownTimeout(This,shutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings2_get_shutdownTimeout(This,pshutdownTimeout)    \
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings2_put_overallConnectionTimeout(This,overallConnectionTimeout)    \
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,overallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings2_get_overallConnectionTimeout(This,poverallConnectionTimeout)    \
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings2_put_singleConnectionTimeout(This,singleConnectionTimeout)    \
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,singleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings2_get_singleConnectionTimeout(This,psingleConnectionTimeout)    \
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings2_put_KeyboardType(This,keyboardType)    \
    ( (This)->lpVtbl -> put_KeyboardType(This,keyboardType) ) 

#define IMsRdpClientAdvancedSettings2_get_KeyboardType(This,pkeyboardType)    \
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings2_put_KeyboardSubType(This,keyboardSubType)    \
    ( (This)->lpVtbl -> put_KeyboardSubType(This,keyboardSubType) ) 

#define IMsRdpClientAdvancedSettings2_get_KeyboardSubType(This,pkeyboardSubType)    \
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings2_put_KeyboardFunctionKey(This,keyboardFunctionKey)    \
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,keyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings2_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)    \
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings2_put_WinceFixedPalette(This,winceFixedPalette)    \
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,winceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings2_get_WinceFixedPalette(This,pwinceFixedPalette)    \
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings2_put_ConnectToServerConsole(This,connectToServerConsole)    \
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,connectToServerConsole) ) 

#define IMsRdpClientAdvancedSettings2_get_ConnectToServerConsole(This,pConnectToConsole)    \
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapPersistence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPersistence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapPersistence(This,pbitmapPersistence)    \
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings2_put_MinutesToIdleTimeout(This,minutesToIdleTimeout)    \
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,minutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings2_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)    \
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings2_put_RdpdrLocalPrintingDocName(This,localPrintingDocName)    \
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,localPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings2_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)    \
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings2_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings2_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings2_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings2_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings2_put_ClearTextPassword(This,clearTextPassword)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,clearTextPassword) ) 

#define IMsRdpClientAdvancedSettings2_put_DisplayConnectionBar(This,fDisplayConnectionBar)    \
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,fDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings2_get_DisplayConnectionBar(This,pDisplayConnectionBar)    \
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings2_put_PinConnectionBar(This,fPinConnectionBar)    \
    ( (This)->lpVtbl -> put_PinConnectionBar(This,fPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings2_get_PinConnectionBar(This,pPinConnectionBar)    \
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings2_put_GrabFocusOnConnect(This,fGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,fGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings2_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings2_put_LoadBalanceInfo(This,newLBInfo)    \
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,newLBInfo) ) 

#define IMsRdpClientAdvancedSettings2_get_LoadBalanceInfo(This,pLBInfo)    \
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings2_put_RedirectDrives(This,redirectDrives)    \
    ( (This)->lpVtbl -> put_RedirectDrives(This,redirectDrives) ) 

#define IMsRdpClientAdvancedSettings2_get_RedirectDrives(This,pRedirectDrives)    \
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings2_put_RedirectPrinters(This,redirectPrinters)    \
    ( (This)->lpVtbl -> put_RedirectPrinters(This,redirectPrinters) ) 

#define IMsRdpClientAdvancedSettings2_get_RedirectPrinters(This,pRedirectPrinters)    \
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings2_put_RedirectPorts(This,redirectPorts)    \
    ( (This)->lpVtbl -> put_RedirectPorts(This,redirectPorts) ) 

#define IMsRdpClientAdvancedSettings2_get_RedirectPorts(This,pRedirectPorts)    \
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings2_put_RedirectSmartCards(This,redirectSmartCards)    \
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,redirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings2_get_RedirectSmartCards(This,pRedirectSmartCards)    \
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings2_put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings2_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings2_put_PerformanceFlags(This,DisableList)    \
    ( (This)->lpVtbl -> put_PerformanceFlags(This,DisableList) ) 

#define IMsRdpClientAdvancedSettings2_get_PerformanceFlags(This,pDisableList)    \
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings2_put_ConnectWithEndpoint(This,ConnectEndpoint)    \
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,ConnectEndpoint) ) 

#define IMsRdpClientAdvancedSettings2_put_NotifyTSPublicKey(This,fNotify)    \
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,fNotify) ) 

#define IMsRdpClientAdvancedSettings2_get_NotifyTSPublicKey(This,pfNotify)    \
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings2_get_CanAutoReconnect(This,pfCanAutoReconnect)    \
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings2_put_EnableAutoReconnect(This,fEnableAutoReconnect)    \
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,fEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings2_get_EnableAutoReconnect(This,pfEnableAutoReconnect)    \
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings2_put_MaxReconnectAttempts(This,MaxReconnectAttempts)    \
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,MaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings2_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)    \
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_get_CanAutoReconnect_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);


void __RPC_STUB IMsRdpClientAdvancedSettings2_get_CanAutoReconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_put_EnableAutoReconnect_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [in] */ VARIANT_BOOL fEnableAutoReconnect);


void __RPC_STUB IMsRdpClientAdvancedSettings2_put_EnableAutoReconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_get_EnableAutoReconnect_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);


void __RPC_STUB IMsRdpClientAdvancedSettings2_get_EnableAutoReconnect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_put_MaxReconnectAttempts_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [in] */ LONG MaxReconnectAttempts);


void __RPC_STUB IMsRdpClientAdvancedSettings2_put_MaxReconnectAttempts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings2_get_MaxReconnectAttempts_Proxy( 
    IMsRdpClientAdvancedSettings2 * This,
    /* [retval][out] */ LONG *pMaxReconnectAttempts);


void __RPC_STUB IMsRdpClientAdvancedSettings2_get_MaxReconnectAttempts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IMsRdpClientAdvancedSettings2_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings3_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings3_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings3 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19cd856b-c542-4c53-acee-f127e3be1a59")
    IMsRdpClientAdvancedSettings3 : public IMsRdpClientAdvancedSettings2
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionBarShowMinimizeButton( 
            /* [in] */ VARIANT_BOOL fShowMinimize) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionBarShowMinimizeButton( 
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionBarShowRestoreButton( 
            /* [in] */ VARIANT_BOOL fShowRestore) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionBarShowRestoreButton( 
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientAdvancedSettings3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG compress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pcompress);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pbitmapPeristence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG allowBackgroundInput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pallowBackgroundInput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR KeyBoardLayoutStr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR PluginDlls);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR IconFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG IconIndex);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BOOL ContainerHandledFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BOOL *pContainerHandledFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BOOL DisableRdpdr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BOOL *pDisableRdpdr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG smoothScroll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *psmoothScroll);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG acceleratorPassthrough);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pacceleratorPassthrough);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG shadowBitmap);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pshadowBitmap);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG transportType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *ptransportType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG sasSequence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *psasSequence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG encryptionEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pencryptionEnabled);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG dedicatedTerminal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pdedicatedTerminal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG rdpPort);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *prdpPort);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG enableMouse);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *penableMouse);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG disableCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pdisableCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG enableWindowsKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *penableWindowsKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG doubleClickDetect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pdoubleClickDetect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG maximizeShell);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pmaximizeShell);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG hotKeyFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *photKeyFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG hotKeyCtrlEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *photKeyCtrlEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG hotKeyAltEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *photKeyAltEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG hotKeyAltTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *photKeyAltTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG hotKeyAltShiftTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *photKeyAltShiftTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG hotKeyAltSpace);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *photKeyAltSpace);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG hotKeyCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *photKeyCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG orderDrawThreshold);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *porderDrawThreshold);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG bitmapCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pbitmapCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG bitmapVirtualCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pbitmapVirtualCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG bScale);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pbScale);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG numBitmapCaches);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pnumBitmapCaches);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG cachePersistenceActive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pcachePersistenceActive);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR PersistCacheDirectory);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG brushSupportLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pbrushSupportLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG minInputSendInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pminInputSendInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG inputEventsAtOnce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pinputEventsAtOnce);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG maxEventCount);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pmaxEventCount);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG keepAliveInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pkeepAliveInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG shutdownTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pshutdownTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG overallConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *poverallConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG singleConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *psingleConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG keyboardType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pkeyboardType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG keyboardSubType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pkeyboardSubType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG keyboardFunctionKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pkeyboardFunctionKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG winceFixedPalette);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pwinceFixedPalette);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL connectToServerConsole);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pbitmapPersistence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG minutesToIdleTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pminutesToIdleTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR localPrintingDocName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR clearTextPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL fDisplayConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL fPinConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL fGrabFocusOnConnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ BSTR newLBInfo);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL redirectDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL redirectPrinters);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL redirectPorts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL redirectSmartCards);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG bitmapVirtualCache16BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG bitmapVirtualCache24BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG DisableList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pDisableList);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT *ConnectEndpoint);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL fNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL fEnableAutoReconnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ LONG MaxReconnectAttempts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ LONG *pMaxReconnectAttempts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL fShowMinimize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [in] */ VARIANT_BOOL fShowRestore);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings3Vtbl;

    interface IMsRdpClientAdvancedSettings3
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings3_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings3_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings3_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings3_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings3_put_Compress(This,compress)    \
    ( (This)->lpVtbl -> put_Compress(This,compress) ) 

#define IMsRdpClientAdvancedSettings3_get_Compress(This,pcompress)    \
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapPeristence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPeristence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapPeristence(This,pbitmapPeristence)    \
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings3_put_allowBackgroundInput(This,allowBackgroundInput)    \
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,allowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings3_get_allowBackgroundInput(This,pallowBackgroundInput)    \
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings3_put_KeyBoardLayoutStr(This,KeyBoardLayoutStr)    \
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,KeyBoardLayoutStr) ) 

#define IMsRdpClientAdvancedSettings3_put_PluginDlls(This,PluginDlls)    \
    ( (This)->lpVtbl -> put_PluginDlls(This,PluginDlls) ) 

#define IMsRdpClientAdvancedSettings3_put_IconFile(This,IconFile)    \
    ( (This)->lpVtbl -> put_IconFile(This,IconFile) ) 

#define IMsRdpClientAdvancedSettings3_put_IconIndex(This,IconIndex)    \
    ( (This)->lpVtbl -> put_IconIndex(This,IconIndex) ) 

#define IMsRdpClientAdvancedSettings3_put_ContainerHandledFullScreen(This,ContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,ContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings3_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings3_put_DisableRdpdr(This,DisableRdpdr)    \
    ( (This)->lpVtbl -> put_DisableRdpdr(This,DisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings3_get_DisableRdpdr(This,pDisableRdpdr)    \
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings3_put_SmoothScroll(This,smoothScroll)    \
    ( (This)->lpVtbl -> put_SmoothScroll(This,smoothScroll) ) 

#define IMsRdpClientAdvancedSettings3_get_SmoothScroll(This,psmoothScroll)    \
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings3_put_AcceleratorPassthrough(This,acceleratorPassthrough)    \
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,acceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings3_get_AcceleratorPassthrough(This,pacceleratorPassthrough)    \
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings3_put_ShadowBitmap(This,shadowBitmap)    \
    ( (This)->lpVtbl -> put_ShadowBitmap(This,shadowBitmap) ) 

#define IMsRdpClientAdvancedSettings3_get_ShadowBitmap(This,pshadowBitmap)    \
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings3_put_TransportType(This,transportType)    \
    ( (This)->lpVtbl -> put_TransportType(This,transportType) ) 

#define IMsRdpClientAdvancedSettings3_get_TransportType(This,ptransportType)    \
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings3_put_SasSequence(This,sasSequence)    \
    ( (This)->lpVtbl -> put_SasSequence(This,sasSequence) ) 

#define IMsRdpClientAdvancedSettings3_get_SasSequence(This,psasSequence)    \
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings3_put_EncryptionEnabled(This,encryptionEnabled)    \
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,encryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings3_get_EncryptionEnabled(This,pencryptionEnabled)    \
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings3_put_DedicatedTerminal(This,dedicatedTerminal)    \
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,dedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings3_get_DedicatedTerminal(This,pdedicatedTerminal)    \
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings3_put_RDPPort(This,rdpPort)    \
    ( (This)->lpVtbl -> put_RDPPort(This,rdpPort) ) 

#define IMsRdpClientAdvancedSettings3_get_RDPPort(This,prdpPort)    \
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings3_put_EnableMouse(This,enableMouse)    \
    ( (This)->lpVtbl -> put_EnableMouse(This,enableMouse) ) 

#define IMsRdpClientAdvancedSettings3_get_EnableMouse(This,penableMouse)    \
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings3_put_DisableCtrlAltDel(This,disableCtrlAltDel)    \
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,disableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings3_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)    \
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings3_put_EnableWindowsKey(This,enableWindowsKey)    \
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,enableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings3_get_EnableWindowsKey(This,penableWindowsKey)    \
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings3_put_DoubleClickDetect(This,doubleClickDetect)    \
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,doubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings3_get_DoubleClickDetect(This,pdoubleClickDetect)    \
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings3_put_MaximizeShell(This,maximizeShell)    \
    ( (This)->lpVtbl -> put_MaximizeShell(This,maximizeShell) ) 

#define IMsRdpClientAdvancedSettings3_get_MaximizeShell(This,pmaximizeShell)    \
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyFullScreen(This,hotKeyFullScreen)    \
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,hotKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyFullScreen(This,photKeyFullScreen)    \
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyCtrlEsc(This,hotKeyCtrlEsc)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,hotKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyAltEsc(This,hotKeyAltEsc)    \
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,hotKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyAltEsc(This,photKeyAltEsc)    \
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyAltTab(This,hotKeyAltTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,hotKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyAltTab(This,photKeyAltTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyAltShiftTab(This,hotKeyAltShiftTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,hotKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyAltSpace(This,hotKeyAltSpace)    \
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,hotKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyAltSpace(This,photKeyAltSpace)    \
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings3_put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings3_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings3_put_orderDrawThreshold(This,orderDrawThreshold)    \
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,orderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings3_get_orderDrawThreshold(This,porderDrawThreshold)    \
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapCacheSize(This,bitmapCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,bitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapCacheSize(This,pbitmapCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings3_put_ScaleBitmapCachesByBPP(This,bScale)    \
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,bScale) ) 

#define IMsRdpClientAdvancedSettings3_get_ScaleBitmapCachesByBPP(This,pbScale)    \
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings3_put_NumBitmapCaches(This,numBitmapCaches)    \
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,numBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings3_get_NumBitmapCaches(This,pnumBitmapCaches)    \
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings3_put_CachePersistenceActive(This,cachePersistenceActive)    \
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,cachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings3_get_CachePersistenceActive(This,pcachePersistenceActive)    \
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings3_put_PersistCacheDirectory(This,PersistCacheDirectory)    \
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,PersistCacheDirectory) ) 

#define IMsRdpClientAdvancedSettings3_put_brushSupportLevel(This,brushSupportLevel)    \
    ( (This)->lpVtbl -> put_brushSupportLevel(This,brushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings3_get_brushSupportLevel(This,pbrushSupportLevel)    \
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings3_put_minInputSendInterval(This,minInputSendInterval)    \
    ( (This)->lpVtbl -> put_minInputSendInterval(This,minInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings3_get_minInputSendInterval(This,pminInputSendInterval)    \
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings3_put_InputEventsAtOnce(This,inputEventsAtOnce)    \
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,inputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings3_get_InputEventsAtOnce(This,pinputEventsAtOnce)    \
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings3_put_maxEventCount(This,maxEventCount)    \
    ( (This)->lpVtbl -> put_maxEventCount(This,maxEventCount) ) 

#define IMsRdpClientAdvancedSettings3_get_maxEventCount(This,pmaxEventCount)    \
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings3_put_keepAliveInterval(This,keepAliveInterval)    \
    ( (This)->lpVtbl -> put_keepAliveInterval(This,keepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings3_get_keepAliveInterval(This,pkeepAliveInterval)    \
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings3_put_shutdownTimeout(This,shutdownTimeout)    \
    ( (This)->lpVtbl -> put_shutdownTimeout(This,shutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings3_get_shutdownTimeout(This,pshutdownTimeout)    \
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings3_put_overallConnectionTimeout(This,overallConnectionTimeout)    \
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,overallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings3_get_overallConnectionTimeout(This,poverallConnectionTimeout)    \
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings3_put_singleConnectionTimeout(This,singleConnectionTimeout)    \
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,singleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings3_get_singleConnectionTimeout(This,psingleConnectionTimeout)    \
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings3_put_KeyboardType(This,keyboardType)    \
    ( (This)->lpVtbl -> put_KeyboardType(This,keyboardType) ) 

#define IMsRdpClientAdvancedSettings3_get_KeyboardType(This,pkeyboardType)    \
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings3_put_KeyboardSubType(This,keyboardSubType)    \
    ( (This)->lpVtbl -> put_KeyboardSubType(This,keyboardSubType) ) 

#define IMsRdpClientAdvancedSettings3_get_KeyboardSubType(This,pkeyboardSubType)    \
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings3_put_KeyboardFunctionKey(This,keyboardFunctionKey)    \
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,keyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings3_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)    \
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings3_put_WinceFixedPalette(This,winceFixedPalette)    \
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,winceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings3_get_WinceFixedPalette(This,pwinceFixedPalette)    \
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings3_put_ConnectToServerConsole(This,connectToServerConsole)    \
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,connectToServerConsole) ) 

#define IMsRdpClientAdvancedSettings3_get_ConnectToServerConsole(This,pConnectToConsole)    \
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapPersistence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPersistence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapPersistence(This,pbitmapPersistence)    \
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings3_put_MinutesToIdleTimeout(This,minutesToIdleTimeout)    \
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,minutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings3_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)    \
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings3_put_RdpdrLocalPrintingDocName(This,localPrintingDocName)    \
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,localPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings3_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)    \
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings3_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings3_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings3_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings3_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings3_put_ClearTextPassword(This,clearTextPassword)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,clearTextPassword) ) 

#define IMsRdpClientAdvancedSettings3_put_DisplayConnectionBar(This,fDisplayConnectionBar)    \
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,fDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings3_get_DisplayConnectionBar(This,pDisplayConnectionBar)    \
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings3_put_PinConnectionBar(This,fPinConnectionBar)    \
    ( (This)->lpVtbl -> put_PinConnectionBar(This,fPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings3_get_PinConnectionBar(This,pPinConnectionBar)    \
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings3_put_GrabFocusOnConnect(This,fGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,fGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings3_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings3_put_LoadBalanceInfo(This,newLBInfo)    \
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,newLBInfo) ) 

#define IMsRdpClientAdvancedSettings3_get_LoadBalanceInfo(This,pLBInfo)    \
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings3_put_RedirectDrives(This,redirectDrives)    \
    ( (This)->lpVtbl -> put_RedirectDrives(This,redirectDrives) ) 

#define IMsRdpClientAdvancedSettings3_get_RedirectDrives(This,pRedirectDrives)    \
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings3_put_RedirectPrinters(This,redirectPrinters)    \
    ( (This)->lpVtbl -> put_RedirectPrinters(This,redirectPrinters) ) 

#define IMsRdpClientAdvancedSettings3_get_RedirectPrinters(This,pRedirectPrinters)    \
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings3_put_RedirectPorts(This,redirectPorts)    \
    ( (This)->lpVtbl -> put_RedirectPorts(This,redirectPorts) ) 

#define IMsRdpClientAdvancedSettings3_get_RedirectPorts(This,pRedirectPorts)    \
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings3_put_RedirectSmartCards(This,redirectSmartCards)    \
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,redirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings3_get_RedirectSmartCards(This,pRedirectSmartCards)    \
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings3_put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings3_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings3_put_PerformanceFlags(This,DisableList)    \
    ( (This)->lpVtbl -> put_PerformanceFlags(This,DisableList) ) 

#define IMsRdpClientAdvancedSettings3_get_PerformanceFlags(This,pDisableList)    \
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings3_put_ConnectWithEndpoint(This,ConnectEndpoint)    \
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,ConnectEndpoint) ) 

#define IMsRdpClientAdvancedSettings3_put_NotifyTSPublicKey(This,fNotify)    \
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,fNotify) ) 

#define IMsRdpClientAdvancedSettings3_get_NotifyTSPublicKey(This,pfNotify)    \
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings3_get_CanAutoReconnect(This,pfCanAutoReconnect)    \
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings3_put_EnableAutoReconnect(This,fEnableAutoReconnect)    \
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,fEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings3_get_EnableAutoReconnect(This,pfEnableAutoReconnect)    \
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings3_put_MaxReconnectAttempts(This,MaxReconnectAttempts)    \
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,MaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings3_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)    \
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings3_put_ConnectionBarShowMinimizeButton(This,fShowMinimize)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,fShowMinimize) ) 

#define IMsRdpClientAdvancedSettings3_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings3_put_ConnectionBarShowRestoreButton(This,fShowRestore)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,fShowRestore) ) 

#define IMsRdpClientAdvancedSettings3_get_ConnectionBarShowRestoreButton(This,pfShowRestore)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings3_put_ConnectionBarShowMinimizeButton_Proxy( 
    IMsRdpClientAdvancedSettings3 * This,
    /* [in] */ VARIANT_BOOL fShowMinimize);


void __RPC_STUB IMsRdpClientAdvancedSettings3_put_ConnectionBarShowMinimizeButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings3_get_ConnectionBarShowMinimizeButton_Proxy( 
    IMsRdpClientAdvancedSettings3 * This,
    /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);


void __RPC_STUB IMsRdpClientAdvancedSettings3_get_ConnectionBarShowMinimizeButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings3_put_ConnectionBarShowRestoreButton_Proxy( 
    IMsRdpClientAdvancedSettings3 * This,
    /* [in] */ VARIANT_BOOL fShowRestore);


void __RPC_STUB IMsRdpClientAdvancedSettings3_put_ConnectionBarShowRestoreButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings3_get_ConnectionBarShowRestoreButton_Proxy( 
    IMsRdpClientAdvancedSettings3 * This,
    /* [retval][out] */ VARIANT_BOOL *pfShowRestore);


void __RPC_STUB IMsRdpClientAdvancedSettings3_get_ConnectionBarShowRestoreButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IMsRdpClientAdvancedSettings3_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings4_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings4_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings4 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FBA7F64E-7345-4405-AE50-FA4A763DC0DE")
    IMsRdpClientAdvancedSettings4 : public IMsRdpClientAdvancedSettings3
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AuthenticationLevel( 
            /* [in] */ UINT uiAuthLevel) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthenticationLevel( 
            /* [retval][out] */ UINT *puiAuthLevel) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientAdvancedSettings4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG compress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pcompress);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pbitmapPeristence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG allowBackgroundInput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pallowBackgroundInput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR KeyBoardLayoutStr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR PluginDlls);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR IconFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG IconIndex);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BOOL ContainerHandledFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BOOL *pContainerHandledFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BOOL DisableRdpdr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BOOL *pDisableRdpdr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG smoothScroll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *psmoothScroll);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG acceleratorPassthrough);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pacceleratorPassthrough);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG shadowBitmap);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pshadowBitmap);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG transportType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *ptransportType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG sasSequence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *psasSequence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG encryptionEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pencryptionEnabled);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG dedicatedTerminal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pdedicatedTerminal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG rdpPort);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *prdpPort);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG enableMouse);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *penableMouse);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG disableCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pdisableCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG enableWindowsKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *penableWindowsKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG doubleClickDetect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pdoubleClickDetect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG maximizeShell);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pmaximizeShell);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG hotKeyFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *photKeyFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG hotKeyCtrlEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *photKeyCtrlEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG hotKeyAltEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *photKeyAltEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG hotKeyAltTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *photKeyAltTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG hotKeyAltShiftTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *photKeyAltShiftTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG hotKeyAltSpace);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *photKeyAltSpace);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG hotKeyCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *photKeyCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG orderDrawThreshold);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *porderDrawThreshold);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG bitmapCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pbitmapCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG bitmapVirtualCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pbitmapVirtualCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG bScale);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pbScale);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG numBitmapCaches);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pnumBitmapCaches);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG cachePersistenceActive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pcachePersistenceActive);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR PersistCacheDirectory);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG brushSupportLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pbrushSupportLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG minInputSendInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pminInputSendInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG inputEventsAtOnce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pinputEventsAtOnce);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG maxEventCount);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pmaxEventCount);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG keepAliveInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pkeepAliveInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG shutdownTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pshutdownTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG overallConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *poverallConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG singleConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *psingleConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG keyboardType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pkeyboardType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG keyboardSubType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pkeyboardSubType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG keyboardFunctionKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pkeyboardFunctionKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG winceFixedPalette);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pwinceFixedPalette);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL connectToServerConsole);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pbitmapPersistence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG minutesToIdleTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pminutesToIdleTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR localPrintingDocName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR clearTextPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL fDisplayConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL fPinConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL fGrabFocusOnConnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ BSTR newLBInfo);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL redirectDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL redirectPrinters);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL redirectPorts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL redirectSmartCards);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG bitmapVirtualCache16BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG bitmapVirtualCache24BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG DisableList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pDisableList);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT *ConnectEndpoint);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL fNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL fEnableAutoReconnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ LONG MaxReconnectAttempts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ LONG *pMaxReconnectAttempts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL fShowMinimize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ VARIANT_BOOL fShowRestore);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [in] */ UINT uiAuthLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings4 * This,
            /* [retval][out] */ UINT *puiAuthLevel);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings4Vtbl;

    interface IMsRdpClientAdvancedSettings4
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings4_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings4_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings4_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings4_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings4_put_Compress(This,compress)    \
    ( (This)->lpVtbl -> put_Compress(This,compress) ) 

#define IMsRdpClientAdvancedSettings4_get_Compress(This,pcompress)    \
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapPeristence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPeristence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapPeristence(This,pbitmapPeristence)    \
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings4_put_allowBackgroundInput(This,allowBackgroundInput)    \
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,allowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings4_get_allowBackgroundInput(This,pallowBackgroundInput)    \
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings4_put_KeyBoardLayoutStr(This,KeyBoardLayoutStr)    \
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,KeyBoardLayoutStr) ) 

#define IMsRdpClientAdvancedSettings4_put_PluginDlls(This,PluginDlls)    \
    ( (This)->lpVtbl -> put_PluginDlls(This,PluginDlls) ) 

#define IMsRdpClientAdvancedSettings4_put_IconFile(This,IconFile)    \
    ( (This)->lpVtbl -> put_IconFile(This,IconFile) ) 

#define IMsRdpClientAdvancedSettings4_put_IconIndex(This,IconIndex)    \
    ( (This)->lpVtbl -> put_IconIndex(This,IconIndex) ) 

#define IMsRdpClientAdvancedSettings4_put_ContainerHandledFullScreen(This,ContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,ContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings4_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings4_put_DisableRdpdr(This,DisableRdpdr)    \
    ( (This)->lpVtbl -> put_DisableRdpdr(This,DisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings4_get_DisableRdpdr(This,pDisableRdpdr)    \
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings4_put_SmoothScroll(This,smoothScroll)    \
    ( (This)->lpVtbl -> put_SmoothScroll(This,smoothScroll) ) 

#define IMsRdpClientAdvancedSettings4_get_SmoothScroll(This,psmoothScroll)    \
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings4_put_AcceleratorPassthrough(This,acceleratorPassthrough)    \
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,acceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings4_get_AcceleratorPassthrough(This,pacceleratorPassthrough)    \
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings4_put_ShadowBitmap(This,shadowBitmap)    \
    ( (This)->lpVtbl -> put_ShadowBitmap(This,shadowBitmap) ) 

#define IMsRdpClientAdvancedSettings4_get_ShadowBitmap(This,pshadowBitmap)    \
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings4_put_TransportType(This,transportType)    \
    ( (This)->lpVtbl -> put_TransportType(This,transportType) ) 

#define IMsRdpClientAdvancedSettings4_get_TransportType(This,ptransportType)    \
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings4_put_SasSequence(This,sasSequence)    \
    ( (This)->lpVtbl -> put_SasSequence(This,sasSequence) ) 

#define IMsRdpClientAdvancedSettings4_get_SasSequence(This,psasSequence)    \
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings4_put_EncryptionEnabled(This,encryptionEnabled)    \
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,encryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings4_get_EncryptionEnabled(This,pencryptionEnabled)    \
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings4_put_DedicatedTerminal(This,dedicatedTerminal)    \
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,dedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings4_get_DedicatedTerminal(This,pdedicatedTerminal)    \
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings4_put_RDPPort(This,rdpPort)    \
    ( (This)->lpVtbl -> put_RDPPort(This,rdpPort) ) 

#define IMsRdpClientAdvancedSettings4_get_RDPPort(This,prdpPort)    \
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings4_put_EnableMouse(This,enableMouse)    \
    ( (This)->lpVtbl -> put_EnableMouse(This,enableMouse) ) 

#define IMsRdpClientAdvancedSettings4_get_EnableMouse(This,penableMouse)    \
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings4_put_DisableCtrlAltDel(This,disableCtrlAltDel)    \
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,disableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings4_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)    \
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings4_put_EnableWindowsKey(This,enableWindowsKey)    \
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,enableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings4_get_EnableWindowsKey(This,penableWindowsKey)    \
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings4_put_DoubleClickDetect(This,doubleClickDetect)    \
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,doubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings4_get_DoubleClickDetect(This,pdoubleClickDetect)    \
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings4_put_MaximizeShell(This,maximizeShell)    \
    ( (This)->lpVtbl -> put_MaximizeShell(This,maximizeShell) ) 

#define IMsRdpClientAdvancedSettings4_get_MaximizeShell(This,pmaximizeShell)    \
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyFullScreen(This,hotKeyFullScreen)    \
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,hotKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyFullScreen(This,photKeyFullScreen)    \
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyCtrlEsc(This,hotKeyCtrlEsc)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,hotKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyAltEsc(This,hotKeyAltEsc)    \
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,hotKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyAltEsc(This,photKeyAltEsc)    \
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyAltTab(This,hotKeyAltTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,hotKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyAltTab(This,photKeyAltTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyAltShiftTab(This,hotKeyAltShiftTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,hotKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyAltSpace(This,hotKeyAltSpace)    \
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,hotKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyAltSpace(This,photKeyAltSpace)    \
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings4_put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings4_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings4_put_orderDrawThreshold(This,orderDrawThreshold)    \
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,orderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings4_get_orderDrawThreshold(This,porderDrawThreshold)    \
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapCacheSize(This,bitmapCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,bitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapCacheSize(This,pbitmapCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings4_put_ScaleBitmapCachesByBPP(This,bScale)    \
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,bScale) ) 

#define IMsRdpClientAdvancedSettings4_get_ScaleBitmapCachesByBPP(This,pbScale)    \
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings4_put_NumBitmapCaches(This,numBitmapCaches)    \
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,numBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings4_get_NumBitmapCaches(This,pnumBitmapCaches)    \
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings4_put_CachePersistenceActive(This,cachePersistenceActive)    \
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,cachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings4_get_CachePersistenceActive(This,pcachePersistenceActive)    \
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings4_put_PersistCacheDirectory(This,PersistCacheDirectory)    \
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,PersistCacheDirectory) ) 

#define IMsRdpClientAdvancedSettings4_put_brushSupportLevel(This,brushSupportLevel)    \
    ( (This)->lpVtbl -> put_brushSupportLevel(This,brushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings4_get_brushSupportLevel(This,pbrushSupportLevel)    \
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings4_put_minInputSendInterval(This,minInputSendInterval)    \
    ( (This)->lpVtbl -> put_minInputSendInterval(This,minInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings4_get_minInputSendInterval(This,pminInputSendInterval)    \
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings4_put_InputEventsAtOnce(This,inputEventsAtOnce)    \
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,inputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings4_get_InputEventsAtOnce(This,pinputEventsAtOnce)    \
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings4_put_maxEventCount(This,maxEventCount)    \
    ( (This)->lpVtbl -> put_maxEventCount(This,maxEventCount) ) 

#define IMsRdpClientAdvancedSettings4_get_maxEventCount(This,pmaxEventCount)    \
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings4_put_keepAliveInterval(This,keepAliveInterval)    \
    ( (This)->lpVtbl -> put_keepAliveInterval(This,keepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings4_get_keepAliveInterval(This,pkeepAliveInterval)    \
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings4_put_shutdownTimeout(This,shutdownTimeout)    \
    ( (This)->lpVtbl -> put_shutdownTimeout(This,shutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings4_get_shutdownTimeout(This,pshutdownTimeout)    \
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings4_put_overallConnectionTimeout(This,overallConnectionTimeout)    \
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,overallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings4_get_overallConnectionTimeout(This,poverallConnectionTimeout)    \
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings4_put_singleConnectionTimeout(This,singleConnectionTimeout)    \
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,singleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings4_get_singleConnectionTimeout(This,psingleConnectionTimeout)    \
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings4_put_KeyboardType(This,keyboardType)    \
    ( (This)->lpVtbl -> put_KeyboardType(This,keyboardType) ) 

#define IMsRdpClientAdvancedSettings4_get_KeyboardType(This,pkeyboardType)    \
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings4_put_KeyboardSubType(This,keyboardSubType)    \
    ( (This)->lpVtbl -> put_KeyboardSubType(This,keyboardSubType) ) 

#define IMsRdpClientAdvancedSettings4_get_KeyboardSubType(This,pkeyboardSubType)    \
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings4_put_KeyboardFunctionKey(This,keyboardFunctionKey)    \
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,keyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings4_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)    \
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings4_put_WinceFixedPalette(This,winceFixedPalette)    \
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,winceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings4_get_WinceFixedPalette(This,pwinceFixedPalette)    \
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings4_put_ConnectToServerConsole(This,connectToServerConsole)    \
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,connectToServerConsole) ) 

#define IMsRdpClientAdvancedSettings4_get_ConnectToServerConsole(This,pConnectToConsole)    \
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapPersistence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPersistence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapPersistence(This,pbitmapPersistence)    \
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings4_put_MinutesToIdleTimeout(This,minutesToIdleTimeout)    \
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,minutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings4_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)    \
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings4_put_RdpdrLocalPrintingDocName(This,localPrintingDocName)    \
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,localPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings4_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)    \
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings4_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings4_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings4_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings4_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings4_put_ClearTextPassword(This,clearTextPassword)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,clearTextPassword) ) 

#define IMsRdpClientAdvancedSettings4_put_DisplayConnectionBar(This,fDisplayConnectionBar)    \
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,fDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings4_get_DisplayConnectionBar(This,pDisplayConnectionBar)    \
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings4_put_PinConnectionBar(This,fPinConnectionBar)    \
    ( (This)->lpVtbl -> put_PinConnectionBar(This,fPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings4_get_PinConnectionBar(This,pPinConnectionBar)    \
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings4_put_GrabFocusOnConnect(This,fGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,fGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings4_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings4_put_LoadBalanceInfo(This,newLBInfo)    \
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,newLBInfo) ) 

#define IMsRdpClientAdvancedSettings4_get_LoadBalanceInfo(This,pLBInfo)    \
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings4_put_RedirectDrives(This,redirectDrives)    \
    ( (This)->lpVtbl -> put_RedirectDrives(This,redirectDrives) ) 

#define IMsRdpClientAdvancedSettings4_get_RedirectDrives(This,pRedirectDrives)    \
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings4_put_RedirectPrinters(This,redirectPrinters)    \
    ( (This)->lpVtbl -> put_RedirectPrinters(This,redirectPrinters) ) 

#define IMsRdpClientAdvancedSettings4_get_RedirectPrinters(This,pRedirectPrinters)    \
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings4_put_RedirectPorts(This,redirectPorts)    \
    ( (This)->lpVtbl -> put_RedirectPorts(This,redirectPorts) ) 

#define IMsRdpClientAdvancedSettings4_get_RedirectPorts(This,pRedirectPorts)    \
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings4_put_RedirectSmartCards(This,redirectSmartCards)    \
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,redirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings4_get_RedirectSmartCards(This,pRedirectSmartCards)    \
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings4_put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings4_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings4_put_PerformanceFlags(This,DisableList)    \
    ( (This)->lpVtbl -> put_PerformanceFlags(This,DisableList) ) 

#define IMsRdpClientAdvancedSettings4_get_PerformanceFlags(This,pDisableList)    \
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings4_put_ConnectWithEndpoint(This,ConnectEndpoint)    \
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,ConnectEndpoint) ) 

#define IMsRdpClientAdvancedSettings4_put_NotifyTSPublicKey(This,fNotify)    \
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,fNotify) ) 

#define IMsRdpClientAdvancedSettings4_get_NotifyTSPublicKey(This,pfNotify)    \
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings4_get_CanAutoReconnect(This,pfCanAutoReconnect)    \
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings4_put_EnableAutoReconnect(This,fEnableAutoReconnect)    \
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,fEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings4_get_EnableAutoReconnect(This,pfEnableAutoReconnect)    \
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings4_put_MaxReconnectAttempts(This,MaxReconnectAttempts)    \
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,MaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings4_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)    \
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings4_put_ConnectionBarShowMinimizeButton(This,fShowMinimize)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,fShowMinimize) ) 

#define IMsRdpClientAdvancedSettings4_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings4_put_ConnectionBarShowRestoreButton(This,fShowRestore)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,fShowRestore) ) 

#define IMsRdpClientAdvancedSettings4_get_ConnectionBarShowRestoreButton(This,pfShowRestore)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings4_put_AuthenticationLevel(This,uiAuthLevel)    \
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,uiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings4_get_AuthenticationLevel(This,puiAuthLevel)    \
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings4_put_AuthenticationLevel_Proxy( 
    IMsRdpClientAdvancedSettings4 * This,
    /* [in] */ UINT uiAuthLevel);


void __RPC_STUB IMsRdpClientAdvancedSettings4_put_AuthenticationLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings4_get_AuthenticationLevel_Proxy( 
    IMsRdpClientAdvancedSettings4 * This,
    /* [retval][out] */ UINT *puiAuthLevel);


void __RPC_STUB IMsRdpClientAdvancedSettings4_get_AuthenticationLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IMsRdpClientAdvancedSettings4_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings5_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings5_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings5 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FBA7F64E-6783-4405-DA45-FA4A763DABD0")
    IMsRdpClientAdvancedSettings5 : public IMsRdpClientAdvancedSettings4
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectClipboard( 
            /* [in] */ VARIANT_BOOL fRedirectClipboard) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectClipboard( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AudioRedirectionMode( 
            /* [in] */ UINT uiAudioRedirectionMode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AudioRedirectionMode( 
            /* [retval][out] */ UINT *puiAudioRedirectionMode) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionBarShowPinButton( 
            /* [in] */ VARIANT_BOOL fShowPin) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionBarShowPinButton( 
            /* [retval][out] */ VARIANT_BOOL *pfShowPin) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PublicMode( 
            /* [in] */ VARIANT_BOOL fPublicMode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PublicMode( 
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectDevices( 
            /* [in] */ VARIANT_BOOL fRedirectPnPDevices) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectDevices( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectPOSDevices( 
            /* [in] */ VARIANT_BOOL fRedirectPOSDevices) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectPOSDevices( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_BitmapVirtualCache32BppSize( 
            /* [in] */ LONG bitmapVirtualCache32BppSize) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_BitmapVirtualCache32BppSize( 
            /* [retval][out] */ LONG *pBitmapVirtualCache32BppSize) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientAdvancedSettings5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG compress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pcompress);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pbitmapPeristence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG allowBackgroundInput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pallowBackgroundInput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR KeyBoardLayoutStr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR PluginDlls);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR IconFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG IconIndex);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BOOL ContainerHandledFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BOOL *pContainerHandledFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BOOL DisableRdpdr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BOOL *pDisableRdpdr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG smoothScroll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *psmoothScroll);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG acceleratorPassthrough);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pacceleratorPassthrough);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG shadowBitmap);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pshadowBitmap);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG transportType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *ptransportType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG sasSequence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *psasSequence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG encryptionEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pencryptionEnabled);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG dedicatedTerminal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pdedicatedTerminal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG rdpPort);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *prdpPort);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG enableMouse);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *penableMouse);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG disableCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pdisableCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG enableWindowsKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *penableWindowsKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG doubleClickDetect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pdoubleClickDetect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG maximizeShell);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pmaximizeShell);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG hotKeyFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *photKeyFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG hotKeyCtrlEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *photKeyCtrlEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG hotKeyAltEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *photKeyAltEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG hotKeyAltTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *photKeyAltTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG hotKeyAltShiftTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *photKeyAltShiftTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG hotKeyAltSpace);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *photKeyAltSpace);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG hotKeyCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *photKeyCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG orderDrawThreshold);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *porderDrawThreshold);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG bitmapCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pbitmapCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG bitmapVirtualCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pbitmapVirtualCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG bScale);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pbScale);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG numBitmapCaches);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pnumBitmapCaches);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG cachePersistenceActive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pcachePersistenceActive);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR PersistCacheDirectory);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG brushSupportLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pbrushSupportLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG minInputSendInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pminInputSendInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG inputEventsAtOnce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pinputEventsAtOnce);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG maxEventCount);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pmaxEventCount);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG keepAliveInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pkeepAliveInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG shutdownTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pshutdownTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG overallConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *poverallConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG singleConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *psingleConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG keyboardType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pkeyboardType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG keyboardSubType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pkeyboardSubType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG keyboardFunctionKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pkeyboardFunctionKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG winceFixedPalette);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pwinceFixedPalette);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL connectToServerConsole);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pbitmapPersistence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG minutesToIdleTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pminutesToIdleTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR localPrintingDocName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR clearTextPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fDisplayConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fPinConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fGrabFocusOnConnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ BSTR newLBInfo);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL redirectDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL redirectPrinters);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL redirectPorts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL redirectSmartCards);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG bitmapVirtualCache16BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG bitmapVirtualCache24BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG DisableList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pDisableList);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT *ConnectEndpoint);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fEnableAutoReconnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG MaxReconnectAttempts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pMaxReconnectAttempts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fShowMinimize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fShowRestore);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ UINT uiAuthLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ UINT *puiAuthLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fRedirectClipboard);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ UINT uiAudioRedirectionMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ UINT *puiAudioRedirectionMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fShowPin);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowPin);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PublicMode )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fPublicMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublicMode )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDevices )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fRedirectPnPDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDevices )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ VARIANT_BOOL fRedirectPOSDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [in] */ LONG bitmapVirtualCache32BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings5 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache32BppSize);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings5Vtbl;

    interface IMsRdpClientAdvancedSettings5
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings5_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings5_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings5_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings5_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings5_put_Compress(This,compress)    \
    ( (This)->lpVtbl -> put_Compress(This,compress) ) 

#define IMsRdpClientAdvancedSettings5_get_Compress(This,pcompress)    \
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapPeristence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPeristence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapPeristence(This,pbitmapPeristence)    \
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings5_put_allowBackgroundInput(This,allowBackgroundInput)    \
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,allowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings5_get_allowBackgroundInput(This,pallowBackgroundInput)    \
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings5_put_KeyBoardLayoutStr(This,KeyBoardLayoutStr)    \
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,KeyBoardLayoutStr) ) 

#define IMsRdpClientAdvancedSettings5_put_PluginDlls(This,PluginDlls)    \
    ( (This)->lpVtbl -> put_PluginDlls(This,PluginDlls) ) 

#define IMsRdpClientAdvancedSettings5_put_IconFile(This,IconFile)    \
    ( (This)->lpVtbl -> put_IconFile(This,IconFile) ) 

#define IMsRdpClientAdvancedSettings5_put_IconIndex(This,IconIndex)    \
    ( (This)->lpVtbl -> put_IconIndex(This,IconIndex) ) 

#define IMsRdpClientAdvancedSettings5_put_ContainerHandledFullScreen(This,ContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,ContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings5_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings5_put_DisableRdpdr(This,DisableRdpdr)    \
    ( (This)->lpVtbl -> put_DisableRdpdr(This,DisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings5_get_DisableRdpdr(This,pDisableRdpdr)    \
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings5_put_SmoothScroll(This,smoothScroll)    \
    ( (This)->lpVtbl -> put_SmoothScroll(This,smoothScroll) ) 

#define IMsRdpClientAdvancedSettings5_get_SmoothScroll(This,psmoothScroll)    \
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings5_put_AcceleratorPassthrough(This,acceleratorPassthrough)    \
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,acceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings5_get_AcceleratorPassthrough(This,pacceleratorPassthrough)    \
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings5_put_ShadowBitmap(This,shadowBitmap)    \
    ( (This)->lpVtbl -> put_ShadowBitmap(This,shadowBitmap) ) 

#define IMsRdpClientAdvancedSettings5_get_ShadowBitmap(This,pshadowBitmap)    \
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings5_put_TransportType(This,transportType)    \
    ( (This)->lpVtbl -> put_TransportType(This,transportType) ) 

#define IMsRdpClientAdvancedSettings5_get_TransportType(This,ptransportType)    \
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings5_put_SasSequence(This,sasSequence)    \
    ( (This)->lpVtbl -> put_SasSequence(This,sasSequence) ) 

#define IMsRdpClientAdvancedSettings5_get_SasSequence(This,psasSequence)    \
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings5_put_EncryptionEnabled(This,encryptionEnabled)    \
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,encryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings5_get_EncryptionEnabled(This,pencryptionEnabled)    \
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings5_put_DedicatedTerminal(This,dedicatedTerminal)    \
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,dedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings5_get_DedicatedTerminal(This,pdedicatedTerminal)    \
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings5_put_RDPPort(This,rdpPort)    \
    ( (This)->lpVtbl -> put_RDPPort(This,rdpPort) ) 

#define IMsRdpClientAdvancedSettings5_get_RDPPort(This,prdpPort)    \
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings5_put_EnableMouse(This,enableMouse)    \
    ( (This)->lpVtbl -> put_EnableMouse(This,enableMouse) ) 

#define IMsRdpClientAdvancedSettings5_get_EnableMouse(This,penableMouse)    \
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings5_put_DisableCtrlAltDel(This,disableCtrlAltDel)    \
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,disableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings5_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)    \
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings5_put_EnableWindowsKey(This,enableWindowsKey)    \
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,enableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings5_get_EnableWindowsKey(This,penableWindowsKey)    \
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings5_put_DoubleClickDetect(This,doubleClickDetect)    \
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,doubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings5_get_DoubleClickDetect(This,pdoubleClickDetect)    \
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings5_put_MaximizeShell(This,maximizeShell)    \
    ( (This)->lpVtbl -> put_MaximizeShell(This,maximizeShell) ) 

#define IMsRdpClientAdvancedSettings5_get_MaximizeShell(This,pmaximizeShell)    \
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyFullScreen(This,hotKeyFullScreen)    \
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,hotKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyFullScreen(This,photKeyFullScreen)    \
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyCtrlEsc(This,hotKeyCtrlEsc)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,hotKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyAltEsc(This,hotKeyAltEsc)    \
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,hotKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyAltEsc(This,photKeyAltEsc)    \
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyAltTab(This,hotKeyAltTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,hotKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyAltTab(This,photKeyAltTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyAltShiftTab(This,hotKeyAltShiftTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,hotKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyAltSpace(This,hotKeyAltSpace)    \
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,hotKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyAltSpace(This,photKeyAltSpace)    \
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings5_put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings5_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings5_put_orderDrawThreshold(This,orderDrawThreshold)    \
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,orderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings5_get_orderDrawThreshold(This,porderDrawThreshold)    \
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapCacheSize(This,bitmapCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,bitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapCacheSize(This,pbitmapCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings5_put_ScaleBitmapCachesByBPP(This,bScale)    \
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,bScale) ) 

#define IMsRdpClientAdvancedSettings5_get_ScaleBitmapCachesByBPP(This,pbScale)    \
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings5_put_NumBitmapCaches(This,numBitmapCaches)    \
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,numBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings5_get_NumBitmapCaches(This,pnumBitmapCaches)    \
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings5_put_CachePersistenceActive(This,cachePersistenceActive)    \
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,cachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings5_get_CachePersistenceActive(This,pcachePersistenceActive)    \
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings5_put_PersistCacheDirectory(This,PersistCacheDirectory)    \
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,PersistCacheDirectory) ) 

#define IMsRdpClientAdvancedSettings5_put_brushSupportLevel(This,brushSupportLevel)    \
    ( (This)->lpVtbl -> put_brushSupportLevel(This,brushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings5_get_brushSupportLevel(This,pbrushSupportLevel)    \
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings5_put_minInputSendInterval(This,minInputSendInterval)    \
    ( (This)->lpVtbl -> put_minInputSendInterval(This,minInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings5_get_minInputSendInterval(This,pminInputSendInterval)    \
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings5_put_InputEventsAtOnce(This,inputEventsAtOnce)    \
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,inputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings5_get_InputEventsAtOnce(This,pinputEventsAtOnce)    \
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings5_put_maxEventCount(This,maxEventCount)    \
    ( (This)->lpVtbl -> put_maxEventCount(This,maxEventCount) ) 

#define IMsRdpClientAdvancedSettings5_get_maxEventCount(This,pmaxEventCount)    \
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings5_put_keepAliveInterval(This,keepAliveInterval)    \
    ( (This)->lpVtbl -> put_keepAliveInterval(This,keepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings5_get_keepAliveInterval(This,pkeepAliveInterval)    \
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings5_put_shutdownTimeout(This,shutdownTimeout)    \
    ( (This)->lpVtbl -> put_shutdownTimeout(This,shutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings5_get_shutdownTimeout(This,pshutdownTimeout)    \
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings5_put_overallConnectionTimeout(This,overallConnectionTimeout)    \
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,overallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings5_get_overallConnectionTimeout(This,poverallConnectionTimeout)    \
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings5_put_singleConnectionTimeout(This,singleConnectionTimeout)    \
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,singleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings5_get_singleConnectionTimeout(This,psingleConnectionTimeout)    \
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings5_put_KeyboardType(This,keyboardType)    \
    ( (This)->lpVtbl -> put_KeyboardType(This,keyboardType) ) 

#define IMsRdpClientAdvancedSettings5_get_KeyboardType(This,pkeyboardType)    \
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings5_put_KeyboardSubType(This,keyboardSubType)    \
    ( (This)->lpVtbl -> put_KeyboardSubType(This,keyboardSubType) ) 

#define IMsRdpClientAdvancedSettings5_get_KeyboardSubType(This,pkeyboardSubType)    \
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings5_put_KeyboardFunctionKey(This,keyboardFunctionKey)    \
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,keyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings5_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)    \
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings5_put_WinceFixedPalette(This,winceFixedPalette)    \
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,winceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings5_get_WinceFixedPalette(This,pwinceFixedPalette)    \
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings5_put_ConnectToServerConsole(This,connectToServerConsole)    \
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,connectToServerConsole) ) 

#define IMsRdpClientAdvancedSettings5_get_ConnectToServerConsole(This,pConnectToConsole)    \
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapPersistence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPersistence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapPersistence(This,pbitmapPersistence)    \
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings5_put_MinutesToIdleTimeout(This,minutesToIdleTimeout)    \
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,minutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings5_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)    \
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings5_put_RdpdrLocalPrintingDocName(This,localPrintingDocName)    \
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,localPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings5_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)    \
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings5_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings5_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings5_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings5_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings5_put_ClearTextPassword(This,clearTextPassword)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,clearTextPassword) ) 

#define IMsRdpClientAdvancedSettings5_put_DisplayConnectionBar(This,fDisplayConnectionBar)    \
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,fDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings5_get_DisplayConnectionBar(This,pDisplayConnectionBar)    \
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings5_put_PinConnectionBar(This,fPinConnectionBar)    \
    ( (This)->lpVtbl -> put_PinConnectionBar(This,fPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings5_get_PinConnectionBar(This,pPinConnectionBar)    \
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings5_put_GrabFocusOnConnect(This,fGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,fGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings5_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings5_put_LoadBalanceInfo(This,newLBInfo)    \
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,newLBInfo) ) 

#define IMsRdpClientAdvancedSettings5_get_LoadBalanceInfo(This,pLBInfo)    \
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectDrives(This,redirectDrives)    \
    ( (This)->lpVtbl -> put_RedirectDrives(This,redirectDrives) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectDrives(This,pRedirectDrives)    \
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectPrinters(This,redirectPrinters)    \
    ( (This)->lpVtbl -> put_RedirectPrinters(This,redirectPrinters) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectPrinters(This,pRedirectPrinters)    \
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectPorts(This,redirectPorts)    \
    ( (This)->lpVtbl -> put_RedirectPorts(This,redirectPorts) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectPorts(This,pRedirectPorts)    \
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectSmartCards(This,redirectSmartCards)    \
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,redirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectSmartCards(This,pRedirectSmartCards)    \
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings5_put_PerformanceFlags(This,DisableList)    \
    ( (This)->lpVtbl -> put_PerformanceFlags(This,DisableList) ) 

#define IMsRdpClientAdvancedSettings5_get_PerformanceFlags(This,pDisableList)    \
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings5_put_ConnectWithEndpoint(This,ConnectEndpoint)    \
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,ConnectEndpoint) ) 

#define IMsRdpClientAdvancedSettings5_put_NotifyTSPublicKey(This,fNotify)    \
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,fNotify) ) 

#define IMsRdpClientAdvancedSettings5_get_NotifyTSPublicKey(This,pfNotify)    \
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings5_get_CanAutoReconnect(This,pfCanAutoReconnect)    \
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings5_put_EnableAutoReconnect(This,fEnableAutoReconnect)    \
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,fEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings5_get_EnableAutoReconnect(This,pfEnableAutoReconnect)    \
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings5_put_MaxReconnectAttempts(This,MaxReconnectAttempts)    \
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,MaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings5_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)    \
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings5_put_ConnectionBarShowMinimizeButton(This,fShowMinimize)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,fShowMinimize) ) 

#define IMsRdpClientAdvancedSettings5_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings5_put_ConnectionBarShowRestoreButton(This,fShowRestore)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,fShowRestore) ) 

#define IMsRdpClientAdvancedSettings5_get_ConnectionBarShowRestoreButton(This,pfShowRestore)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings5_put_AuthenticationLevel(This,uiAuthLevel)    \
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,uiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings5_get_AuthenticationLevel(This,puiAuthLevel)    \
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 


#define IMsRdpClientAdvancedSettings5_put_RedirectClipboard(This,fRedirectClipboard)    \
    ( (This)->lpVtbl -> put_RedirectClipboard(This,fRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectClipboard(This,pfRedirectClipboard)    \
    ( (This)->lpVtbl -> get_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings5_put_AudioRedirectionMode(This,uiAudioRedirectionMode)    \
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,uiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings5_get_AudioRedirectionMode(This,puiAudioRedirectionMode)    \
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings5_put_ConnectionBarShowPinButton(This,fShowPin)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowPinButton(This,fShowPin) ) 

#define IMsRdpClientAdvancedSettings5_get_ConnectionBarShowPinButton(This,pfShowPin)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings5_put_PublicMode(This,fPublicMode)    \
    ( (This)->lpVtbl -> put_PublicMode(This,fPublicMode) ) 

#define IMsRdpClientAdvancedSettings5_get_PublicMode(This,pfPublicMode)    \
    ( (This)->lpVtbl -> get_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectDevices(This,fRedirectPnPDevices)    \
    ( (This)->lpVtbl -> put_RedirectDevices(This,fRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectDevices(This,pfRedirectPnPDevices)    \
    ( (This)->lpVtbl -> get_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings5_put_RedirectPOSDevices(This,fRedirectPOSDevices)    \
    ( (This)->lpVtbl -> put_RedirectPOSDevices(This,fRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings5_get_RedirectPOSDevices(This,pfRedirectPOSDevices)    \
    ( (This)->lpVtbl -> get_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache32BppSize(This,bitmapVirtualCache32BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache32BppSize(This,bitmapVirtualCache32BppSize) ) 

#define IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_RedirectClipboard_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL fRedirectClipboard);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_RedirectClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_RedirectClipboard_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_RedirectClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_AudioRedirectionMode_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ UINT uiAudioRedirectionMode);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_AudioRedirectionMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_AudioRedirectionMode_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ UINT *puiAudioRedirectionMode);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_AudioRedirectionMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_ConnectionBarShowPinButton_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL fShowPin);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_ConnectionBarShowPinButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_ConnectionBarShowPinButton_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfShowPin);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_ConnectionBarShowPinButton_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_PublicMode_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL fPublicMode);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_PublicMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_PublicMode_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfPublicMode);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_PublicMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_RedirectDevices_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL fRedirectPnPDevices);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_RedirectDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_RedirectDevices_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_RedirectDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_RedirectPOSDevices_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ VARIANT_BOOL fRedirectPOSDevices);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_RedirectPOSDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_RedirectPOSDevices_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_RedirectPOSDevices_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache32BppSize_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [in] */ LONG bitmapVirtualCache32BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings5_put_BitmapVirtualCache32BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache32BppSize_Proxy( 
    IMsRdpClientAdvancedSettings5 * This,
    /* [retval][out] */ LONG *pBitmapVirtualCache32BppSize);


void __RPC_STUB IMsRdpClientAdvancedSettings5_get_BitmapVirtualCache32BppSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IMsRdpClientAdvancedSettings5_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings6_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings6_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings6 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("222c4b5d-45d9-4df0-a7c6-60cf9089d285")
    IMsRdpClientAdvancedSettings6 : public IMsRdpClientAdvancedSettings5
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RelativeMouseMode( 
            /* [in] */ VARIANT_BOOL fRelativeMouseMode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RelativeMouseMode( 
            /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthenticationServiceClass( 
            /* [retval][out] */ BSTR *pbstrAuthServiceClass) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AuthenticationServiceClass( 
            /* [in] */ BSTR bstrAuthServiceClass) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_PCB( 
            /* [retval][out] */ BSTR *bstrPCB) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_PCB( 
            /* [in] */ BSTR bstrPCB) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyFocusReleaseLeft( 
            /* [in] */ LONG hotKeyFocusReleaseLeft) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyFocusReleaseLeft( 
            /* [retval][out] */ LONG *hotKeyFocusReleaseLeft) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_HotKeyFocusReleaseRight( 
            /* [in] */ LONG hotKeyFocusReleaseRight) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HotKeyFocusReleaseRight( 
            /* [retval][out] */ LONG *hotKeyFocusReleaseRight) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableCredSspSupport( 
            /* [in] */ VARIANT_BOOL fEnableSupport) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableCredSspSupport( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthenticationType( 
            /* [retval][out] */ UINT *puiAuthType) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectToAdministerServer( 
            /* [in] */ VARIANT_BOOL connectToAdministerServer) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectToAdministerServer( 
            /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientAdvancedSettings6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG compress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pcompress);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pbitmapPeristence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG allowBackgroundInput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pallowBackgroundInput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR KeyBoardLayoutStr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR PluginDlls);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR IconFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG IconIndex);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BOOL ContainerHandledFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BOOL *pContainerHandledFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BOOL DisableRdpdr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BOOL *pDisableRdpdr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG smoothScroll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *psmoothScroll);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG acceleratorPassthrough);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pacceleratorPassthrough);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG shadowBitmap);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pshadowBitmap);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG transportType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *ptransportType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG sasSequence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *psasSequence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG encryptionEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pencryptionEnabled);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG dedicatedTerminal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pdedicatedTerminal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG rdpPort);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *prdpPort);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG enableMouse);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *penableMouse);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG disableCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pdisableCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG enableWindowsKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *penableWindowsKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG doubleClickDetect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pdoubleClickDetect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG maximizeShell);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pmaximizeShell);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *photKeyFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyCtrlEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *photKeyCtrlEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyAltEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *photKeyAltEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyAltTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *photKeyAltTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyAltShiftTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *photKeyAltShiftTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyAltSpace);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *photKeyAltSpace);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *photKeyCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG orderDrawThreshold);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *porderDrawThreshold);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG bitmapCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pbitmapCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG bitmapVirtualCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pbitmapVirtualCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG bScale);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pbScale);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG numBitmapCaches);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pnumBitmapCaches);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG cachePersistenceActive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pcachePersistenceActive);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR PersistCacheDirectory);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG brushSupportLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pbrushSupportLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG minInputSendInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pminInputSendInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG inputEventsAtOnce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pinputEventsAtOnce);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG maxEventCount);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pmaxEventCount);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG keepAliveInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pkeepAliveInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG shutdownTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pshutdownTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG overallConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *poverallConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG singleConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *psingleConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG keyboardType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pkeyboardType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG keyboardSubType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pkeyboardSubType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG keyboardFunctionKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pkeyboardFunctionKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG winceFixedPalette);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pwinceFixedPalette);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL connectToServerConsole);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pbitmapPersistence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG minutesToIdleTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pminutesToIdleTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR localPrintingDocName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR clearTextPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fDisplayConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fPinConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fGrabFocusOnConnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR newLBInfo);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL redirectDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL redirectPrinters);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL redirectPorts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL redirectSmartCards);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG bitmapVirtualCache16BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG bitmapVirtualCache24BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG DisableList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pDisableList);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT *ConnectEndpoint);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fEnableAutoReconnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG MaxReconnectAttempts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pMaxReconnectAttempts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fShowMinimize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fShowRestore);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ UINT uiAuthLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ UINT *puiAuthLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fRedirectClipboard);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ UINT uiAudioRedirectionMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ UINT *puiAudioRedirectionMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fShowPin);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowPin);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PublicMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fPublicMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublicMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDevices )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fRedirectPnPDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDevices )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fRedirectPOSDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG bitmapVirtualCache32BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache32BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fRelativeMouseMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *pbstrAuthServiceClass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR bstrAuthServiceClass);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PCB )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ BSTR *bstrPCB);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PCB )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ BSTR bstrPCB);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyFocusReleaseLeft);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *hotKeyFocusReleaseLeft);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ LONG hotKeyFocusReleaseRight);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ LONG *hotKeyFocusReleaseRight);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL fEnableSupport);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ UINT *puiAuthType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [in] */ VARIANT_BOOL connectToAdministerServer);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings6 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings6Vtbl;

    interface IMsRdpClientAdvancedSettings6
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings6_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings6_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings6_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings6_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings6_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings6_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings6_put_Compress(This,compress)    \
    ( (This)->lpVtbl -> put_Compress(This,compress) ) 

#define IMsRdpClientAdvancedSettings6_get_Compress(This,pcompress)    \
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapPeristence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPeristence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapPeristence(This,pbitmapPeristence)    \
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings6_put_allowBackgroundInput(This,allowBackgroundInput)    \
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,allowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings6_get_allowBackgroundInput(This,pallowBackgroundInput)    \
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings6_put_KeyBoardLayoutStr(This,KeyBoardLayoutStr)    \
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,KeyBoardLayoutStr) ) 

#define IMsRdpClientAdvancedSettings6_put_PluginDlls(This,PluginDlls)    \
    ( (This)->lpVtbl -> put_PluginDlls(This,PluginDlls) ) 

#define IMsRdpClientAdvancedSettings6_put_IconFile(This,IconFile)    \
    ( (This)->lpVtbl -> put_IconFile(This,IconFile) ) 

#define IMsRdpClientAdvancedSettings6_put_IconIndex(This,IconIndex)    \
    ( (This)->lpVtbl -> put_IconIndex(This,IconIndex) ) 

#define IMsRdpClientAdvancedSettings6_put_ContainerHandledFullScreen(This,ContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,ContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings6_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings6_put_DisableRdpdr(This,DisableRdpdr)    \
    ( (This)->lpVtbl -> put_DisableRdpdr(This,DisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings6_get_DisableRdpdr(This,pDisableRdpdr)    \
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings6_put_SmoothScroll(This,smoothScroll)    \
    ( (This)->lpVtbl -> put_SmoothScroll(This,smoothScroll) ) 

#define IMsRdpClientAdvancedSettings6_get_SmoothScroll(This,psmoothScroll)    \
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings6_put_AcceleratorPassthrough(This,acceleratorPassthrough)    \
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,acceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings6_get_AcceleratorPassthrough(This,pacceleratorPassthrough)    \
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings6_put_ShadowBitmap(This,shadowBitmap)    \
    ( (This)->lpVtbl -> put_ShadowBitmap(This,shadowBitmap) ) 

#define IMsRdpClientAdvancedSettings6_get_ShadowBitmap(This,pshadowBitmap)    \
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings6_put_TransportType(This,transportType)    \
    ( (This)->lpVtbl -> put_TransportType(This,transportType) ) 

#define IMsRdpClientAdvancedSettings6_get_TransportType(This,ptransportType)    \
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings6_put_SasSequence(This,sasSequence)    \
    ( (This)->lpVtbl -> put_SasSequence(This,sasSequence) ) 

#define IMsRdpClientAdvancedSettings6_get_SasSequence(This,psasSequence)    \
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings6_put_EncryptionEnabled(This,encryptionEnabled)    \
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,encryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings6_get_EncryptionEnabled(This,pencryptionEnabled)    \
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings6_put_DedicatedTerminal(This,dedicatedTerminal)    \
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,dedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings6_get_DedicatedTerminal(This,pdedicatedTerminal)    \
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings6_put_RDPPort(This,rdpPort)    \
    ( (This)->lpVtbl -> put_RDPPort(This,rdpPort) ) 

#define IMsRdpClientAdvancedSettings6_get_RDPPort(This,prdpPort)    \
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings6_put_EnableMouse(This,enableMouse)    \
    ( (This)->lpVtbl -> put_EnableMouse(This,enableMouse) ) 

#define IMsRdpClientAdvancedSettings6_get_EnableMouse(This,penableMouse)    \
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings6_put_DisableCtrlAltDel(This,disableCtrlAltDel)    \
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,disableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings6_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)    \
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings6_put_EnableWindowsKey(This,enableWindowsKey)    \
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,enableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings6_get_EnableWindowsKey(This,penableWindowsKey)    \
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings6_put_DoubleClickDetect(This,doubleClickDetect)    \
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,doubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings6_get_DoubleClickDetect(This,pdoubleClickDetect)    \
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings6_put_MaximizeShell(This,maximizeShell)    \
    ( (This)->lpVtbl -> put_MaximizeShell(This,maximizeShell) ) 

#define IMsRdpClientAdvancedSettings6_get_MaximizeShell(This,pmaximizeShell)    \
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyFullScreen(This,hotKeyFullScreen)    \
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,hotKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyFullScreen(This,photKeyFullScreen)    \
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyCtrlEsc(This,hotKeyCtrlEsc)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,hotKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyAltEsc(This,hotKeyAltEsc)    \
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,hotKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyAltEsc(This,photKeyAltEsc)    \
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyAltTab(This,hotKeyAltTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,hotKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyAltTab(This,photKeyAltTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyAltShiftTab(This,hotKeyAltShiftTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,hotKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyAltSpace(This,hotKeyAltSpace)    \
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,hotKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyAltSpace(This,photKeyAltSpace)    \
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings6_put_orderDrawThreshold(This,orderDrawThreshold)    \
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,orderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings6_get_orderDrawThreshold(This,porderDrawThreshold)    \
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapCacheSize(This,bitmapCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,bitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapCacheSize(This,pbitmapCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings6_put_ScaleBitmapCachesByBPP(This,bScale)    \
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,bScale) ) 

#define IMsRdpClientAdvancedSettings6_get_ScaleBitmapCachesByBPP(This,pbScale)    \
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings6_put_NumBitmapCaches(This,numBitmapCaches)    \
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,numBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings6_get_NumBitmapCaches(This,pnumBitmapCaches)    \
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings6_put_CachePersistenceActive(This,cachePersistenceActive)    \
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,cachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings6_get_CachePersistenceActive(This,pcachePersistenceActive)    \
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings6_put_PersistCacheDirectory(This,PersistCacheDirectory)    \
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,PersistCacheDirectory) ) 

#define IMsRdpClientAdvancedSettings6_put_brushSupportLevel(This,brushSupportLevel)    \
    ( (This)->lpVtbl -> put_brushSupportLevel(This,brushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings6_get_brushSupportLevel(This,pbrushSupportLevel)    \
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings6_put_minInputSendInterval(This,minInputSendInterval)    \
    ( (This)->lpVtbl -> put_minInputSendInterval(This,minInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings6_get_minInputSendInterval(This,pminInputSendInterval)    \
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings6_put_InputEventsAtOnce(This,inputEventsAtOnce)    \
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,inputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings6_get_InputEventsAtOnce(This,pinputEventsAtOnce)    \
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings6_put_maxEventCount(This,maxEventCount)    \
    ( (This)->lpVtbl -> put_maxEventCount(This,maxEventCount) ) 

#define IMsRdpClientAdvancedSettings6_get_maxEventCount(This,pmaxEventCount)    \
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings6_put_keepAliveInterval(This,keepAliveInterval)    \
    ( (This)->lpVtbl -> put_keepAliveInterval(This,keepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings6_get_keepAliveInterval(This,pkeepAliveInterval)    \
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings6_put_shutdownTimeout(This,shutdownTimeout)    \
    ( (This)->lpVtbl -> put_shutdownTimeout(This,shutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings6_get_shutdownTimeout(This,pshutdownTimeout)    \
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings6_put_overallConnectionTimeout(This,overallConnectionTimeout)    \
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,overallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings6_get_overallConnectionTimeout(This,poverallConnectionTimeout)    \
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings6_put_singleConnectionTimeout(This,singleConnectionTimeout)    \
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,singleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings6_get_singleConnectionTimeout(This,psingleConnectionTimeout)    \
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings6_put_KeyboardType(This,keyboardType)    \
    ( (This)->lpVtbl -> put_KeyboardType(This,keyboardType) ) 

#define IMsRdpClientAdvancedSettings6_get_KeyboardType(This,pkeyboardType)    \
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings6_put_KeyboardSubType(This,keyboardSubType)    \
    ( (This)->lpVtbl -> put_KeyboardSubType(This,keyboardSubType) ) 

#define IMsRdpClientAdvancedSettings6_get_KeyboardSubType(This,pkeyboardSubType)    \
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings6_put_KeyboardFunctionKey(This,keyboardFunctionKey)    \
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,keyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings6_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)    \
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings6_put_WinceFixedPalette(This,winceFixedPalette)    \
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,winceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings6_get_WinceFixedPalette(This,pwinceFixedPalette)    \
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectToServerConsole(This,connectToServerConsole)    \
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,connectToServerConsole) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectToServerConsole(This,pConnectToConsole)    \
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapPersistence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPersistence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapPersistence(This,pbitmapPersistence)    \
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings6_put_MinutesToIdleTimeout(This,minutesToIdleTimeout)    \
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,minutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings6_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)    \
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings6_put_RdpdrLocalPrintingDocName(This,localPrintingDocName)    \
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,localPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings6_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)    \
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings6_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings6_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings6_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings6_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings6_put_ClearTextPassword(This,clearTextPassword)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,clearTextPassword) ) 

#define IMsRdpClientAdvancedSettings6_put_DisplayConnectionBar(This,fDisplayConnectionBar)    \
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,fDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings6_get_DisplayConnectionBar(This,pDisplayConnectionBar)    \
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings6_put_PinConnectionBar(This,fPinConnectionBar)    \
    ( (This)->lpVtbl -> put_PinConnectionBar(This,fPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings6_get_PinConnectionBar(This,pPinConnectionBar)    \
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings6_put_GrabFocusOnConnect(This,fGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,fGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings6_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings6_put_LoadBalanceInfo(This,newLBInfo)    \
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,newLBInfo) ) 

#define IMsRdpClientAdvancedSettings6_get_LoadBalanceInfo(This,pLBInfo)    \
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectDrives(This,redirectDrives)    \
    ( (This)->lpVtbl -> put_RedirectDrives(This,redirectDrives) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectDrives(This,pRedirectDrives)    \
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectPrinters(This,redirectPrinters)    \
    ( (This)->lpVtbl -> put_RedirectPrinters(This,redirectPrinters) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectPrinters(This,pRedirectPrinters)    \
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectPorts(This,redirectPorts)    \
    ( (This)->lpVtbl -> put_RedirectPorts(This,redirectPorts) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectPorts(This,pRedirectPorts)    \
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectSmartCards(This,redirectSmartCards)    \
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,redirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectSmartCards(This,pRedirectSmartCards)    \
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings6_put_PerformanceFlags(This,DisableList)    \
    ( (This)->lpVtbl -> put_PerformanceFlags(This,DisableList) ) 

#define IMsRdpClientAdvancedSettings6_get_PerformanceFlags(This,pDisableList)    \
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectWithEndpoint(This,ConnectEndpoint)    \
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,ConnectEndpoint) ) 

#define IMsRdpClientAdvancedSettings6_put_NotifyTSPublicKey(This,fNotify)    \
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,fNotify) ) 

#define IMsRdpClientAdvancedSettings6_get_NotifyTSPublicKey(This,pfNotify)    \
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings6_get_CanAutoReconnect(This,pfCanAutoReconnect)    \
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings6_put_EnableAutoReconnect(This,fEnableAutoReconnect)    \
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,fEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings6_get_EnableAutoReconnect(This,pfEnableAutoReconnect)    \
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings6_put_MaxReconnectAttempts(This,MaxReconnectAttempts)    \
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,MaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings6_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)    \
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings6_put_ConnectionBarShowMinimizeButton(This,fShowMinimize)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,fShowMinimize) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectionBarShowRestoreButton(This,fShowRestore)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,fShowRestore) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectionBarShowRestoreButton(This,pfShowRestore)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings6_put_AuthenticationLevel(This,uiAuthLevel)    \
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,uiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings6_get_AuthenticationLevel(This,puiAuthLevel)    \
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 


#define IMsRdpClientAdvancedSettings6_put_RedirectClipboard(This,fRedirectClipboard)    \
    ( (This)->lpVtbl -> put_RedirectClipboard(This,fRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectClipboard(This,pfRedirectClipboard)    \
    ( (This)->lpVtbl -> get_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings6_put_AudioRedirectionMode(This,uiAudioRedirectionMode)    \
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,uiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings6_get_AudioRedirectionMode(This,puiAudioRedirectionMode)    \
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectionBarShowPinButton(This,fShowPin)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowPinButton(This,fShowPin) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectionBarShowPinButton(This,pfShowPin)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings6_put_PublicMode(This,fPublicMode)    \
    ( (This)->lpVtbl -> put_PublicMode(This,fPublicMode) ) 

#define IMsRdpClientAdvancedSettings6_get_PublicMode(This,pfPublicMode)    \
    ( (This)->lpVtbl -> get_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectDevices(This,fRedirectPnPDevices)    \
    ( (This)->lpVtbl -> put_RedirectDevices(This,fRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectDevices(This,pfRedirectPnPDevices)    \
    ( (This)->lpVtbl -> get_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings6_put_RedirectPOSDevices(This,fRedirectPOSDevices)    \
    ( (This)->lpVtbl -> put_RedirectPOSDevices(This,fRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings6_get_RedirectPOSDevices(This,pfRedirectPOSDevices)    \
    ( (This)->lpVtbl -> get_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings6_put_BitmapVirtualCache32BppSize(This,bitmapVirtualCache32BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache32BppSize(This,bitmapVirtualCache32BppSize) ) 

#define IMsRdpClientAdvancedSettings6_get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 


#define IMsRdpClientAdvancedSettings6_put_RelativeMouseMode(This,fRelativeMouseMode)    \
    ( (This)->lpVtbl -> put_RelativeMouseMode(This,fRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings6_get_RelativeMouseMode(This,pfRelativeMouseMode)    \
    ( (This)->lpVtbl -> get_RelativeMouseMode(This,pfRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings6_get_AuthenticationServiceClass(This,pbstrAuthServiceClass)    \
    ( (This)->lpVtbl -> get_AuthenticationServiceClass(This,pbstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings6_put_AuthenticationServiceClass(This,bstrAuthServiceClass)    \
    ( (This)->lpVtbl -> put_AuthenticationServiceClass(This,bstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings6_get_PCB(This,bstrPCB)    \
    ( (This)->lpVtbl -> get_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings6_put_PCB(This,bstrPCB)    \
    ( (This)->lpVtbl -> put_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseLeft(This,hotKeyFocusReleaseLeft)    \
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseLeft(This,hotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseLeft(This,hotKeyFocusReleaseLeft)    \
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseLeft(This,hotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseRight(This,hotKeyFocusReleaseRight)    \
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseRight(This,hotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseRight(This,hotKeyFocusReleaseRight)    \
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseRight(This,hotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings6_put_EnableCredSspSupport(This,fEnableSupport)    \
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,fEnableSupport) ) 

#define IMsRdpClientAdvancedSettings6_get_EnableCredSspSupport(This,pfEnableSupport)    \
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientAdvancedSettings6_get_AuthenticationType(This,puiAuthType)    \
    ( (This)->lpVtbl -> get_AuthenticationType(This,puiAuthType) ) 

#define IMsRdpClientAdvancedSettings6_put_ConnectToAdministerServer(This,connectToAdministerServer)    \
    ( (This)->lpVtbl -> put_ConnectToAdministerServer(This,connectToAdministerServer) ) 

#define IMsRdpClientAdvancedSettings6_get_ConnectToAdministerServer(This,pConnectToAdministerServer)    \
    ( (This)->lpVtbl -> get_ConnectToAdministerServer(This,pConnectToAdministerServer) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_RelativeMouseMode_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ VARIANT_BOOL fRelativeMouseMode);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_RelativeMouseMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_RelativeMouseMode_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_RelativeMouseMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_AuthenticationServiceClass_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ BSTR *pbstrAuthServiceClass);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_AuthenticationServiceClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_AuthenticationServiceClass_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ BSTR bstrAuthServiceClass);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_AuthenticationServiceClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_PCB_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ BSTR *bstrPCB);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_PCB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_PCB_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ BSTR bstrPCB);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_PCB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseLeft_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ LONG hotKeyFocusReleaseLeft);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseLeft_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ LONG *hotKeyFocusReleaseLeft);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseLeft_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseRight_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ LONG hotKeyFocusReleaseRight);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_HotKeyFocusReleaseRight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseRight_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ LONG *hotKeyFocusReleaseRight);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_HotKeyFocusReleaseRight_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_EnableCredSspSupport_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ VARIANT_BOOL fEnableSupport);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_EnableCredSspSupport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_EnableCredSspSupport_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_EnableCredSspSupport_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_AuthenticationType_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ UINT *puiAuthType);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_AuthenticationType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_put_ConnectToAdministerServer_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [in] */ VARIANT_BOOL connectToAdministerServer);


void __RPC_STUB IMsRdpClientAdvancedSettings6_put_ConnectToAdministerServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings6_get_ConnectToAdministerServer_Proxy( 
    IMsRdpClientAdvancedSettings6 * This,
    /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer);


void __RPC_STUB IMsRdpClientAdvancedSettings6_get_ConnectToAdministerServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IMsRdpClientAdvancedSettings6_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientAdvancedSettings7_INTERFACE_DEFINED__
#define __IMsRdpClientAdvancedSettings7_INTERFACE_DEFINED__

/* interface IMsRdpClientAdvancedSettings7 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientAdvancedSettings7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26036036-4010-4578-8091-0db9a1edf9c3")
    IMsRdpClientAdvancedSettings7 : public IMsRdpClientAdvancedSettings6
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AudioCaptureRedirectionMode( 
            /* [in] */ VARIANT_BOOL fRedir) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AudioCaptureRedirectionMode( 
            /* [retval][out] */ VARIANT_BOOL *pfRedir) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_VideoPlaybackMode( 
            /* [in] */ UINT videoPlaybackMode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_VideoPlaybackMode( 
            /* [retval][out] */ UINT *pVideoPlaybackMode) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_EnableSuperPan( 
            /* [in] */ VARIANT_BOOL fEnableSuperPan) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_EnableSuperPan( 
            /* [retval][out] */ VARIANT_BOOL *pfEnableSuperPan) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_SuperPanAccelerationFactor( 
            /* [in] */ ULONG uAccelFactor) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SuperPanAccelerationFactor( 
            /* [retval][out] */ ULONG *puAccelFactor) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NegotiateSecurityLayer( 
            /* [in] */ VARIANT_BOOL fNegotiate) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NegotiateSecurityLayer( 
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_AudioQualityMode( 
            /* [in] */ UINT audioQualityMode) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AudioQualityMode( 
            /* [retval][out] */ UINT *pAudioQualityMode) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectDirectX( 
            /* [in] */ VARIANT_BOOL fRedirectDirectX) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectDirectX( 
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDirectX) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_NetworkConnectionType( 
            /* [in] */ UINT connectionType) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_NetworkConnectionType( 
            /* [retval][out] */ UINT *pConnectionType) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientAdvancedSettings7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientAdvancedSettings7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientAdvancedSettings7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Compress )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG compress);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Compress )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pcompress);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPeristence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pbitmapPeristence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG allowBackgroundInput);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_allowBackgroundInput )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pallowBackgroundInput);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyBoardLayoutStr )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR KeyBoardLayoutStr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PluginDlls )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR PluginDlls);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconFile )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR IconFile);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IconIndex )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG IconIndex);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BOOL ContainerHandledFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerHandledFullScreen )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BOOL *pContainerHandledFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BOOL DisableRdpdr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableRdpdr )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BOOL *pDisableRdpdr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmoothScroll )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG smoothScroll);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmoothScroll )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *psmoothScroll);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG acceleratorPassthrough);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AcceleratorPassthrough )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pacceleratorPassthrough);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG shadowBitmap);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShadowBitmap )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pshadowBitmap);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TransportType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG transportType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransportType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *ptransportType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SasSequence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG sasSequence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SasSequence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *psasSequence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG encryptionEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EncryptionEnabled )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pencryptionEnabled);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG dedicatedTerminal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DedicatedTerminal )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pdedicatedTerminal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RDPPort )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG rdpPort);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RDPPort )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *prdpPort);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableMouse )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG enableMouse);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableMouse )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *penableMouse);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG disableCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisableCtrlAltDel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pdisableCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG enableWindowsKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableWindowsKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *penableWindowsKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG doubleClickDetect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DoubleClickDetect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pdoubleClickDetect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaximizeShell )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG maximizeShell);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaximizeShell )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pmaximizeShell);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFullScreen )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *photKeyFullScreen);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyCtrlEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlEsc )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *photKeyCtrlEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyAltEsc);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltEsc )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *photKeyAltEsc);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyAltTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltTab )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *photKeyAltTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyAltShiftTab);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltShiftTab )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *photKeyAltShiftTab);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyAltSpace);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyAltSpace )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *photKeyAltSpace);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyCtrlAltDel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyCtrlAltDel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *photKeyCtrlAltDel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG orderDrawThreshold);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_orderDrawThreshold )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *porderDrawThreshold);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG bitmapCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapCacheSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pbitmapCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG bitmapVirtualCacheSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCacheSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pbitmapVirtualCacheSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG bScale);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleBitmapCachesByBPP )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pbScale);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG numBitmapCaches);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumBitmapCaches )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pnumBitmapCaches);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG cachePersistenceActive);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachePersistenceActive )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pcachePersistenceActive);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PersistCacheDirectory )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR PersistCacheDirectory);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG brushSupportLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_brushSupportLevel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pbrushSupportLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG minInputSendInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_minInputSendInterval )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pminInputSendInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG inputEventsAtOnce);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InputEventsAtOnce )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pinputEventsAtOnce);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_maxEventCount )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG maxEventCount);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_maxEventCount )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pmaxEventCount);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG keepAliveInterval);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_keepAliveInterval )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pkeepAliveInterval);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG shutdownTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_shutdownTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pshutdownTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG overallConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_overallConnectionTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *poverallConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG singleConnectionTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_singleConnectionTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *psingleConnectionTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG keyboardType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pkeyboardType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG keyboardSubType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardSubType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pkeyboardSubType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG keyboardFunctionKey);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_KeyboardFunctionKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pkeyboardFunctionKey);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG winceFixedPalette);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WinceFixedPalette )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pwinceFixedPalette);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL connectToServerConsole);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToServerConsole )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToConsole);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG bitmapPeristence);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapPersistence )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pbitmapPersistence);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG minutesToIdleTimeout);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinutesToIdleTimeout )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pminutesToIdleTimeout);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR localPrintingDocName);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrLocalPrintingDocName )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *pLocalPrintingDocName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR clipCleanTempDirString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipCleanTempDirString )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *clipCleanTempDirString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR clipPasteInfoString);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdpdrClipPasteInfoString )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *clipPasteInfoString);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClearTextPassword )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR clearTextPassword);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fDisplayConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayConnectionBar )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pDisplayConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fPinConnectionBar);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PinConnectionBar )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pPinConnectionBar);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fGrabFocusOnConnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GrabFocusOnConnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfGrabFocusOnConnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR newLBInfo);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LoadBalanceInfo )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *pLBInfo);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDrives )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL redirectDrives);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDrives )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectDrives);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL redirectPrinters);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPrinters )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPrinters);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPorts )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL redirectPorts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPorts )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectPorts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL redirectSmartCards);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectSmartCards )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pRedirectSmartCards);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG bitmapVirtualCache16BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache16BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache16BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG bitmapVirtualCache24BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache24BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache24BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG DisableList);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PerformanceFlags )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pDisableList);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectWithEndpoint )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT *ConnectEndpoint);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NotifyTSPublicKey )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNotify);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanAutoReconnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCanAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fEnableAutoReconnect);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableAutoReconnect )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableAutoReconnect);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG MaxReconnectAttempts);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxReconnectAttempts )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pMaxReconnectAttempts);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fShowMinimize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowMinimizeButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowMinimize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fShowRestore);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowRestoreButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowRestore);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ UINT uiAuthLevel);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationLevel )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ UINT *puiAuthLevel);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fRedirectClipboard);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectClipboard )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectClipboard);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ UINT uiAudioRedirectionMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AudioRedirectionMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ UINT *puiAudioRedirectionMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fShowPin);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionBarShowPinButton )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfShowPin);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PublicMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fPublicMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PublicMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfPublicMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDevices )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fRedirectPnPDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDevices )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPnPDevices);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fRedirectPOSDevices);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectPOSDevices )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectPOSDevices);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG bitmapVirtualCache32BppSize);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapVirtualCache32BppSize )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *pBitmapVirtualCache32BppSize);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fRelativeMouseMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelativeMouseMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRelativeMouseMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *pbstrAuthServiceClass);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AuthenticationServiceClass )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR bstrAuthServiceClass);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PCB )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ BSTR *bstrPCB);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PCB )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ BSTR bstrPCB);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyFocusReleaseLeft);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseLeft )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *hotKeyFocusReleaseLeft);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ LONG hotKeyFocusReleaseRight);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HotKeyFocusReleaseRight )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ LONG *hotKeyFocusReleaseRight);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fEnableSupport);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableCredSspSupport )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSupport);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ UINT *puiAuthType);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL connectToAdministerServer);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectToAdministerServer )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pConnectToAdministerServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AudioCaptureRedirectionMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fRedir);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AudioCaptureRedirectionMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedir);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VideoPlaybackMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ UINT videoPlaybackMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VideoPlaybackMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ UINT *pVideoPlaybackMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnableSuperPan )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fEnableSuperPan);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnableSuperPan )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfEnableSuperPan);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuperPanAccelerationFactor )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ ULONG uAccelFactor);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuperPanAccelerationFactor )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ ULONG *puAccelFactor);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NegotiateSecurityLayer )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fNegotiate);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NegotiateSecurityLayer )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNegotiate);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AudioQualityMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ UINT audioQualityMode);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AudioQualityMode )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ UINT *pAudioQualityMode);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectDirectX )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ VARIANT_BOOL fRedirectDirectX);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectDirectX )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfRedirectDirectX);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NetworkConnectionType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [in] */ UINT connectionType);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NetworkConnectionType )( 
            IMsRdpClientAdvancedSettings7 * This,
            /* [retval][out] */ UINT *pConnectionType);
        
        END_INTERFACE
    } IMsRdpClientAdvancedSettings7Vtbl;

    interface IMsRdpClientAdvancedSettings7
    {
        CONST_VTBL struct IMsRdpClientAdvancedSettings7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientAdvancedSettings7_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientAdvancedSettings7_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientAdvancedSettings7_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientAdvancedSettings7_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClientAdvancedSettings7_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClientAdvancedSettings7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClientAdvancedSettings7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMsRdpClientAdvancedSettings7_put_Compress(This,compress)    \
    ( (This)->lpVtbl -> put_Compress(This,compress) ) 

#define IMsRdpClientAdvancedSettings7_get_Compress(This,pcompress)    \
    ( (This)->lpVtbl -> get_Compress(This,pcompress) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapPeristence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPeristence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapPeristence(This,pbitmapPeristence)    \
    ( (This)->lpVtbl -> get_BitmapPeristence(This,pbitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings7_put_allowBackgroundInput(This,allowBackgroundInput)    \
    ( (This)->lpVtbl -> put_allowBackgroundInput(This,allowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings7_get_allowBackgroundInput(This,pallowBackgroundInput)    \
    ( (This)->lpVtbl -> get_allowBackgroundInput(This,pallowBackgroundInput) ) 

#define IMsRdpClientAdvancedSettings7_put_KeyBoardLayoutStr(This,KeyBoardLayoutStr)    \
    ( (This)->lpVtbl -> put_KeyBoardLayoutStr(This,KeyBoardLayoutStr) ) 

#define IMsRdpClientAdvancedSettings7_put_PluginDlls(This,PluginDlls)    \
    ( (This)->lpVtbl -> put_PluginDlls(This,PluginDlls) ) 

#define IMsRdpClientAdvancedSettings7_put_IconFile(This,IconFile)    \
    ( (This)->lpVtbl -> put_IconFile(This,IconFile) ) 

#define IMsRdpClientAdvancedSettings7_put_IconIndex(This,IconIndex)    \
    ( (This)->lpVtbl -> put_IconIndex(This,IconIndex) ) 

#define IMsRdpClientAdvancedSettings7_put_ContainerHandledFullScreen(This,ContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> put_ContainerHandledFullScreen(This,ContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings7_get_ContainerHandledFullScreen(This,pContainerHandledFullScreen)    \
    ( (This)->lpVtbl -> get_ContainerHandledFullScreen(This,pContainerHandledFullScreen) ) 

#define IMsRdpClientAdvancedSettings7_put_DisableRdpdr(This,DisableRdpdr)    \
    ( (This)->lpVtbl -> put_DisableRdpdr(This,DisableRdpdr) ) 

#define IMsRdpClientAdvancedSettings7_get_DisableRdpdr(This,pDisableRdpdr)    \
    ( (This)->lpVtbl -> get_DisableRdpdr(This,pDisableRdpdr) ) 


#define IMsRdpClientAdvancedSettings7_put_SmoothScroll(This,smoothScroll)    \
    ( (This)->lpVtbl -> put_SmoothScroll(This,smoothScroll) ) 

#define IMsRdpClientAdvancedSettings7_get_SmoothScroll(This,psmoothScroll)    \
    ( (This)->lpVtbl -> get_SmoothScroll(This,psmoothScroll) ) 

#define IMsRdpClientAdvancedSettings7_put_AcceleratorPassthrough(This,acceleratorPassthrough)    \
    ( (This)->lpVtbl -> put_AcceleratorPassthrough(This,acceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings7_get_AcceleratorPassthrough(This,pacceleratorPassthrough)    \
    ( (This)->lpVtbl -> get_AcceleratorPassthrough(This,pacceleratorPassthrough) ) 

#define IMsRdpClientAdvancedSettings7_put_ShadowBitmap(This,shadowBitmap)    \
    ( (This)->lpVtbl -> put_ShadowBitmap(This,shadowBitmap) ) 

#define IMsRdpClientAdvancedSettings7_get_ShadowBitmap(This,pshadowBitmap)    \
    ( (This)->lpVtbl -> get_ShadowBitmap(This,pshadowBitmap) ) 

#define IMsRdpClientAdvancedSettings7_put_TransportType(This,transportType)    \
    ( (This)->lpVtbl -> put_TransportType(This,transportType) ) 

#define IMsRdpClientAdvancedSettings7_get_TransportType(This,ptransportType)    \
    ( (This)->lpVtbl -> get_TransportType(This,ptransportType) ) 

#define IMsRdpClientAdvancedSettings7_put_SasSequence(This,sasSequence)    \
    ( (This)->lpVtbl -> put_SasSequence(This,sasSequence) ) 

#define IMsRdpClientAdvancedSettings7_get_SasSequence(This,psasSequence)    \
    ( (This)->lpVtbl -> get_SasSequence(This,psasSequence) ) 

#define IMsRdpClientAdvancedSettings7_put_EncryptionEnabled(This,encryptionEnabled)    \
    ( (This)->lpVtbl -> put_EncryptionEnabled(This,encryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings7_get_EncryptionEnabled(This,pencryptionEnabled)    \
    ( (This)->lpVtbl -> get_EncryptionEnabled(This,pencryptionEnabled) ) 

#define IMsRdpClientAdvancedSettings7_put_DedicatedTerminal(This,dedicatedTerminal)    \
    ( (This)->lpVtbl -> put_DedicatedTerminal(This,dedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings7_get_DedicatedTerminal(This,pdedicatedTerminal)    \
    ( (This)->lpVtbl -> get_DedicatedTerminal(This,pdedicatedTerminal) ) 

#define IMsRdpClientAdvancedSettings7_put_RDPPort(This,rdpPort)    \
    ( (This)->lpVtbl -> put_RDPPort(This,rdpPort) ) 

#define IMsRdpClientAdvancedSettings7_get_RDPPort(This,prdpPort)    \
    ( (This)->lpVtbl -> get_RDPPort(This,prdpPort) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableMouse(This,enableMouse)    \
    ( (This)->lpVtbl -> put_EnableMouse(This,enableMouse) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableMouse(This,penableMouse)    \
    ( (This)->lpVtbl -> get_EnableMouse(This,penableMouse) ) 

#define IMsRdpClientAdvancedSettings7_put_DisableCtrlAltDel(This,disableCtrlAltDel)    \
    ( (This)->lpVtbl -> put_DisableCtrlAltDel(This,disableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings7_get_DisableCtrlAltDel(This,pdisableCtrlAltDel)    \
    ( (This)->lpVtbl -> get_DisableCtrlAltDel(This,pdisableCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableWindowsKey(This,enableWindowsKey)    \
    ( (This)->lpVtbl -> put_EnableWindowsKey(This,enableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableWindowsKey(This,penableWindowsKey)    \
    ( (This)->lpVtbl -> get_EnableWindowsKey(This,penableWindowsKey) ) 

#define IMsRdpClientAdvancedSettings7_put_DoubleClickDetect(This,doubleClickDetect)    \
    ( (This)->lpVtbl -> put_DoubleClickDetect(This,doubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings7_get_DoubleClickDetect(This,pdoubleClickDetect)    \
    ( (This)->lpVtbl -> get_DoubleClickDetect(This,pdoubleClickDetect) ) 

#define IMsRdpClientAdvancedSettings7_put_MaximizeShell(This,maximizeShell)    \
    ( (This)->lpVtbl -> put_MaximizeShell(This,maximizeShell) ) 

#define IMsRdpClientAdvancedSettings7_get_MaximizeShell(This,pmaximizeShell)    \
    ( (This)->lpVtbl -> get_MaximizeShell(This,pmaximizeShell) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyFullScreen(This,hotKeyFullScreen)    \
    ( (This)->lpVtbl -> put_HotKeyFullScreen(This,hotKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyFullScreen(This,photKeyFullScreen)    \
    ( (This)->lpVtbl -> get_HotKeyFullScreen(This,photKeyFullScreen) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyCtrlEsc(This,hotKeyCtrlEsc)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlEsc(This,hotKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyCtrlEsc(This,photKeyCtrlEsc)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlEsc(This,photKeyCtrlEsc) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyAltEsc(This,hotKeyAltEsc)    \
    ( (This)->lpVtbl -> put_HotKeyAltEsc(This,hotKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyAltEsc(This,photKeyAltEsc)    \
    ( (This)->lpVtbl -> get_HotKeyAltEsc(This,photKeyAltEsc) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyAltTab(This,hotKeyAltTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltTab(This,hotKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyAltTab(This,photKeyAltTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltTab(This,photKeyAltTab) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyAltShiftTab(This,hotKeyAltShiftTab)    \
    ( (This)->lpVtbl -> put_HotKeyAltShiftTab(This,hotKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyAltShiftTab(This,photKeyAltShiftTab)    \
    ( (This)->lpVtbl -> get_HotKeyAltShiftTab(This,photKeyAltShiftTab) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyAltSpace(This,hotKeyAltSpace)    \
    ( (This)->lpVtbl -> put_HotKeyAltSpace(This,hotKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyAltSpace(This,photKeyAltSpace)    \
    ( (This)->lpVtbl -> get_HotKeyAltSpace(This,photKeyAltSpace) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> put_HotKeyCtrlAltDel(This,hotKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel)    \
    ( (This)->lpVtbl -> get_HotKeyCtrlAltDel(This,photKeyCtrlAltDel) ) 

#define IMsRdpClientAdvancedSettings7_put_orderDrawThreshold(This,orderDrawThreshold)    \
    ( (This)->lpVtbl -> put_orderDrawThreshold(This,orderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings7_get_orderDrawThreshold(This,porderDrawThreshold)    \
    ( (This)->lpVtbl -> get_orderDrawThreshold(This,porderDrawThreshold) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapCacheSize(This,bitmapCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapCacheSize(This,bitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapCacheSize(This,pbitmapCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapCacheSize(This,pbitmapCacheSize) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCacheSize(This,bitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCacheSize(This,pbitmapVirtualCacheSize) ) 

#define IMsRdpClientAdvancedSettings7_put_ScaleBitmapCachesByBPP(This,bScale)    \
    ( (This)->lpVtbl -> put_ScaleBitmapCachesByBPP(This,bScale) ) 

#define IMsRdpClientAdvancedSettings7_get_ScaleBitmapCachesByBPP(This,pbScale)    \
    ( (This)->lpVtbl -> get_ScaleBitmapCachesByBPP(This,pbScale) ) 

#define IMsRdpClientAdvancedSettings7_put_NumBitmapCaches(This,numBitmapCaches)    \
    ( (This)->lpVtbl -> put_NumBitmapCaches(This,numBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings7_get_NumBitmapCaches(This,pnumBitmapCaches)    \
    ( (This)->lpVtbl -> get_NumBitmapCaches(This,pnumBitmapCaches) ) 

#define IMsRdpClientAdvancedSettings7_put_CachePersistenceActive(This,cachePersistenceActive)    \
    ( (This)->lpVtbl -> put_CachePersistenceActive(This,cachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings7_get_CachePersistenceActive(This,pcachePersistenceActive)    \
    ( (This)->lpVtbl -> get_CachePersistenceActive(This,pcachePersistenceActive) ) 

#define IMsRdpClientAdvancedSettings7_put_PersistCacheDirectory(This,PersistCacheDirectory)    \
    ( (This)->lpVtbl -> put_PersistCacheDirectory(This,PersistCacheDirectory) ) 

#define IMsRdpClientAdvancedSettings7_put_brushSupportLevel(This,brushSupportLevel)    \
    ( (This)->lpVtbl -> put_brushSupportLevel(This,brushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings7_get_brushSupportLevel(This,pbrushSupportLevel)    \
    ( (This)->lpVtbl -> get_brushSupportLevel(This,pbrushSupportLevel) ) 

#define IMsRdpClientAdvancedSettings7_put_minInputSendInterval(This,minInputSendInterval)    \
    ( (This)->lpVtbl -> put_minInputSendInterval(This,minInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings7_get_minInputSendInterval(This,pminInputSendInterval)    \
    ( (This)->lpVtbl -> get_minInputSendInterval(This,pminInputSendInterval) ) 

#define IMsRdpClientAdvancedSettings7_put_InputEventsAtOnce(This,inputEventsAtOnce)    \
    ( (This)->lpVtbl -> put_InputEventsAtOnce(This,inputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings7_get_InputEventsAtOnce(This,pinputEventsAtOnce)    \
    ( (This)->lpVtbl -> get_InputEventsAtOnce(This,pinputEventsAtOnce) ) 

#define IMsRdpClientAdvancedSettings7_put_maxEventCount(This,maxEventCount)    \
    ( (This)->lpVtbl -> put_maxEventCount(This,maxEventCount) ) 

#define IMsRdpClientAdvancedSettings7_get_maxEventCount(This,pmaxEventCount)    \
    ( (This)->lpVtbl -> get_maxEventCount(This,pmaxEventCount) ) 

#define IMsRdpClientAdvancedSettings7_put_keepAliveInterval(This,keepAliveInterval)    \
    ( (This)->lpVtbl -> put_keepAliveInterval(This,keepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings7_get_keepAliveInterval(This,pkeepAliveInterval)    \
    ( (This)->lpVtbl -> get_keepAliveInterval(This,pkeepAliveInterval) ) 

#define IMsRdpClientAdvancedSettings7_put_shutdownTimeout(This,shutdownTimeout)    \
    ( (This)->lpVtbl -> put_shutdownTimeout(This,shutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings7_get_shutdownTimeout(This,pshutdownTimeout)    \
    ( (This)->lpVtbl -> get_shutdownTimeout(This,pshutdownTimeout) ) 

#define IMsRdpClientAdvancedSettings7_put_overallConnectionTimeout(This,overallConnectionTimeout)    \
    ( (This)->lpVtbl -> put_overallConnectionTimeout(This,overallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings7_get_overallConnectionTimeout(This,poverallConnectionTimeout)    \
    ( (This)->lpVtbl -> get_overallConnectionTimeout(This,poverallConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings7_put_singleConnectionTimeout(This,singleConnectionTimeout)    \
    ( (This)->lpVtbl -> put_singleConnectionTimeout(This,singleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings7_get_singleConnectionTimeout(This,psingleConnectionTimeout)    \
    ( (This)->lpVtbl -> get_singleConnectionTimeout(This,psingleConnectionTimeout) ) 

#define IMsRdpClientAdvancedSettings7_put_KeyboardType(This,keyboardType)    \
    ( (This)->lpVtbl -> put_KeyboardType(This,keyboardType) ) 

#define IMsRdpClientAdvancedSettings7_get_KeyboardType(This,pkeyboardType)    \
    ( (This)->lpVtbl -> get_KeyboardType(This,pkeyboardType) ) 

#define IMsRdpClientAdvancedSettings7_put_KeyboardSubType(This,keyboardSubType)    \
    ( (This)->lpVtbl -> put_KeyboardSubType(This,keyboardSubType) ) 

#define IMsRdpClientAdvancedSettings7_get_KeyboardSubType(This,pkeyboardSubType)    \
    ( (This)->lpVtbl -> get_KeyboardSubType(This,pkeyboardSubType) ) 

#define IMsRdpClientAdvancedSettings7_put_KeyboardFunctionKey(This,keyboardFunctionKey)    \
    ( (This)->lpVtbl -> put_KeyboardFunctionKey(This,keyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings7_get_KeyboardFunctionKey(This,pkeyboardFunctionKey)    \
    ( (This)->lpVtbl -> get_KeyboardFunctionKey(This,pkeyboardFunctionKey) ) 

#define IMsRdpClientAdvancedSettings7_put_WinceFixedPalette(This,winceFixedPalette)    \
    ( (This)->lpVtbl -> put_WinceFixedPalette(This,winceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings7_get_WinceFixedPalette(This,pwinceFixedPalette)    \
    ( (This)->lpVtbl -> get_WinceFixedPalette(This,pwinceFixedPalette) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectToServerConsole(This,connectToServerConsole)    \
    ( (This)->lpVtbl -> put_ConnectToServerConsole(This,connectToServerConsole) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectToServerConsole(This,pConnectToConsole)    \
    ( (This)->lpVtbl -> get_ConnectToServerConsole(This,pConnectToConsole) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapPersistence(This,bitmapPeristence)    \
    ( (This)->lpVtbl -> put_BitmapPersistence(This,bitmapPeristence) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapPersistence(This,pbitmapPersistence)    \
    ( (This)->lpVtbl -> get_BitmapPersistence(This,pbitmapPersistence) ) 

#define IMsRdpClientAdvancedSettings7_put_MinutesToIdleTimeout(This,minutesToIdleTimeout)    \
    ( (This)->lpVtbl -> put_MinutesToIdleTimeout(This,minutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings7_get_MinutesToIdleTimeout(This,pminutesToIdleTimeout)    \
    ( (This)->lpVtbl -> get_MinutesToIdleTimeout(This,pminutesToIdleTimeout) ) 

#define IMsRdpClientAdvancedSettings7_put_RdpdrLocalPrintingDocName(This,localPrintingDocName)    \
    ( (This)->lpVtbl -> put_RdpdrLocalPrintingDocName(This,localPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings7_get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName)    \
    ( (This)->lpVtbl -> get_RdpdrLocalPrintingDocName(This,pLocalPrintingDocName) ) 

#define IMsRdpClientAdvancedSettings7_put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> put_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings7_get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString)    \
    ( (This)->lpVtbl -> get_RdpdrClipCleanTempDirString(This,clipCleanTempDirString) ) 

#define IMsRdpClientAdvancedSettings7_put_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> put_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings7_get_RdpdrClipPasteInfoString(This,clipPasteInfoString)    \
    ( (This)->lpVtbl -> get_RdpdrClipPasteInfoString(This,clipPasteInfoString) ) 

#define IMsRdpClientAdvancedSettings7_put_ClearTextPassword(This,clearTextPassword)    \
    ( (This)->lpVtbl -> put_ClearTextPassword(This,clearTextPassword) ) 

#define IMsRdpClientAdvancedSettings7_put_DisplayConnectionBar(This,fDisplayConnectionBar)    \
    ( (This)->lpVtbl -> put_DisplayConnectionBar(This,fDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings7_get_DisplayConnectionBar(This,pDisplayConnectionBar)    \
    ( (This)->lpVtbl -> get_DisplayConnectionBar(This,pDisplayConnectionBar) ) 

#define IMsRdpClientAdvancedSettings7_put_PinConnectionBar(This,fPinConnectionBar)    \
    ( (This)->lpVtbl -> put_PinConnectionBar(This,fPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings7_get_PinConnectionBar(This,pPinConnectionBar)    \
    ( (This)->lpVtbl -> get_PinConnectionBar(This,pPinConnectionBar) ) 

#define IMsRdpClientAdvancedSettings7_put_GrabFocusOnConnect(This,fGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> put_GrabFocusOnConnect(This,fGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings7_get_GrabFocusOnConnect(This,pfGrabFocusOnConnect)    \
    ( (This)->lpVtbl -> get_GrabFocusOnConnect(This,pfGrabFocusOnConnect) ) 

#define IMsRdpClientAdvancedSettings7_put_LoadBalanceInfo(This,newLBInfo)    \
    ( (This)->lpVtbl -> put_LoadBalanceInfo(This,newLBInfo) ) 

#define IMsRdpClientAdvancedSettings7_get_LoadBalanceInfo(This,pLBInfo)    \
    ( (This)->lpVtbl -> get_LoadBalanceInfo(This,pLBInfo) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectDrives(This,redirectDrives)    \
    ( (This)->lpVtbl -> put_RedirectDrives(This,redirectDrives) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectDrives(This,pRedirectDrives)    \
    ( (This)->lpVtbl -> get_RedirectDrives(This,pRedirectDrives) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectPrinters(This,redirectPrinters)    \
    ( (This)->lpVtbl -> put_RedirectPrinters(This,redirectPrinters) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectPrinters(This,pRedirectPrinters)    \
    ( (This)->lpVtbl -> get_RedirectPrinters(This,pRedirectPrinters) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectPorts(This,redirectPorts)    \
    ( (This)->lpVtbl -> put_RedirectPorts(This,redirectPorts) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectPorts(This,pRedirectPorts)    \
    ( (This)->lpVtbl -> get_RedirectPorts(This,pRedirectPorts) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectSmartCards(This,redirectSmartCards)    \
    ( (This)->lpVtbl -> put_RedirectSmartCards(This,redirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectSmartCards(This,pRedirectSmartCards)    \
    ( (This)->lpVtbl -> get_RedirectSmartCards(This,pRedirectSmartCards) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache16BppSize(This,bitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache16BppSize(This,pBitmapVirtualCache16BppSize) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache24BppSize(This,bitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache24BppSize(This,pBitmapVirtualCache24BppSize) ) 

#define IMsRdpClientAdvancedSettings7_put_PerformanceFlags(This,DisableList)    \
    ( (This)->lpVtbl -> put_PerformanceFlags(This,DisableList) ) 

#define IMsRdpClientAdvancedSettings7_get_PerformanceFlags(This,pDisableList)    \
    ( (This)->lpVtbl -> get_PerformanceFlags(This,pDisableList) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectWithEndpoint(This,ConnectEndpoint)    \
    ( (This)->lpVtbl -> put_ConnectWithEndpoint(This,ConnectEndpoint) ) 

#define IMsRdpClientAdvancedSettings7_put_NotifyTSPublicKey(This,fNotify)    \
    ( (This)->lpVtbl -> put_NotifyTSPublicKey(This,fNotify) ) 

#define IMsRdpClientAdvancedSettings7_get_NotifyTSPublicKey(This,pfNotify)    \
    ( (This)->lpVtbl -> get_NotifyTSPublicKey(This,pfNotify) ) 


#define IMsRdpClientAdvancedSettings7_get_CanAutoReconnect(This,pfCanAutoReconnect)    \
    ( (This)->lpVtbl -> get_CanAutoReconnect(This,pfCanAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableAutoReconnect(This,fEnableAutoReconnect)    \
    ( (This)->lpVtbl -> put_EnableAutoReconnect(This,fEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableAutoReconnect(This,pfEnableAutoReconnect)    \
    ( (This)->lpVtbl -> get_EnableAutoReconnect(This,pfEnableAutoReconnect) ) 

#define IMsRdpClientAdvancedSettings7_put_MaxReconnectAttempts(This,MaxReconnectAttempts)    \
    ( (This)->lpVtbl -> put_MaxReconnectAttempts(This,MaxReconnectAttempts) ) 

#define IMsRdpClientAdvancedSettings7_get_MaxReconnectAttempts(This,pMaxReconnectAttempts)    \
    ( (This)->lpVtbl -> get_MaxReconnectAttempts(This,pMaxReconnectAttempts) ) 


#define IMsRdpClientAdvancedSettings7_put_ConnectionBarShowMinimizeButton(This,fShowMinimize)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowMinimizeButton(This,fShowMinimize) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectionBarShowMinimizeButton(This,pfShowMinimize)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowMinimizeButton(This,pfShowMinimize) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectionBarShowRestoreButton(This,fShowRestore)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowRestoreButton(This,fShowRestore) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectionBarShowRestoreButton(This,pfShowRestore)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowRestoreButton(This,pfShowRestore) ) 


#define IMsRdpClientAdvancedSettings7_put_AuthenticationLevel(This,uiAuthLevel)    \
    ( (This)->lpVtbl -> put_AuthenticationLevel(This,uiAuthLevel) ) 

#define IMsRdpClientAdvancedSettings7_get_AuthenticationLevel(This,puiAuthLevel)    \
    ( (This)->lpVtbl -> get_AuthenticationLevel(This,puiAuthLevel) ) 


#define IMsRdpClientAdvancedSettings7_put_RedirectClipboard(This,fRedirectClipboard)    \
    ( (This)->lpVtbl -> put_RedirectClipboard(This,fRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectClipboard(This,pfRedirectClipboard)    \
    ( (This)->lpVtbl -> get_RedirectClipboard(This,pfRedirectClipboard) ) 

#define IMsRdpClientAdvancedSettings7_put_AudioRedirectionMode(This,uiAudioRedirectionMode)    \
    ( (This)->lpVtbl -> put_AudioRedirectionMode(This,uiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings7_get_AudioRedirectionMode(This,puiAudioRedirectionMode)    \
    ( (This)->lpVtbl -> get_AudioRedirectionMode(This,puiAudioRedirectionMode) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectionBarShowPinButton(This,fShowPin)    \
    ( (This)->lpVtbl -> put_ConnectionBarShowPinButton(This,fShowPin) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectionBarShowPinButton(This,pfShowPin)    \
    ( (This)->lpVtbl -> get_ConnectionBarShowPinButton(This,pfShowPin) ) 

#define IMsRdpClientAdvancedSettings7_put_PublicMode(This,fPublicMode)    \
    ( (This)->lpVtbl -> put_PublicMode(This,fPublicMode) ) 

#define IMsRdpClientAdvancedSettings7_get_PublicMode(This,pfPublicMode)    \
    ( (This)->lpVtbl -> get_PublicMode(This,pfPublicMode) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectDevices(This,fRedirectPnPDevices)    \
    ( (This)->lpVtbl -> put_RedirectDevices(This,fRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectDevices(This,pfRedirectPnPDevices)    \
    ( (This)->lpVtbl -> get_RedirectDevices(This,pfRedirectPnPDevices) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectPOSDevices(This,fRedirectPOSDevices)    \
    ( (This)->lpVtbl -> put_RedirectPOSDevices(This,fRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectPOSDevices(This,pfRedirectPOSDevices)    \
    ( (This)->lpVtbl -> get_RedirectPOSDevices(This,pfRedirectPOSDevices) ) 

#define IMsRdpClientAdvancedSettings7_put_BitmapVirtualCache32BppSize(This,bitmapVirtualCache32BppSize)    \
    ( (This)->lpVtbl -> put_BitmapVirtualCache32BppSize(This,bitmapVirtualCache32BppSize) ) 

#define IMsRdpClientAdvancedSettings7_get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize)    \
    ( (This)->lpVtbl -> get_BitmapVirtualCache32BppSize(This,pBitmapVirtualCache32BppSize) ) 


#define IMsRdpClientAdvancedSettings7_put_RelativeMouseMode(This,fRelativeMouseMode)    \
    ( (This)->lpVtbl -> put_RelativeMouseMode(This,fRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings7_get_RelativeMouseMode(This,pfRelativeMouseMode)    \
    ( (This)->lpVtbl -> get_RelativeMouseMode(This,pfRelativeMouseMode) ) 

#define IMsRdpClientAdvancedSettings7_get_AuthenticationServiceClass(This,pbstrAuthServiceClass)    \
    ( (This)->lpVtbl -> get_AuthenticationServiceClass(This,pbstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings7_put_AuthenticationServiceClass(This,bstrAuthServiceClass)    \
    ( (This)->lpVtbl -> put_AuthenticationServiceClass(This,bstrAuthServiceClass) ) 

#define IMsRdpClientAdvancedSettings7_get_PCB(This,bstrPCB)    \
    ( (This)->lpVtbl -> get_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings7_put_PCB(This,bstrPCB)    \
    ( (This)->lpVtbl -> put_PCB(This,bstrPCB) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyFocusReleaseLeft(This,hotKeyFocusReleaseLeft)    \
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseLeft(This,hotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyFocusReleaseLeft(This,hotKeyFocusReleaseLeft)    \
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseLeft(This,hotKeyFocusReleaseLeft) ) 

#define IMsRdpClientAdvancedSettings7_put_HotKeyFocusReleaseRight(This,hotKeyFocusReleaseRight)    \
    ( (This)->lpVtbl -> put_HotKeyFocusReleaseRight(This,hotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings7_get_HotKeyFocusReleaseRight(This,hotKeyFocusReleaseRight)    \
    ( (This)->lpVtbl -> get_HotKeyFocusReleaseRight(This,hotKeyFocusReleaseRight) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableCredSspSupport(This,fEnableSupport)    \
    ( (This)->lpVtbl -> put_EnableCredSspSupport(This,fEnableSupport) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableCredSspSupport(This,pfEnableSupport)    \
    ( (This)->lpVtbl -> get_EnableCredSspSupport(This,pfEnableSupport) ) 

#define IMsRdpClientAdvancedSettings7_get_AuthenticationType(This,puiAuthType)    \
    ( (This)->lpVtbl -> get_AuthenticationType(This,puiAuthType) ) 

#define IMsRdpClientAdvancedSettings7_put_ConnectToAdministerServer(This,connectToAdministerServer)    \
    ( (This)->lpVtbl -> put_ConnectToAdministerServer(This,connectToAdministerServer) ) 

#define IMsRdpClientAdvancedSettings7_get_ConnectToAdministerServer(This,pConnectToAdministerServer)    \
    ( (This)->lpVtbl -> get_ConnectToAdministerServer(This,pConnectToAdministerServer) ) 


#define IMsRdpClientAdvancedSettings7_put_AudioCaptureRedirectionMode(This,fRedir)    \
    ( (This)->lpVtbl -> put_AudioCaptureRedirectionMode(This,fRedir) ) 

#define IMsRdpClientAdvancedSettings7_get_AudioCaptureRedirectionMode(This,pfRedir)    \
    ( (This)->lpVtbl -> get_AudioCaptureRedirectionMode(This,pfRedir) ) 

#define IMsRdpClientAdvancedSettings7_put_VideoPlaybackMode(This,videoPlaybackMode)    \
    ( (This)->lpVtbl -> put_VideoPlaybackMode(This,videoPlaybackMode) ) 

#define IMsRdpClientAdvancedSettings7_get_VideoPlaybackMode(This,pVideoPlaybackMode)    \
    ( (This)->lpVtbl -> get_VideoPlaybackMode(This,pVideoPlaybackMode) ) 

#define IMsRdpClientAdvancedSettings7_put_EnableSuperPan(This,fEnableSuperPan)    \
    ( (This)->lpVtbl -> put_EnableSuperPan(This,fEnableSuperPan) ) 

#define IMsRdpClientAdvancedSettings7_get_EnableSuperPan(This,pfEnableSuperPan)    \
    ( (This)->lpVtbl -> get_EnableSuperPan(This,pfEnableSuperPan) ) 

#define IMsRdpClientAdvancedSettings7_put_SuperPanAccelerationFactor(This,uAccelFactor)    \
    ( (This)->lpVtbl -> put_SuperPanAccelerationFactor(This,uAccelFactor) ) 

#define IMsRdpClientAdvancedSettings7_get_SuperPanAccelerationFactor(This,puAccelFactor)    \
    ( (This)->lpVtbl -> get_SuperPanAccelerationFactor(This,puAccelFactor) ) 

#define IMsRdpClientAdvancedSettings7_put_NegotiateSecurityLayer(This,fNegotiate)    \
    ( (This)->lpVtbl -> put_NegotiateSecurityLayer(This,fNegotiate) ) 

#define IMsRdpClientAdvancedSettings7_get_NegotiateSecurityLayer(This,pfNegotiate)    \
    ( (This)->lpVtbl -> get_NegotiateSecurityLayer(This,pfNegotiate) ) 

#define IMsRdpClientAdvancedSettings7_put_AudioQualityMode(This,audioQualityMode)    \
    ( (This)->lpVtbl -> put_AudioQualityMode(This,audioQualityMode) ) 

#define IMsRdpClientAdvancedSettings7_get_AudioQualityMode(This,pAudioQualityMode)    \
    ( (This)->lpVtbl -> get_AudioQualityMode(This,pAudioQualityMode) ) 

#define IMsRdpClientAdvancedSettings7_put_RedirectDirectX(This,fRedirectDirectX)    \
    ( (This)->lpVtbl -> put_RedirectDirectX(This,fRedirectDirectX) ) 

#define IMsRdpClientAdvancedSettings7_get_RedirectDirectX(This,pfRedirectDirectX)    \
    ( (This)->lpVtbl -> get_RedirectDirectX(This,pfRedirectDirectX) ) 

#define IMsRdpClientAdvancedSettings7_put_NetworkConnectionType(This,connectionType)    \
    ( (This)->lpVtbl -> put_NetworkConnectionType(This,connectionType) ) 

#define IMsRdpClientAdvancedSettings7_get_NetworkConnectionType(This,pConnectionType)    \
    ( (This)->lpVtbl -> get_NetworkConnectionType(This,pConnectionType) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */



/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_AudioCaptureRedirectionMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ VARIANT_BOOL fRedir);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_AudioCaptureRedirectionMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_AudioCaptureRedirectionMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedir);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_AudioCaptureRedirectionMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_VideoPlaybackMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ UINT videoPlaybackMode);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_VideoPlaybackMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_VideoPlaybackMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ UINT *pVideoPlaybackMode);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_VideoPlaybackMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_EnableSuperPan_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ VARIANT_BOOL fEnableSuperPan);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_EnableSuperPan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_EnableSuperPan_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ VARIANT_BOOL *pfEnableSuperPan);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_EnableSuperPan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_SuperPanAccelerationFactor_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ ULONG uAccelFactor);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_SuperPanAccelerationFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_SuperPanAccelerationFactor_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ ULONG *puAccelFactor);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_SuperPanAccelerationFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_NegotiateSecurityLayer_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ VARIANT_BOOL fNegotiate);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_NegotiateSecurityLayer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_NegotiateSecurityLayer_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ VARIANT_BOOL *pfNegotiate);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_NegotiateSecurityLayer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_AudioQualityMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ UINT audioQualityMode);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_AudioQualityMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_AudioQualityMode_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ UINT *pAudioQualityMode);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_AudioQualityMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_RedirectDirectX_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ VARIANT_BOOL fRedirectDirectX);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_RedirectDirectX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_RedirectDirectX_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ VARIANT_BOOL *pfRedirectDirectX);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_RedirectDirectX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propput] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_put_NetworkConnectionType_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [in] */ UINT connectionType);


void __RPC_STUB IMsRdpClientAdvancedSettings7_put_NetworkConnectionType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id][propget] */ HRESULT STDMETHODCALLTYPE IMsRdpClientAdvancedSettings7_get_NetworkConnectionType_Proxy( 
    IMsRdpClientAdvancedSettings7 * This,
    /* [retval][out] */ UINT *pConnectionType);


void __RPC_STUB IMsRdpClientAdvancedSettings7_get_NetworkConnectionType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif     /* __IMsRdpClientAdvancedSettings7_INTERFACE_DEFINED__ */


#ifndef __IMsTscAx_Redist_INTERFACE_DEFINED__
#define __IMsTscAx_Redist_INTERFACE_DEFINED__

/* interface IMsTscAx_Redist */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsTscAx_Redist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("327bb5cd-834e-4400-aef2-b30e15e5d682")
    IMsTscAx_Redist : public IDispatch
    {
    public:
    };
    
#else     /* C style interface */

    typedef struct IMsTscAx_RedistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscAx_Redist * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscAx_Redist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscAx_Redist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscAx_Redist * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscAx_Redist * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscAx_Redist * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscAx_Redist * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IMsTscAx_RedistVtbl;

    interface IMsTscAx_Redist
    {
        CONST_VTBL struct IMsTscAx_RedistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscAx_Redist_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscAx_Redist_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscAx_Redist_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscAx_Redist_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscAx_Redist_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscAx_Redist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscAx_Redist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsTscAx_Redist_INTERFACE_DEFINED__ */


#ifndef __IMsTscAx_INTERFACE_DEFINED__
#define __IMsTscAx_INTERFACE_DEFINED__

/* interface IMsTscAx */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsTscAx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C11EFAE-92C3-11D1-BC1E-00C04FA31489")
    IMsTscAx : public IMsTscAx_Redist
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ BSTR *pServer) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Domain( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Domain( 
            /* [retval][out] */ BSTR *pDomain) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UserName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ BSTR *pUserName) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DisconnectedText( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DisconnectedText( 
            /* [retval][out] */ BSTR *pDisconnectedText) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectingText( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectingText( 
            /* [retval][out] */ BSTR *pConnectingText) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Connected( 
            /* [retval][out] */ short *pIsConnected) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DesktopWidth( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DesktopWidth( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DesktopHeight( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DesktopHeight( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_StartConnected( 
            /* [in] */ BOOL fStartConnected) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_StartConnected( 
            /* [retval][out] */ BOOL *pfStartConnected) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HorizontalScrollBarVisible( 
            /* [retval][out] */ BOOL *pfHScrollVisible) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_VerticalScrollBarVisible( 
            /* [retval][out] */ BOOL *pfVScrollVisible) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FullScreenTitle( 
            /* [in] */ BSTR fullScreenTitle) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CipherStrength( 
            /* [retval][out] */ LONG *pCipherStrength) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVersion) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SecuredSettingsEnabled( 
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SecuredSettings( 
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings( 
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings) = 0;
        
        virtual /* [hidden][id][propget] */ HRESULT STDMETHODCALLTYPE get_Debugger( 
            /* [retval][out] */ IMsTscDebug **ppDebugger) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Connect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateVirtualChannels( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SendOnVirtualChannel( 
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsTscAxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscAx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscAx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscAx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscAx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscAx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscAx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscAx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsTscAx * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsTscAx * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsTscAx * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsTscAx * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsTscAx * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsTscAx * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsTscAx * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsTscAx * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsTscAx * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsTscAx * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsTscAx * This,
            /* [in] */ BOOL fStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsTscAx * This,
            /* [retval][out] */ BOOL *pfStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsTscAx * This,
            /* [retval][out] */ BOOL *pfHScrollVisible);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsTscAx * This,
            /* [retval][out] */ BOOL *pfVScrollVisible);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsTscAx * This,
            /* [in] */ BSTR fullScreenTitle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsTscAx * This,
            /* [retval][out] */ LONG *pCipherStrength);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsTscAx * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsTscAx * This,
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsTscAx * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsTscAx * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsTscAx * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsTscAx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsTscAx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsTscAx * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsTscAx * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData);
        
        END_INTERFACE
    } IMsTscAxVtbl;

    interface IMsTscAx
    {
        CONST_VTBL struct IMsTscAxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscAx_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscAx_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscAx_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscAx_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscAx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscAx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscAx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsTscAx_put_Server(This,newVal)    \
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsTscAx_get_Server(This,pServer)    \
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsTscAx_put_Domain(This,newVal)    \
    ( (This)->lpVtbl -> put_Domain(This,newVal) ) 

#define IMsTscAx_get_Domain(This,pDomain)    \
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsTscAx_put_UserName(This,newVal)    \
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IMsTscAx_get_UserName(This,pUserName)    \
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsTscAx_put_DisconnectedText(This,newVal)    \
    ( (This)->lpVtbl -> put_DisconnectedText(This,newVal) ) 

#define IMsTscAx_get_DisconnectedText(This,pDisconnectedText)    \
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsTscAx_put_ConnectingText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectingText(This,newVal) ) 

#define IMsTscAx_get_ConnectingText(This,pConnectingText)    \
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsTscAx_get_Connected(This,pIsConnected)    \
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsTscAx_put_DesktopWidth(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopWidth(This,newVal) ) 

#define IMsTscAx_get_DesktopWidth(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsTscAx_put_DesktopHeight(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopHeight(This,newVal) ) 

#define IMsTscAx_get_DesktopHeight(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsTscAx_put_StartConnected(This,fStartConnected)    \
    ( (This)->lpVtbl -> put_StartConnected(This,fStartConnected) ) 

#define IMsTscAx_get_StartConnected(This,pfStartConnected)    \
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsTscAx_get_HorizontalScrollBarVisible(This,pfHScrollVisible)    \
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsTscAx_get_VerticalScrollBarVisible(This,pfVScrollVisible)    \
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsTscAx_put_FullScreenTitle(This,fullScreenTitle)    \
    ( (This)->lpVtbl -> put_FullScreenTitle(This,fullScreenTitle) ) 

#define IMsTscAx_get_CipherStrength(This,pCipherStrength)    \
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsTscAx_get_Version(This,pVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsTscAx_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)    \
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsTscAx_get_SecuredSettings(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsTscAx_get_AdvancedSettings(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsTscAx_get_Debugger(This,ppDebugger)    \
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsTscAx_Connect(This)    \
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsTscAx_Disconnect(This)    \
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsTscAx_CreateVirtualChannels(This,newVal)    \
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsTscAx_SendOnVirtualChannel(This,ChanName,ChanData)    \
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,ChanName,ChanData) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsTscAx_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient_INTERFACE_DEFINED__
#define __IMsRdpClient_INTERFACE_DEFINED__

/* interface IMsRdpClient */
/* [unique][dual][uuid][object] */ 

typedef /* [public][public] */ 
enum __MIDL_IMsRdpClient_0001
    {    exDiscReasonNoInfo    = 0,
    exDiscReasonAPIInitiatedDisconnect    = 0x1,
    exDiscReasonAPIInitiatedLogoff    = 0x2,
    exDiscReasonServerIdleTimeout    = 0x3,
    exDiscReasonServerLogonTimeout    = 0x4,
    exDiscReasonReplacedByOtherConnection    = 0x5,
    exDiscReasonOutOfMemory    = 0x6,
    exDiscReasonServerDeniedConnection    = 0x7,
    exDiscReasonServerDeniedConnectionFips    = 0x8,
    exDiscReasonServerInsufficientPrivileges    = 0x9,
    exDiscReasonServerFreshCredsRequired    = 0xa,
    exDiscReasonLicenseInternal    = 0x100,
    exDiscReasonLicenseNoLicenseServer    = 0x101,
    exDiscReasonLicenseNoLicense    = 0x102,
    exDiscReasonLicenseErrClientMsg    = 0x103,
    exDiscReasonLicenseHwidDoesntMatchLicense    = 0x104,
    exDiscReasonLicenseErrClientLicense    = 0x105,
    exDiscReasonLicenseCantFinishProtocol    = 0x106,
    exDiscReasonLicenseClientEndedProtocol    = 0x107,
    exDiscReasonLicenseErrClientEncryption    = 0x108,
    exDiscReasonLicenseCantUpgradeLicense    = 0x109,
    exDiscReasonLicenseNoRemoteConnections    = 0x10a,
    exDiscReasonRdpEncInvalidCredentials    = 0x300,
    exDiscReasonProtocolRangeStart    = 0x1000,
    exDiscReasonProtocolRangeEnd    = 0x7fff
    }     ExtendedDisconnectReasonCode;

typedef /* [public][public] */ 
enum __MIDL_IMsRdpClient_0002
    {    controlCloseCanProceed    = 0,
    controlCloseWaitForEvents    = 0x1
    }     ControlCloseStatus;


EXTERN_C const IID IID_IMsRdpClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92b4a539-7115-4b7c-a5a9-e5d9efc2780a")
    IMsRdpClient : public IMsTscAx
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorDepth( 
            /* [in] */ LONG colorDepth) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorDepth( 
            /* [retval][out] */ LONG *pcolorDepth) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings2( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SecuredSettings2( 
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedDisconnectReason( 
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FullScreen( 
            /* [in] */ VARIANT_BOOL fFullScreen) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FullScreen( 
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetVirtualChannelOptions( 
            /* [in] */ BSTR ChanName,
            /* [in] */ LONG chanOptions) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetVirtualChannelOptions( 
            /* [in] */ BSTR ChanName,
            /* [retval][out] */ LONG *pChanOptions) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RequestClose( 
            /* [retval][out] */ ControlCloseStatus *pCloseStatus) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient * This,
            /* [in] */ BOOL fStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient * This,
            /* [retval][out] */ BOOL *pfStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient * This,
            /* [retval][out] */ BOOL *pfHScrollVisible);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient * This,
            /* [retval][out] */ BOOL *pfVScrollVisible);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient * This,
            /* [in] */ BSTR fullScreenTitle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient * This,
            /* [retval][out] */ LONG *pCipherStrength);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient * This,
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient * This,
            /* [in] */ LONG colorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient * This,
            /* [retval][out] */ LONG *pcolorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient * This,
            /* [in] */ VARIANT_BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ LONG chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient * This,
            /* [in] */ BSTR ChanName,
            /* [retval][out] */ LONG *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        END_INTERFACE
    } IMsRdpClientVtbl;

    interface IMsRdpClient
    {
        CONST_VTBL struct IMsRdpClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient_put_Server(This,newVal)    \
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsRdpClient_get_Server(This,pServer)    \
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient_put_Domain(This,newVal)    \
    ( (This)->lpVtbl -> put_Domain(This,newVal) ) 

#define IMsRdpClient_get_Domain(This,pDomain)    \
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient_put_UserName(This,newVal)    \
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IMsRdpClient_get_UserName(This,pUserName)    \
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient_put_DisconnectedText(This,newVal)    \
    ( (This)->lpVtbl -> put_DisconnectedText(This,newVal) ) 

#define IMsRdpClient_get_DisconnectedText(This,pDisconnectedText)    \
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient_put_ConnectingText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectingText(This,newVal) ) 

#define IMsRdpClient_get_ConnectingText(This,pConnectingText)    \
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient_get_Connected(This,pIsConnected)    \
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient_put_DesktopWidth(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopWidth(This,newVal) ) 

#define IMsRdpClient_get_DesktopWidth(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient_put_DesktopHeight(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopHeight(This,newVal) ) 

#define IMsRdpClient_get_DesktopHeight(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient_put_StartConnected(This,fStartConnected)    \
    ( (This)->lpVtbl -> put_StartConnected(This,fStartConnected) ) 

#define IMsRdpClient_get_StartConnected(This,pfStartConnected)    \
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient_get_HorizontalScrollBarVisible(This,pfHScrollVisible)    \
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient_get_VerticalScrollBarVisible(This,pfVScrollVisible)    \
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient_put_FullScreenTitle(This,fullScreenTitle)    \
    ( (This)->lpVtbl -> put_FullScreenTitle(This,fullScreenTitle) ) 

#define IMsRdpClient_get_CipherStrength(This,pCipherStrength)    \
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient_get_Version(This,pVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)    \
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient_get_SecuredSettings(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient_get_AdvancedSettings(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient_get_Debugger(This,ppDebugger)    \
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient_Connect(This)    \
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient_Disconnect(This)    \
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient_CreateVirtualChannels(This,newVal)    \
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient_SendOnVirtualChannel(This,ChanName,ChanData)    \
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,ChanName,ChanData) ) 


#define IMsRdpClient_put_ColorDepth(This,colorDepth)    \
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) ) 

#define IMsRdpClient_get_ColorDepth(This,pcolorDepth)    \
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient_get_AdvancedSettings2(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient_get_SecuredSettings2(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)    \
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClient_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient_SetVirtualChannelOptions(This,ChanName,chanOptions)    \
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,ChanName,chanOptions) ) 

#define IMsRdpClient_GetVirtualChannelOptions(This,ChanName,pChanOptions)    \
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,ChanName,pChanOptions) ) 

#define IMsRdpClient_RequestClose(This,pCloseStatus)    \
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mstsax_0000_0026 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_mstsax_0000_0026_0001
    {    disconnectReasonNoInfo    = 0,
    disconnectReasonLocalNotError    = 1,
    disconnectReasonRemoteByUser    = 2,
    disconnectReasonByServer    = 3,
    disconnectReasonDNSLookupFailed    = 260,
    disconnectReasonOutOfMemory    = 262,
    disconnectReasonConnectionTimedOut    = 264,
    disconnectReasonSocketConnectFailed    = 516,
    disconnectReasonOutOfMemory2    = 518,
    disconnectReasonHostNotFound    = 520,
    disconnectReasonWinsockSendFailed    = 772,
    disconnectReasonOutOfMemory3    = 774,
    disconnectReasonInvalidIPAddr    = 776,
    disconnectReasonSocketRecvFailed    = 1028,
    disconnectReasonInvalidSecurityData    = 1030,
    disconnectReasonInternalError    = 1032,
    disconnectReasonInvalidEncryption    = 1286,
    disconnectReasonDNSLookupFailed2    = 1288,
    disconnectReasonGetHostByNameFailed    = 1540,
    disconnectReasonInvalidServerSecurityInfo    = 1542,
    disconnectReasonTimerError    = 1544,
    disconnectReasonTimeoutOccurred    = 1796,
    disconnectReasonServerCertificateUnpackErr    = 1798,
    disconnectReasonInvalidIP    = 2052,
    disconnectReasonLicensingFailed    = 2056,
    disconnectReasonInternalSecurityError    = 2310,
    disconnectReasonAtClientWinsockFDCLOSE    = 2308,
    disconnectReasonLicensingTimeout    = 2312,
    disconnectReasonInternalSecurityError2    = 2566,
    disconnectReasonEncryptionError    = 2822,
    disconnectReasonDecryptionError    = 3078,
    disconnectReasonClientDecompressionError    = 3080
    }     DisconnectReasonCode;



extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0026_v0_0_s_ifspec;

#ifndef __IMsRdpClient2_INTERFACE_DEFINED__
#define __IMsRdpClient2_INTERFACE_DEFINED__

/* interface IMsRdpClient2 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e7e17dc4-3b71-4ba7-a8e6-281ffadca28f")
    IMsRdpClient2 : public IMsRdpClient
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings3( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectedStatusText( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectedStatusText( 
            /* [retval][out] */ BSTR *pConnectedStatusText) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClient2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient2 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient2 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient2 * This,
            /* [in] */ BOOL fStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BOOL *pfStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BOOL *pfHScrollVisible);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BOOL *pfVScrollVisible);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR fullScreenTitle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ LONG *pCipherStrength);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient2 * This,
            /* [in] */ LONG colorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ LONG *pcolorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient2 * This,
            /* [in] */ VARIANT_BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ LONG chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR ChanName,
            /* [retval][out] */ LONG *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient2 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient2 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        END_INTERFACE
    } IMsRdpClient2Vtbl;

    interface IMsRdpClient2
    {
        CONST_VTBL struct IMsRdpClient2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient2_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient2_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient2_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient2_put_Server(This,newVal)    \
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsRdpClient2_get_Server(This,pServer)    \
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient2_put_Domain(This,newVal)    \
    ( (This)->lpVtbl -> put_Domain(This,newVal) ) 

#define IMsRdpClient2_get_Domain(This,pDomain)    \
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient2_put_UserName(This,newVal)    \
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IMsRdpClient2_get_UserName(This,pUserName)    \
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient2_put_DisconnectedText(This,newVal)    \
    ( (This)->lpVtbl -> put_DisconnectedText(This,newVal) ) 

#define IMsRdpClient2_get_DisconnectedText(This,pDisconnectedText)    \
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient2_put_ConnectingText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectingText(This,newVal) ) 

#define IMsRdpClient2_get_ConnectingText(This,pConnectingText)    \
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient2_get_Connected(This,pIsConnected)    \
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient2_put_DesktopWidth(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopWidth(This,newVal) ) 

#define IMsRdpClient2_get_DesktopWidth(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient2_put_DesktopHeight(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopHeight(This,newVal) ) 

#define IMsRdpClient2_get_DesktopHeight(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient2_put_StartConnected(This,fStartConnected)    \
    ( (This)->lpVtbl -> put_StartConnected(This,fStartConnected) ) 

#define IMsRdpClient2_get_StartConnected(This,pfStartConnected)    \
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient2_get_HorizontalScrollBarVisible(This,pfHScrollVisible)    \
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient2_get_VerticalScrollBarVisible(This,pfVScrollVisible)    \
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient2_put_FullScreenTitle(This,fullScreenTitle)    \
    ( (This)->lpVtbl -> put_FullScreenTitle(This,fullScreenTitle) ) 

#define IMsRdpClient2_get_CipherStrength(This,pCipherStrength)    \
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient2_get_Version(This,pVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient2_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)    \
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient2_get_SecuredSettings(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient2_get_AdvancedSettings(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient2_get_Debugger(This,ppDebugger)    \
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient2_Connect(This)    \
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient2_Disconnect(This)    \
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient2_CreateVirtualChannels(This,newVal)    \
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient2_SendOnVirtualChannel(This,ChanName,ChanData)    \
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,ChanName,ChanData) ) 


#define IMsRdpClient2_put_ColorDepth(This,colorDepth)    \
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) ) 

#define IMsRdpClient2_get_ColorDepth(This,pcolorDepth)    \
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient2_get_AdvancedSettings2(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient2_get_SecuredSettings2(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient2_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)    \
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient2_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClient2_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient2_SetVirtualChannelOptions(This,ChanName,chanOptions)    \
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,ChanName,chanOptions) ) 

#define IMsRdpClient2_GetVirtualChannelOptions(This,ChanName,pChanOptions)    \
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,ChanName,pChanOptions) ) 

#define IMsRdpClient2_RequestClose(This,pCloseStatus)    \
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient2_get_AdvancedSettings3(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient2_put_ConnectedStatusText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,newVal) ) 

#define IMsRdpClient2_get_ConnectedStatusText(This,pConnectedStatusText)    \
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClient2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mstsax_0000_0027 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_mstsax_0000_0027_0001
    {    autoReconnectContinueAutomatic    = 0,
    autoReconnectContinueStop    = 1,
    autoReconnectContinueManual    = 2
    }     AutoReconnectContinueState;



extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0027_v0_0_s_ifspec;

#ifndef __IMsRdpClient3_INTERFACE_DEFINED__
#define __IMsRdpClient3_INTERFACE_DEFINED__

/* interface IMsRdpClient3 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91b7cbc5-a72e-4fa0-9300-d647d7e897ff")
    IMsRdpClient3 : public IMsRdpClient2
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings4( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClient3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient3 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient3 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient3 * This,
            /* [in] */ BOOL fStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BOOL *pfStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BOOL *pfHScrollVisible);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BOOL *pfVScrollVisible);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR fullScreenTitle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ LONG *pCipherStrength);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient3 * This,
            /* [in] */ LONG colorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ LONG *pcolorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient3 * This,
            /* [in] */ VARIANT_BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ LONG chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR ChanName,
            /* [retval][out] */ LONG *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient3 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient3 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        END_INTERFACE
    } IMsRdpClient3Vtbl;

    interface IMsRdpClient3
    {
        CONST_VTBL struct IMsRdpClient3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient3_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient3_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient3_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient3_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient3_put_Server(This,newVal)    \
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsRdpClient3_get_Server(This,pServer)    \
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient3_put_Domain(This,newVal)    \
    ( (This)->lpVtbl -> put_Domain(This,newVal) ) 

#define IMsRdpClient3_get_Domain(This,pDomain)    \
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient3_put_UserName(This,newVal)    \
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IMsRdpClient3_get_UserName(This,pUserName)    \
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient3_put_DisconnectedText(This,newVal)    \
    ( (This)->lpVtbl -> put_DisconnectedText(This,newVal) ) 

#define IMsRdpClient3_get_DisconnectedText(This,pDisconnectedText)    \
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient3_put_ConnectingText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectingText(This,newVal) ) 

#define IMsRdpClient3_get_ConnectingText(This,pConnectingText)    \
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient3_get_Connected(This,pIsConnected)    \
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient3_put_DesktopWidth(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopWidth(This,newVal) ) 

#define IMsRdpClient3_get_DesktopWidth(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient3_put_DesktopHeight(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopHeight(This,newVal) ) 

#define IMsRdpClient3_get_DesktopHeight(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient3_put_StartConnected(This,fStartConnected)    \
    ( (This)->lpVtbl -> put_StartConnected(This,fStartConnected) ) 

#define IMsRdpClient3_get_StartConnected(This,pfStartConnected)    \
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient3_get_HorizontalScrollBarVisible(This,pfHScrollVisible)    \
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient3_get_VerticalScrollBarVisible(This,pfVScrollVisible)    \
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient3_put_FullScreenTitle(This,fullScreenTitle)    \
    ( (This)->lpVtbl -> put_FullScreenTitle(This,fullScreenTitle) ) 

#define IMsRdpClient3_get_CipherStrength(This,pCipherStrength)    \
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient3_get_Version(This,pVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient3_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)    \
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient3_get_SecuredSettings(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient3_get_AdvancedSettings(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient3_get_Debugger(This,ppDebugger)    \
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient3_Connect(This)    \
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient3_Disconnect(This)    \
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient3_CreateVirtualChannels(This,newVal)    \
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient3_SendOnVirtualChannel(This,ChanName,ChanData)    \
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,ChanName,ChanData) ) 


#define IMsRdpClient3_put_ColorDepth(This,colorDepth)    \
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) ) 

#define IMsRdpClient3_get_ColorDepth(This,pcolorDepth)    \
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient3_get_AdvancedSettings2(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient3_get_SecuredSettings2(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient3_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)    \
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient3_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClient3_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient3_SetVirtualChannelOptions(This,ChanName,chanOptions)    \
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,ChanName,chanOptions) ) 

#define IMsRdpClient3_GetVirtualChannelOptions(This,ChanName,pChanOptions)    \
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,ChanName,pChanOptions) ) 

#define IMsRdpClient3_RequestClose(This,pCloseStatus)    \
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient3_get_AdvancedSettings3(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient3_put_ConnectedStatusText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,newVal) ) 

#define IMsRdpClient3_get_ConnectedStatusText(This,pConnectedStatusText)    \
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient3_get_AdvancedSettings4(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClient3_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient4_INTERFACE_DEFINED__
#define __IMsRdpClient4_INTERFACE_DEFINED__

/* interface IMsRdpClient4 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("095E0738-D97D-488b-B9F6-DD0E8D66C0DE")
    IMsRdpClient4 : public IMsRdpClient3
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings5( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClient4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient4 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient4 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient4 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient4 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient4 * This,
            /* [in] */ BOOL fStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BOOL *pfStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BOOL *pfHScrollVisible);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BOOL *pfVScrollVisible);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR fullScreenTitle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ LONG *pCipherStrength);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient4 * This,
            /* [in] */ LONG colorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ LONG *pcolorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient4 * This,
            /* [in] */ VARIANT_BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ LONG chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR ChanName,
            /* [retval][out] */ LONG *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient4 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient4 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        END_INTERFACE
    } IMsRdpClient4Vtbl;

    interface IMsRdpClient4
    {
        CONST_VTBL struct IMsRdpClient4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient4_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient4_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient4_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient4_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient4_put_Server(This,newVal)    \
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsRdpClient4_get_Server(This,pServer)    \
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient4_put_Domain(This,newVal)    \
    ( (This)->lpVtbl -> put_Domain(This,newVal) ) 

#define IMsRdpClient4_get_Domain(This,pDomain)    \
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient4_put_UserName(This,newVal)    \
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IMsRdpClient4_get_UserName(This,pUserName)    \
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient4_put_DisconnectedText(This,newVal)    \
    ( (This)->lpVtbl -> put_DisconnectedText(This,newVal) ) 

#define IMsRdpClient4_get_DisconnectedText(This,pDisconnectedText)    \
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient4_put_ConnectingText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectingText(This,newVal) ) 

#define IMsRdpClient4_get_ConnectingText(This,pConnectingText)    \
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient4_get_Connected(This,pIsConnected)    \
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient4_put_DesktopWidth(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopWidth(This,newVal) ) 

#define IMsRdpClient4_get_DesktopWidth(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient4_put_DesktopHeight(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopHeight(This,newVal) ) 

#define IMsRdpClient4_get_DesktopHeight(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient4_put_StartConnected(This,fStartConnected)    \
    ( (This)->lpVtbl -> put_StartConnected(This,fStartConnected) ) 

#define IMsRdpClient4_get_StartConnected(This,pfStartConnected)    \
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient4_get_HorizontalScrollBarVisible(This,pfHScrollVisible)    \
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient4_get_VerticalScrollBarVisible(This,pfVScrollVisible)    \
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient4_put_FullScreenTitle(This,fullScreenTitle)    \
    ( (This)->lpVtbl -> put_FullScreenTitle(This,fullScreenTitle) ) 

#define IMsRdpClient4_get_CipherStrength(This,pCipherStrength)    \
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient4_get_Version(This,pVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient4_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)    \
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient4_get_SecuredSettings(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient4_get_AdvancedSettings(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient4_get_Debugger(This,ppDebugger)    \
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient4_Connect(This)    \
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient4_Disconnect(This)    \
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient4_CreateVirtualChannels(This,newVal)    \
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient4_SendOnVirtualChannel(This,ChanName,ChanData)    \
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,ChanName,ChanData) ) 


#define IMsRdpClient4_put_ColorDepth(This,colorDepth)    \
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) ) 

#define IMsRdpClient4_get_ColorDepth(This,pcolorDepth)    \
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient4_get_AdvancedSettings2(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient4_get_SecuredSettings2(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient4_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)    \
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient4_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClient4_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient4_SetVirtualChannelOptions(This,ChanName,chanOptions)    \
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,ChanName,chanOptions) ) 

#define IMsRdpClient4_GetVirtualChannelOptions(This,ChanName,pChanOptions)    \
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,ChanName,pChanOptions) ) 

#define IMsRdpClient4_RequestClose(This,pCloseStatus)    \
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient4_get_AdvancedSettings3(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient4_put_ConnectedStatusText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,newVal) ) 

#define IMsRdpClient4_get_ConnectedStatusText(This,pConnectedStatusText)    \
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient4_get_AdvancedSettings4(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient4_get_AdvancedSettings5(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClient4_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient5_INTERFACE_DEFINED__
#define __IMsRdpClient5_INTERFACE_DEFINED__

/* interface IMsRdpClient5 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4eb5335b-6429-477d-b922-e06a28ecd8bf")
    IMsRdpClient5 : public IMsRdpClient4
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings6( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetErrorDescription( 
            /* [in] */ UINT disconnectReason,
            /* [in] */ UINT extendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClient5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient5 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient5 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient5 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient5 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient5 * This,
            /* [in] */ BOOL fStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BOOL *pfStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BOOL *pfHScrollVisible);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BOOL *pfVScrollVisible);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR fullScreenTitle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ LONG *pCipherStrength);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient5 * This,
            /* [in] */ LONG colorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ LONG *pcolorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient5 * This,
            /* [in] */ VARIANT_BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ LONG chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR ChanName,
            /* [retval][out] */ LONG *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient5 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings6 )( 
            IMsRdpClient5 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsRdpClient5 * This,
            /* [in] */ UINT disconnectReason,
            /* [in] */ UINT extendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg);
        
        END_INTERFACE
    } IMsRdpClient5Vtbl;

    interface IMsRdpClient5
    {
        CONST_VTBL struct IMsRdpClient5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient5_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient5_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient5_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient5_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient5_put_Server(This,newVal)    \
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsRdpClient5_get_Server(This,pServer)    \
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient5_put_Domain(This,newVal)    \
    ( (This)->lpVtbl -> put_Domain(This,newVal) ) 

#define IMsRdpClient5_get_Domain(This,pDomain)    \
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient5_put_UserName(This,newVal)    \
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IMsRdpClient5_get_UserName(This,pUserName)    \
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient5_put_DisconnectedText(This,newVal)    \
    ( (This)->lpVtbl -> put_DisconnectedText(This,newVal) ) 

#define IMsRdpClient5_get_DisconnectedText(This,pDisconnectedText)    \
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient5_put_ConnectingText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectingText(This,newVal) ) 

#define IMsRdpClient5_get_ConnectingText(This,pConnectingText)    \
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient5_get_Connected(This,pIsConnected)    \
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient5_put_DesktopWidth(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopWidth(This,newVal) ) 

#define IMsRdpClient5_get_DesktopWidth(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient5_put_DesktopHeight(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopHeight(This,newVal) ) 

#define IMsRdpClient5_get_DesktopHeight(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient5_put_StartConnected(This,fStartConnected)    \
    ( (This)->lpVtbl -> put_StartConnected(This,fStartConnected) ) 

#define IMsRdpClient5_get_StartConnected(This,pfStartConnected)    \
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient5_get_HorizontalScrollBarVisible(This,pfHScrollVisible)    \
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient5_get_VerticalScrollBarVisible(This,pfVScrollVisible)    \
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient5_put_FullScreenTitle(This,fullScreenTitle)    \
    ( (This)->lpVtbl -> put_FullScreenTitle(This,fullScreenTitle) ) 

#define IMsRdpClient5_get_CipherStrength(This,pCipherStrength)    \
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient5_get_Version(This,pVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient5_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)    \
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient5_get_SecuredSettings(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient5_get_AdvancedSettings(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient5_get_Debugger(This,ppDebugger)    \
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient5_Connect(This)    \
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient5_Disconnect(This)    \
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient5_CreateVirtualChannels(This,newVal)    \
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient5_SendOnVirtualChannel(This,ChanName,ChanData)    \
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,ChanName,ChanData) ) 


#define IMsRdpClient5_put_ColorDepth(This,colorDepth)    \
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) ) 

#define IMsRdpClient5_get_ColorDepth(This,pcolorDepth)    \
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient5_get_AdvancedSettings2(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient5_get_SecuredSettings2(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient5_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)    \
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient5_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClient5_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient5_SetVirtualChannelOptions(This,ChanName,chanOptions)    \
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,ChanName,chanOptions) ) 

#define IMsRdpClient5_GetVirtualChannelOptions(This,ChanName,pChanOptions)    \
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,ChanName,pChanOptions) ) 

#define IMsRdpClient5_RequestClose(This,pCloseStatus)    \
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient5_get_AdvancedSettings3(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient5_put_ConnectedStatusText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,newVal) ) 

#define IMsRdpClient5_get_ConnectedStatusText(This,pConnectedStatusText)    \
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient5_get_AdvancedSettings4(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient5_get_AdvancedSettings5(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 


#define IMsRdpClient5_get_AdvancedSettings6(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings6(This,ppAdvSettings) ) 

#define IMsRdpClient5_GetErrorDescription(This,disconnectReason,extendedDisconnectReason,pBstrErrorMsg)    \
    ( (This)->lpVtbl -> GetErrorDescription(This,disconnectReason,extendedDisconnectReason,pBstrErrorMsg) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClient5_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient6_INTERFACE_DEFINED__
#define __IMsRdpClient6_INTERFACE_DEFINED__

/* interface IMsRdpClient6 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d43b7d80-8517-4b6d-9eac-96ad6800d7f2")
    IMsRdpClient6 : public IMsRdpClient5
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings7( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings6 **ppAdvSettings) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClient6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient6 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient6 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient6 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient6 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient6 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient6 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient6 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient6 * This,
            /* [in] */ BOOL fStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BOOL *pfStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BOOL *pfHScrollVisible);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BOOL *pfVScrollVisible);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR fullScreenTitle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ LONG *pCipherStrength);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient6 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient6 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient6 * This,
            /* [in] */ LONG colorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ LONG *pcolorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient6 * This,
            /* [in] */ VARIANT_BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ LONG chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR ChanName,
            /* [retval][out] */ LONG *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient6 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings6 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsRdpClient6 * This,
            /* [in] */ UINT disconnectReason,
            /* [in] */ UINT extendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings7 )( 
            IMsRdpClient6 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings6 **ppAdvSettings);
        
        END_INTERFACE
    } IMsRdpClient6Vtbl;

    interface IMsRdpClient6
    {
        CONST_VTBL struct IMsRdpClient6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient6_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient6_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient6_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient6_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient6_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient6_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient6_put_Server(This,newVal)    \
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsRdpClient6_get_Server(This,pServer)    \
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient6_put_Domain(This,newVal)    \
    ( (This)->lpVtbl -> put_Domain(This,newVal) ) 

#define IMsRdpClient6_get_Domain(This,pDomain)    \
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient6_put_UserName(This,newVal)    \
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IMsRdpClient6_get_UserName(This,pUserName)    \
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient6_put_DisconnectedText(This,newVal)    \
    ( (This)->lpVtbl -> put_DisconnectedText(This,newVal) ) 

#define IMsRdpClient6_get_DisconnectedText(This,pDisconnectedText)    \
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient6_put_ConnectingText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectingText(This,newVal) ) 

#define IMsRdpClient6_get_ConnectingText(This,pConnectingText)    \
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient6_get_Connected(This,pIsConnected)    \
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient6_put_DesktopWidth(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopWidth(This,newVal) ) 

#define IMsRdpClient6_get_DesktopWidth(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient6_put_DesktopHeight(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopHeight(This,newVal) ) 

#define IMsRdpClient6_get_DesktopHeight(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient6_put_StartConnected(This,fStartConnected)    \
    ( (This)->lpVtbl -> put_StartConnected(This,fStartConnected) ) 

#define IMsRdpClient6_get_StartConnected(This,pfStartConnected)    \
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient6_get_HorizontalScrollBarVisible(This,pfHScrollVisible)    \
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient6_get_VerticalScrollBarVisible(This,pfVScrollVisible)    \
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient6_put_FullScreenTitle(This,fullScreenTitle)    \
    ( (This)->lpVtbl -> put_FullScreenTitle(This,fullScreenTitle) ) 

#define IMsRdpClient6_get_CipherStrength(This,pCipherStrength)    \
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient6_get_Version(This,pVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient6_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)    \
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient6_get_SecuredSettings(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient6_get_AdvancedSettings(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient6_get_Debugger(This,ppDebugger)    \
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient6_Connect(This)    \
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient6_Disconnect(This)    \
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient6_CreateVirtualChannels(This,newVal)    \
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient6_SendOnVirtualChannel(This,ChanName,ChanData)    \
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,ChanName,ChanData) ) 


#define IMsRdpClient6_put_ColorDepth(This,colorDepth)    \
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) ) 

#define IMsRdpClient6_get_ColorDepth(This,pcolorDepth)    \
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient6_get_AdvancedSettings2(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient6_get_SecuredSettings2(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient6_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)    \
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient6_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClient6_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient6_SetVirtualChannelOptions(This,ChanName,chanOptions)    \
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,ChanName,chanOptions) ) 

#define IMsRdpClient6_GetVirtualChannelOptions(This,ChanName,pChanOptions)    \
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,ChanName,pChanOptions) ) 

#define IMsRdpClient6_RequestClose(This,pCloseStatus)    \
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient6_get_AdvancedSettings3(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient6_put_ConnectedStatusText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,newVal) ) 

#define IMsRdpClient6_get_ConnectedStatusText(This,pConnectedStatusText)    \
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient6_get_AdvancedSettings4(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient6_get_AdvancedSettings5(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 


#define IMsRdpClient6_get_AdvancedSettings6(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings6(This,ppAdvSettings) ) 

#define IMsRdpClient6_GetErrorDescription(This,disconnectReason,extendedDisconnectReason,pBstrErrorMsg)    \
    ( (This)->lpVtbl -> GetErrorDescription(This,disconnectReason,extendedDisconnectReason,pBstrErrorMsg) ) 


#define IMsRdpClient6_get_AdvancedSettings7(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings7(This,ppAdvSettings) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClient6_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClient7_INTERFACE_DEFINED__
#define __IMsRdpClient7_INTERFACE_DEFINED__

/* interface IMsRdpClient7 */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClient7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b2a5b5ce-3461-444a-91d4-add26d070638")
    IMsRdpClient7 : public IMsRdpClient6
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_AdvancedSettings8( 
            /* [retval][out] */ IMsRdpClientAdvancedSettings7 **ppAdvSettings) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetStatusText( 
            /* [in] */ UINT statusCode,
            /* [retval][out] */ BSTR *pBstrStatusText) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_SecuredSettings3( 
            /* [retval][out] */ IMsRdpClientSecuredSettings2 **ppSecuredSettings) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClient7Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClient7 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClient7 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClient7 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsRdpClient7 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsRdpClient7 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsRdpClient7 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsRdpClient7 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pServer);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Domain )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Domain )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pDomain);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pUserName);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pDisconnectedText);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectingText )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectingText )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pConnectingText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ short *pIsConnected);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopWidth )( 
            IMsRdpClient7 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopWidth )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopHeight )( 
            IMsRdpClient7 * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopHeight )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartConnected )( 
            IMsRdpClient7 * This,
            /* [in] */ BOOL fStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartConnected )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BOOL *pfStartConnected);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollBarVisible )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BOOL *pfHScrollVisible);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollBarVisible )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BOOL *pfVScrollVisible);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreenTitle )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR fullScreenTitle);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CipherStrength )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ LONG *pCipherStrength);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pVersion);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettingsEnabled )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BOOL *pSecuredSettingsEnabled);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsTscSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsTscAdvancedSettings **ppAdvSettings);
        
        /* [hidden][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Debugger )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsTscDebug **ppDebugger);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Connect )( 
            IMsRdpClient7 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IMsRdpClient7 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannels )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SendOnVirtualChannel )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BSTR ChanData);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            IMsRdpClient7 * This,
            /* [in] */ LONG colorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ LONG *pcolorDepth);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings2 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings2 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings **ppSecuredSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedDisconnectReason )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ ExtendedDisconnectReasonCode *pExtendedDisconnectReason);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FullScreen )( 
            IMsRdpClient7 * This,
            /* [in] */ VARIANT_BOOL fFullScreen);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullScreen )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ VARIANT_BOOL *pfFullScreen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetVirtualChannelOptions )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ LONG chanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelOptions )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR ChanName,
            /* [retval][out] */ LONG *pChanOptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RequestClose )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ ControlCloseStatus *pCloseStatus);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings3 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings2 **ppAdvSettings);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectedStatusText )( 
            IMsRdpClient7 * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectedStatusText )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ BSTR *pConnectedStatusText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings4 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings3 **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings5 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings4 **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings6 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings5 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )( 
            IMsRdpClient7 * This,
            /* [in] */ UINT disconnectReason,
            /* [in] */ UINT extendedDisconnectReason,
            /* [retval][out] */ BSTR *pBstrErrorMsg);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings7 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings6 **ppAdvSettings);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings8 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientAdvancedSettings7 **ppAdvSettings);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusText )( 
            IMsRdpClient7 * This,
            /* [in] */ UINT statusCode,
            /* [retval][out] */ BSTR *pBstrStatusText);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecuredSettings3 )( 
            IMsRdpClient7 * This,
            /* [retval][out] */ IMsRdpClientSecuredSettings2 **ppSecuredSettings);
        
        END_INTERFACE
    } IMsRdpClient7Vtbl;

    interface IMsRdpClient7
    {
        CONST_VTBL struct IMsRdpClient7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClient7_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClient7_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClient7_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClient7_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsRdpClient7_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsRdpClient7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsRdpClient7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 



#define IMsRdpClient7_put_Server(This,newVal)    \
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#define IMsRdpClient7_get_Server(This,pServer)    \
    ( (This)->lpVtbl -> get_Server(This,pServer) ) 

#define IMsRdpClient7_put_Domain(This,newVal)    \
    ( (This)->lpVtbl -> put_Domain(This,newVal) ) 

#define IMsRdpClient7_get_Domain(This,pDomain)    \
    ( (This)->lpVtbl -> get_Domain(This,pDomain) ) 

#define IMsRdpClient7_put_UserName(This,newVal)    \
    ( (This)->lpVtbl -> put_UserName(This,newVal) ) 

#define IMsRdpClient7_get_UserName(This,pUserName)    \
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IMsRdpClient7_put_DisconnectedText(This,newVal)    \
    ( (This)->lpVtbl -> put_DisconnectedText(This,newVal) ) 

#define IMsRdpClient7_get_DisconnectedText(This,pDisconnectedText)    \
    ( (This)->lpVtbl -> get_DisconnectedText(This,pDisconnectedText) ) 

#define IMsRdpClient7_put_ConnectingText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectingText(This,newVal) ) 

#define IMsRdpClient7_get_ConnectingText(This,pConnectingText)    \
    ( (This)->lpVtbl -> get_ConnectingText(This,pConnectingText) ) 

#define IMsRdpClient7_get_Connected(This,pIsConnected)    \
    ( (This)->lpVtbl -> get_Connected(This,pIsConnected) ) 

#define IMsRdpClient7_put_DesktopWidth(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopWidth(This,newVal) ) 

#define IMsRdpClient7_get_DesktopWidth(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopWidth(This,pVal) ) 

#define IMsRdpClient7_put_DesktopHeight(This,newVal)    \
    ( (This)->lpVtbl -> put_DesktopHeight(This,newVal) ) 

#define IMsRdpClient7_get_DesktopHeight(This,pVal)    \
    ( (This)->lpVtbl -> get_DesktopHeight(This,pVal) ) 

#define IMsRdpClient7_put_StartConnected(This,fStartConnected)    \
    ( (This)->lpVtbl -> put_StartConnected(This,fStartConnected) ) 

#define IMsRdpClient7_get_StartConnected(This,pfStartConnected)    \
    ( (This)->lpVtbl -> get_StartConnected(This,pfStartConnected) ) 

#define IMsRdpClient7_get_HorizontalScrollBarVisible(This,pfHScrollVisible)    \
    ( (This)->lpVtbl -> get_HorizontalScrollBarVisible(This,pfHScrollVisible) ) 

#define IMsRdpClient7_get_VerticalScrollBarVisible(This,pfVScrollVisible)    \
    ( (This)->lpVtbl -> get_VerticalScrollBarVisible(This,pfVScrollVisible) ) 

#define IMsRdpClient7_put_FullScreenTitle(This,fullScreenTitle)    \
    ( (This)->lpVtbl -> put_FullScreenTitle(This,fullScreenTitle) ) 

#define IMsRdpClient7_get_CipherStrength(This,pCipherStrength)    \
    ( (This)->lpVtbl -> get_CipherStrength(This,pCipherStrength) ) 

#define IMsRdpClient7_get_Version(This,pVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pVersion) ) 

#define IMsRdpClient7_get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled)    \
    ( (This)->lpVtbl -> get_SecuredSettingsEnabled(This,pSecuredSettingsEnabled) ) 

#define IMsRdpClient7_get_SecuredSettings(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings(This,ppSecuredSettings) ) 

#define IMsRdpClient7_get_AdvancedSettings(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings(This,ppAdvSettings) ) 

#define IMsRdpClient7_get_Debugger(This,ppDebugger)    \
    ( (This)->lpVtbl -> get_Debugger(This,ppDebugger) ) 

#define IMsRdpClient7_Connect(This)    \
    ( (This)->lpVtbl -> Connect(This) ) 

#define IMsRdpClient7_Disconnect(This)    \
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IMsRdpClient7_CreateVirtualChannels(This,newVal)    \
    ( (This)->lpVtbl -> CreateVirtualChannels(This,newVal) ) 

#define IMsRdpClient7_SendOnVirtualChannel(This,ChanName,ChanData)    \
    ( (This)->lpVtbl -> SendOnVirtualChannel(This,ChanName,ChanData) ) 


#define IMsRdpClient7_put_ColorDepth(This,colorDepth)    \
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) ) 

#define IMsRdpClient7_get_ColorDepth(This,pcolorDepth)    \
    ( (This)->lpVtbl -> get_ColorDepth(This,pcolorDepth) ) 

#define IMsRdpClient7_get_AdvancedSettings2(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings2(This,ppAdvSettings) ) 

#define IMsRdpClient7_get_SecuredSettings2(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings2(This,ppSecuredSettings) ) 

#define IMsRdpClient7_get_ExtendedDisconnectReason(This,pExtendedDisconnectReason)    \
    ( (This)->lpVtbl -> get_ExtendedDisconnectReason(This,pExtendedDisconnectReason) ) 

#define IMsRdpClient7_put_FullScreen(This,fFullScreen)    \
    ( (This)->lpVtbl -> put_FullScreen(This,fFullScreen) ) 

#define IMsRdpClient7_get_FullScreen(This,pfFullScreen)    \
    ( (This)->lpVtbl -> get_FullScreen(This,pfFullScreen) ) 

#define IMsRdpClient7_SetVirtualChannelOptions(This,ChanName,chanOptions)    \
    ( (This)->lpVtbl -> SetVirtualChannelOptions(This,ChanName,chanOptions) ) 

#define IMsRdpClient7_GetVirtualChannelOptions(This,ChanName,pChanOptions)    \
    ( (This)->lpVtbl -> GetVirtualChannelOptions(This,ChanName,pChanOptions) ) 

#define IMsRdpClient7_RequestClose(This,pCloseStatus)    \
    ( (This)->lpVtbl -> RequestClose(This,pCloseStatus) ) 


#define IMsRdpClient7_get_AdvancedSettings3(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings3(This,ppAdvSettings) ) 

#define IMsRdpClient7_put_ConnectedStatusText(This,newVal)    \
    ( (This)->lpVtbl -> put_ConnectedStatusText(This,newVal) ) 

#define IMsRdpClient7_get_ConnectedStatusText(This,pConnectedStatusText)    \
    ( (This)->lpVtbl -> get_ConnectedStatusText(This,pConnectedStatusText) ) 


#define IMsRdpClient7_get_AdvancedSettings4(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings4(This,ppAdvSettings) ) 


#define IMsRdpClient7_get_AdvancedSettings5(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings5(This,ppAdvSettings) ) 


#define IMsRdpClient7_get_AdvancedSettings6(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings6(This,ppAdvSettings) ) 

#define IMsRdpClient7_GetErrorDescription(This,disconnectReason,extendedDisconnectReason,pBstrErrorMsg)    \
    ( (This)->lpVtbl -> GetErrorDescription(This,disconnectReason,extendedDisconnectReason,pBstrErrorMsg) ) 


#define IMsRdpClient7_get_AdvancedSettings7(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings7(This,ppAdvSettings) ) 


#define IMsRdpClient7_get_AdvancedSettings8(This,ppAdvSettings)    \
    ( (This)->lpVtbl -> get_AdvancedSettings8(This,ppAdvSettings) ) 

#define IMsRdpClient7_GetStatusText(This,statusCode,pBstrStatusText)    \
    ( (This)->lpVtbl -> GetStatusText(This,statusCode,pBstrStatusText) ) 

#define IMsRdpClient7_get_SecuredSettings3(This,ppSecuredSettings)    \
    ( (This)->lpVtbl -> get_SecuredSettings3(This,ppSecuredSettings) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClient7_INTERFACE_DEFINED__ */


#ifndef __IMsRdpClientEncoderServices_INTERFACE_DEFINED__
#define __IMsRdpClientEncoderServices_INTERFACE_DEFINED__

/* interface IMsRdpClientEncoderServices */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpClientEncoderServices;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f7cb0498-fbfe-44a2-99f9-59e59c05fd15")
    IMsRdpClientEncoderServices : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetWriteCompletionOptions( 
            /* [in] */ BSTR ChanName,
            /* [in] */ BOOL fNotifyWrite,
            /* [in] */ ULONG cbSize) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpClientEncoderServicesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpClientEncoderServices * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpClientEncoderServices * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpClientEncoderServices * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetWriteCompletionOptions )( 
            IMsRdpClientEncoderServices * This,
            /* [in] */ BSTR ChanName,
            /* [in] */ BOOL fNotifyWrite,
            /* [in] */ ULONG cbSize);
        
        END_INTERFACE
    } IMsRdpClientEncoderServicesVtbl;

    interface IMsRdpClientEncoderServices
    {
        CONST_VTBL struct IMsRdpClientEncoderServicesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpClientEncoderServices_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpClientEncoderServices_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpClientEncoderServices_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpClientEncoderServices_SetWriteCompletionOptions(This,ChanName,fNotifyWrite,cbSize)    \
    ( (This)->lpVtbl -> SetWriteCompletionOptions(This,ChanName,fNotifyWrite,cbSize) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpClientEncoderServices_INTERFACE_DEFINED__ */


#ifndef __IMsRdpPreferredRedirectionInfo_INTERFACE_DEFINED__
#define __IMsRdpPreferredRedirectionInfo_INTERFACE_DEFINED__

/* interface IMsRdpPreferredRedirectionInfo */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMsRdpPreferredRedirectionInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FDD029F9-9574-4DEF-8529-64B521CCCAA4")
    IMsRdpPreferredRedirectionInfo : public IUnknown
    {
    public:
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseRedirectionServerName( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseRedirectionServerName( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
#else     /* C style interface */

    typedef struct IMsRdpPreferredRedirectionInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsRdpPreferredRedirectionInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsRdpPreferredRedirectionInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsRdpPreferredRedirectionInfo * This);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseRedirectionServerName )( 
            IMsRdpPreferredRedirectionInfo * This,
            /* [in] */ VARIANT_BOOL Val);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseRedirectionServerName )( 
            IMsRdpPreferredRedirectionInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IMsRdpPreferredRedirectionInfoVtbl;

    interface IMsRdpPreferredRedirectionInfo
    {
        CONST_VTBL struct IMsRdpPreferredRedirectionInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsRdpPreferredRedirectionInfo_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsRdpPreferredRedirectionInfo_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsRdpPreferredRedirectionInfo_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsRdpPreferredRedirectionInfo_put_UseRedirectionServerName(This,Val)    \
    ( (This)->lpVtbl -> put_UseRedirectionServerName(This,Val) ) 

#define IMsRdpPreferredRedirectionInfo_get_UseRedirectionServerName(This,pVal)    \
    ( (This)->lpVtbl -> get_UseRedirectionServerName(This,pVal) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */




#endif     /* __IMsRdpPreferredRedirectionInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mstsax_0000_0034 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_mstsax_0000_0034_0001
    {    remoteAppResultOk    = 0,
    remoteAppResultLocked    = 0x1,
    remoteAppResultProtocolError    = 0x2,
    remoteAppResultNotInWhitelist    = 0x3,
    remoteAppResultNetworkPathDenied    = 0x4,
    remoteAppResultFileNotFound    = 0x5,
    remoteAppResultFailure    = 0x6,
    remoteAppResultHookNotLoaded    = 0x7
    }     RemoteProgramResult;

#define    RAIL_APPDISPLAY_AUTORECONNECT    ( 1 )

#define    RAIL_APPDISPLAY_DESKTOPHOOKED    ( 2 )



extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mstsax_0000_0034_v0_0_s_ifspec;


#ifndef __MSTSCLib_LIBRARY_DEFINED__
#define __MSTSCLib_LIBRARY_DEFINED__

/* library MSTSCLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MSTSCLib;

#ifndef __IMsTscAxEvents_DISPINTERFACE_DEFINED__
#define __IMsTscAxEvents_DISPINTERFACE_DEFINED__

/* dispinterface IMsTscAxEvents */
/* [uuid] */ 


EXTERN_C const IID DIID_IMsTscAxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("336d5562-efa8-482e-8cb3-c5c0fc7a7db6")
    IMsTscAxEvents : public IDispatch
    {
    };
    
#else     /* C style interface */

    typedef struct IMsTscAxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMsTscAxEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMsTscAxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMsTscAxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMsTscAxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMsTscAxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMsTscAxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMsTscAxEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IMsTscAxEventsVtbl;

    interface IMsTscAxEvents
    {
        CONST_VTBL struct IMsTscAxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMsTscAxEvents_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMsTscAxEvents_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMsTscAxEvents_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IMsTscAxEvents_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMsTscAxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMsTscAxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMsTscAxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif     /* C style interface */


#endif     /* __IMsTscAxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MsTscAxNotSafeForScripting;

#ifdef __cplusplus

class DECLSPEC_UUID("a41a4187-5a86-4e26-b40a-856f9035d9cb")
MsTscAxNotSafeForScripting;
#endif

EXTERN_C const CLSID CLSID_MsTscAx;

#ifdef __cplusplus

class DECLSPEC_UUID("1fb464c8-09bb-4017-a2f5-eb742f04392f")
MsTscAx;
#endif

EXTERN_C const CLSID CLSID_MsRdpClientNotSafeForScripting;

#ifdef __cplusplus

class DECLSPEC_UUID("7cacbd7b-0d99-468f-ac33-22e495c0afe5")
MsRdpClientNotSafeForScripting;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient;

#ifdef __cplusplus

class DECLSPEC_UUID("791fa017-2de3-492e-acc5-53c67a2b94d0")
MsRdpClient;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient2NotSafeForScripting;

#ifdef __cplusplus

class DECLSPEC_UUID("3523c2fb-4031-44e4-9a3b-f1e94986ee7f")
MsRdpClient2NotSafeForScripting;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient2;

#ifdef __cplusplus

class DECLSPEC_UUID("9059f30f-4eb1-4bd2-9fdc-36f43a218f4a")
MsRdpClient2;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient2a;

#ifdef __cplusplus

class DECLSPEC_UUID("971127BB-259F-48c2-BD75-5F97A3331551")
MsRdpClient2a;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient3NotSafeForScripting;

#ifdef __cplusplus

class DECLSPEC_UUID("ace575fd-1fcf-4074-9401-ebab990fa9de")
MsRdpClient3NotSafeForScripting;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient3;

#ifdef __cplusplus

class DECLSPEC_UUID("7584c670-2274-4efb-b00b-d6aaba6d3850")
MsRdpClient3;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient3a;

#ifdef __cplusplus

class DECLSPEC_UUID("6A6F4B83-45C5-4ca9-BDD9-0D81C12295E4")
MsRdpClient3a;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient4NotSafeForScripting;

#ifdef __cplusplus

class DECLSPEC_UUID("6AE29350-321B-42be-BBE5-12FB5270C0DE")
MsRdpClient4NotSafeForScripting;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient4;

#ifdef __cplusplus

class DECLSPEC_UUID("4EDCB26C-D24C-4e72-AF07-B576699AC0DE")
MsRdpClient4;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient4a;

#ifdef __cplusplus

class DECLSPEC_UUID("54CE37E0-9834-41ae-9896-4DAB69DC022B")
MsRdpClient4a;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient5NotSafeForScripting;

#ifdef __cplusplus

class DECLSPEC_UUID("4eb2f086-c818-447e-b32c-c51ce2b30d31")
MsRdpClient5NotSafeForScripting;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient5;

#ifdef __cplusplus

class DECLSPEC_UUID("4eb89ff4-7f78-4a0f-8b8d-2bf02e94e4b2")
MsRdpClient5;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient6NotSafeForScripting;

#ifdef __cplusplus

class DECLSPEC_UUID("d2ea46a7-c2bf-426b-af24-e19c44456399")
MsRdpClient6NotSafeForScripting;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient6;

#ifdef __cplusplus

class DECLSPEC_UUID("7390f3d8-0439-4c05-91e3-cf5cb290c3d0")
MsRdpClient6;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient7NotSafeForScripting;

#ifdef __cplusplus

class DECLSPEC_UUID("54d38bf7-b1ef-4479-9674-1bd6ea465258")
MsRdpClient7NotSafeForScripting;
#endif

EXTERN_C const CLSID CLSID_MsRdpClient7;

#ifdef __cplusplus

class DECLSPEC_UUID("a9d7038d-b5ed-472e-9c47-94bea90a5910")
MsRdpClient7;
#endif
#endif /* __MSTSCLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


