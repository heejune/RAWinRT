

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Feb 16 13:09:54 2015
 */
/* Compiler settings for C:\Users\vdronov\AppData\Local\Temp\DataBinding.idl-0bc02e38:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
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

#ifndef __DataBinding_h__
#define __DataBinding_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#if defined(__cplusplus)
#if defined(__MIDL_USE_C_ENUM)
#define MIDL_ENUM enum
#else
#define MIDL_ENUM enum class
#endif
#endif


/* Forward Declarations */ 

#ifndef ____x_ABI_CDataBinding_CINumber_FWD_DEFINED__
#define ____x_ABI_CDataBinding_CINumber_FWD_DEFINED__
typedef interface __x_ABI_CDataBinding_CINumber __x_ABI_CDataBinding_CINumber;

#ifdef __cplusplus
namespace ABI {
    namespace DataBinding {
        interface INumber;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CDataBinding_CINumber_FWD_DEFINED__ */


#ifndef ____x_ABI_CDataBinding_CINumberOverrides_FWD_DEFINED__
#define ____x_ABI_CDataBinding_CINumberOverrides_FWD_DEFINED__
typedef interface __x_ABI_CDataBinding_CINumberOverrides __x_ABI_CDataBinding_CINumberOverrides;

#ifdef __cplusplus
namespace ABI {
    namespace DataBinding {
        interface INumberOverrides;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CDataBinding_CINumberOverrides_FWD_DEFINED__ */


#ifndef ____x_ABI_CDataBinding_CINumberFactory_FWD_DEFINED__
#define ____x_ABI_CDataBinding_CINumberFactory_FWD_DEFINED__
typedef interface __x_ABI_CDataBinding_CINumberFactory __x_ABI_CDataBinding_CINumberFactory;

#ifdef __cplusplus
namespace ABI {
    namespace DataBinding {
        interface INumberFactory;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CDataBinding_CINumberFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_FWD_DEFINED__
#define ____x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics;

#ifdef __cplusplus
namespace ABI {
    namespace DataBinding {
        interface IDependencyPropertyChangedHelperStatics;
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "Windows.Foundation.h"
#include "Windows.UI.h"
#include "Windows.UI.Xaml.Data.h"
#include "Windows.UI.Xaml.CustomAttributes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_DataBinding_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eui2Examl_h__)
#include <Windows.UI.Xaml.h>
#endif // !defined(__windows2Eui2Examl_h__)
#if !defined(__windows2Eui2Examl2Econtrols_h__)
#include <Windows.UI.Xaml.Controls.h>
#endif // !defined(__windows2Eui2Examl2Econtrols_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)



#ifdef __cplusplus
namespace ABI {
namespace DataBinding {
class Number;
} /*DataBinding*/
}
#endif

#if !defined(____x_ABI_CDataBinding_CINumber_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_DataBinding_INumber[] = L"DataBinding.INumber";
#endif /* !defined(____x_ABI_CDataBinding_CINumber_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_DataBinding_0000_0000 */
/* [local] */ 







extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CDataBinding_CINumber_INTERFACE_DEFINED__
#define ____x_ABI_CDataBinding_CINumber_INTERFACE_DEFINED__

/* interface __x_ABI_CDataBinding_CINumber */
/* [uuid][object] */ 



/* interface ABI::DataBinding::INumber */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CDataBinding_CINumber;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace DataBinding {
            
            MIDL_INTERFACE("5b197688-2f57-4d01-92cd-a888f10dcd90")
            INumber : public IInspectable
            {
            public:
                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
                    /* [out][retval] */ __RPC__out INT32 *value) = 0;
                
                virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
                    /* [in] */ INT32 value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_INumber = __uuidof(INumber);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CDataBinding_CINumberVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CDataBinding_CINumber * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CDataBinding_CINumber * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CDataBinding_CINumber * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CDataBinding_CINumber * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CDataBinding_CINumber * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CDataBinding_CINumber * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            __RPC__in __x_ABI_CDataBinding_CINumber * This,
            /* [out][retval] */ __RPC__out INT32 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            __RPC__in __x_ABI_CDataBinding_CINumber * This,
            /* [in] */ INT32 value);
        
