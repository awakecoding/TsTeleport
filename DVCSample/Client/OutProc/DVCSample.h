

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sat Feb 01 15:45:48 2014
 */
/* Compiler settings for dvcsample.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
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


#ifndef __DVCSample_h__
#define __DVCSample_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __DVCSamplePlugin_FWD_DEFINED__
#define __DVCSamplePlugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class DVCSamplePlugin DVCSamplePlugin;
#else
typedef struct DVCSamplePlugin DVCSamplePlugin;
#endif /* __cplusplus */

#endif 	/* __DVCSamplePlugin_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "tsvirtualchannels.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __DVCSampleLib_LIBRARY_DEFINED__
#define __DVCSampleLib_LIBRARY_DEFINED__

/* library DVCSampleLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_DVCSampleLib;

EXTERN_C const CLSID CLSID_DVCSamplePlugin;

#ifdef __cplusplus

class DECLSPEC_UUID("74738101-bfe5-4094-b874-d077e974d291")
DVCSamplePlugin;
#endif
#endif /* __DVCSampleLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


