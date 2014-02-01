

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sat Feb 01 13:33:06 2014
 */
/* Compiler settings for TsTeleport.idl:
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

#ifndef __TsTeleport_i_h__
#define __TsTeleport_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITsTeleportShellExt_FWD_DEFINED__
#define __ITsTeleportShellExt_FWD_DEFINED__
typedef interface ITsTeleportShellExt ITsTeleportShellExt;
#endif 	/* __ITsTeleportShellExt_FWD_DEFINED__ */


#ifndef __TsTeleportShellExt_FWD_DEFINED__
#define __TsTeleportShellExt_FWD_DEFINED__

#ifdef __cplusplus
typedef class TsTeleportShellExt TsTeleportShellExt;
#else
typedef struct TsTeleportShellExt TsTeleportShellExt;
#endif /* __cplusplus */

#endif 	/* __TsTeleportShellExt_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITsTeleportShellExt_INTERFACE_DEFINED__
#define __ITsTeleportShellExt_INTERFACE_DEFINED__

/* interface ITsTeleportShellExt */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITsTeleportShellExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D846F568-ACA8-42AA-9A03-452DBB23A393")
    ITsTeleportShellExt : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct ITsTeleportShellExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITsTeleportShellExt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITsTeleportShellExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITsTeleportShellExt * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITsTeleportShellExt * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITsTeleportShellExt * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITsTeleportShellExt * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITsTeleportShellExt * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ITsTeleportShellExtVtbl;

    interface ITsTeleportShellExt
    {
        CONST_VTBL struct ITsTeleportShellExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITsTeleportShellExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITsTeleportShellExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITsTeleportShellExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITsTeleportShellExt_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITsTeleportShellExt_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITsTeleportShellExt_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITsTeleportShellExt_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITsTeleportShellExt_INTERFACE_DEFINED__ */



#ifndef __TsTeleportLib_LIBRARY_DEFINED__
#define __TsTeleportLib_LIBRARY_DEFINED__

/* library TsTeleportLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TsTeleportLib;

EXTERN_C const CLSID CLSID_TsTeleportShellExt;

#ifdef __cplusplus

class DECLSPEC_UUID("B5D2B692-04A4-413C-AD69-86960DAB8111")
TsTeleportShellExt;
#endif
#endif /* __TsTeleportLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


