

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Feb 01 13:33:06 2014
 */
/* Compiler settings for TsTelePlgn.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


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

#ifndef __TsTelePlgn_i_h__
#define __TsTelePlgn_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITsClientPlgn_FWD_DEFINED__
#define __ITsClientPlgn_FWD_DEFINED__
typedef interface ITsClientPlgn ITsClientPlgn;
#endif 	/* __ITsClientPlgn_FWD_DEFINED__ */


#ifndef __TsClientPlgn_FWD_DEFINED__
#define __TsClientPlgn_FWD_DEFINED__

#ifdef __cplusplus
typedef class TsClientPlgn TsClientPlgn;
#else
typedef struct TsClientPlgn TsClientPlgn;
#endif /* __cplusplus */

#endif 	/* __TsClientPlgn_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITsClientPlgn_INTERFACE_DEFINED__
#define __ITsClientPlgn_INTERFACE_DEFINED__

/* interface ITsClientPlgn */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITsClientPlgn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B6AEF7A-2E89-4007-B45D-061E0BB2E848")
    ITsClientPlgn : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITsClientPlgnVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITsClientPlgn * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITsClientPlgn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITsClientPlgn * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITsClientPlgn * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITsClientPlgn * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITsClientPlgn * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITsClientPlgn * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ITsClientPlgnVtbl;

    interface ITsClientPlgn
    {
        CONST_VTBL struct ITsClientPlgnVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITsClientPlgn_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITsClientPlgn_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITsClientPlgn_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITsClientPlgn_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITsClientPlgn_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITsClientPlgn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITsClientPlgn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITsClientPlgn_INTERFACE_DEFINED__ */



#ifndef __TsTelePlgnLib_LIBRARY_DEFINED__
#define __TsTelePlgnLib_LIBRARY_DEFINED__

/* library TsTelePlgnLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TsTelePlgnLib;

EXTERN_C const CLSID CLSID_TsClientPlgn;

#ifdef __cplusplus

class DECLSPEC_UUID("0350DF61-30CF-451B-B292-3CE3A330F958")
TsClientPlgn;
#endif
#endif /* __TsTelePlgnLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