        END_INTERFACE
    } __x_ABI_CDataBinding_CINumberVtbl;

    interface __x_ABI_CDataBinding_CINumber
    {
        CONST_VTBL struct __x_ABI_CDataBinding_CINumberVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CDataBinding_CINumber_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CDataBinding_CINumber_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CDataBinding_CINumber_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CDataBinding_CINumber_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CDataBinding_CINumber_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CDataBinding_CINumber_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CDataBinding_CINumber_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 

#define __x_ABI_CDataBinding_CINumber_put_Value(This,value)	\
    ( (This)->lpVtbl -> put_Value(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CDataBinding_CINumber_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_DataBinding_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CDataBinding_CINumberOverrides_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_DataBinding_INumberOverrides[] = L"DataBinding.INumberOverrides";
#endif /* !defined(____x_ABI_CDataBinding_CINumberOverrides_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_DataBinding_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CDataBinding_CINumberOverrides_INTERFACE_DEFINED__
#define ____x_ABI_CDataBinding_CINumberOverrides_INTERFACE_DEFINED__

/* interface __x_ABI_CDataBinding_CINumberOverrides */
/* [uuid][object] */ 



/* interface ABI::DataBinding::INumberOverrides */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CDataBinding_CINumberOverrides;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace DataBinding {
            
            MIDL_INTERFACE("12b0eeee-76ed-47af-8247-610025184b58")
            INumberOverrides : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE GetValue( 
                    /* [out][retval] */ __RPC__out INT32 *value) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_INumberOverrides = __uuidof(INumberOverrides);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CDataBinding_CINumberOverridesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CDataBinding_CINumberOverrides * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CDataBinding_CINumberOverrides * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CDataBinding_CINumberOverrides * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CDataBinding_CINumberOverrides * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CDataBinding_CINumberOverrides * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CDataBinding_CINumberOverrides * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in __x_ABI_CDataBinding_CINumberOverrides * This,
            /* [out][retval] */ __RPC__out INT32 *value);
        
        END_INTERFACE
    } __x_ABI_CDataBinding_CINumberOverridesVtbl;

    interface __x_ABI_CDataBinding_CINumberOverrides
    {
        CONST_VTBL struct __x_ABI_CDataBinding_CINumberOverridesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CDataBinding_CINumberOverrides_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CDataBinding_CINumberOverrides_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CDataBinding_CINumberOverrides_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CDataBinding_CINumberOverrides_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CDataBinding_CINumberOverrides_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CDataBinding_CINumberOverrides_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CDataBinding_CINumberOverrides_GetValue(This,value)	\
    ( (This)->lpVtbl -> GetValue(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CDataBinding_CINumberOverrides_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_DataBinding_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CDataBinding_CINumberFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_DataBinding_INumberFactory[] = L"DataBinding.INumberFactory";
#endif /* !defined(____x_ABI_CDataBinding_CINumberFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_DataBinding_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CDataBinding_CINumberFactory_INTERFACE_DEFINED__
#define ____x_ABI_CDataBinding_CINumberFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CDataBinding_CINumberFactory */
/* [uuid][object] */ 



/* interface ABI::DataBinding::INumberFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CDataBinding_CINumberFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace DataBinding {
            
            MIDL_INTERFACE("29f9bd09-d452-49bf-99f9-59f328103cbd")
            INumberFactory : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE CreateInstance0( 
                    /* [in] */ __RPC__in_opt IInspectable *outer,
                    /* [out] */ __RPC__deref_out_opt IInspectable **inner,
                    /* [out][retval] */ __RPC__deref_out_opt ABI::DataBinding::INumber **result) = 0;
                
                virtual HRESULT STDMETHODCALLTYPE CreateInstance1( 
                    /* [in] */ int value,
                    /* [in] */ __RPC__in_opt IInspectable *outer,
                    /* [out] */ __RPC__deref_out_opt IInspectable **inner,
                    /* [out][retval] */ __RPC__deref_out_opt ABI::DataBinding::INumber **result) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_INumberFactory = __uuidof(INumberFactory);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CDataBinding_CINumberFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CDataBinding_CINumberFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CDataBinding_CINumberFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CDataBinding_CINumberFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CDataBinding_CINumberFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CDataBinding_CINumberFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CDataBinding_CINumberFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance0 )( 
            __RPC__in __x_ABI_CDataBinding_CINumberFactory * This,
            /* [in] */ __RPC__in_opt IInspectable *outer,
            /* [out] */ __RPC__deref_out_opt IInspectable **inner,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CDataBinding_CINumber **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance1 )( 
            __RPC__in __x_ABI_CDataBinding_CINumberFactory * This,
            /* [in] */ int value,
            /* [in] */ __RPC__in_opt IInspectable *outer,
            /* [out] */ __RPC__deref_out_opt IInspectable **inner,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CDataBinding_CINumber **result);
        
        END_INTERFACE
    } __x_ABI_CDataBinding_CINumberFactoryVtbl;

    interface __x_ABI_CDataBinding_CINumberFactory
    {
        CONST_VTBL struct __x_ABI_CDataBinding_CINumberFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CDataBinding_CINumberFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CDataBinding_CINumberFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CDataBinding_CINumberFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CDataBinding_CINumberFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CDataBinding_CINumberFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CDataBinding_CINumberFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CDataBinding_CINumberFactory_CreateInstance0(This,outer,inner,result)	\
    ( (This)->lpVtbl -> CreateInstance0(This,outer,inner,result) ) 

#define __x_ABI_CDataBinding_CINumberFactory_CreateInstance1(This,value,outer,inner,result)	\
    ( (This)->lpVtbl -> CreateInstance1(This,value,outer,inner,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CDataBinding_CINumberFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_DataBinding_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_DataBinding_Number_DEFINED
#define RUNTIMECLASS_DataBinding_Number_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_DataBinding_Number[] = L"DataBinding.Number";
#endif
#if !defined(____x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_DataBinding_IDependencyPropertyChangedHelperStatics[] = L"DataBinding.IDependencyPropertyChangedHelperStatics";
#endif /* !defined(____x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_DataBinding_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_INTERFACE_DEFINED__
#define ____x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics */
/* [uuid][object] */ 



/* interface ABI::DataBinding::IDependencyPropertyChangedHelperStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace DataBinding {
            
            MIDL_INTERFACE("2427f0e7-c4fa-4921-84f4-dfcab45f1776")
            IDependencyPropertyChangedHelperStatics : public IInspectable
            {
            public:
                virtual HRESULT STDMETHODCALLTYPE SubscribeToEvent( 
                    /* [in] */ __RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject *sourceObject) = 0;
                
            };

            extern const __declspec(selectany) IID & IID_IDependencyPropertyChangedHelperStatics = __uuidof(IDependencyPropertyChangedHelperStatics);

            
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *SubscribeToEvent )( 
            __RPC__in __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject *sourceObject);
        
        END_INTERFACE
    } __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStaticsVtbl;

    interface __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics
    {
        CONST_VTBL struct __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_SubscribeToEvent(This,sourceObject)	\
    ( (This)->lpVtbl -> SubscribeToEvent(This,sourceObject) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CDataBinding_CIDependencyPropertyChangedHelperStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_DataBinding_0000_0004 */
/* [local] */ 

#ifndef RUNTIMECLASS_DataBinding_DependencyPropertyChangedHelper_DEFINED
#define RUNTIMECLASS_DataBinding_DependencyPropertyChangedHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_DataBinding_DependencyPropertyChangedHelper[] = L"DataBinding.DependencyPropertyChangedHelper";
#endif


/* interface __MIDL_itf_DataBinding_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DataBinding_0000_0004_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


