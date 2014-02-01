// TsTeleportShellExt.h : Declaration of the CTsTeleportShellExt

#pragma once
#include "resource.h"       // main symbols

#include "TsTeleport_i.h"

#include "Common.h"
#include "Debug.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif



// CTsTeleportShellExt

class ATL_NO_VTABLE CTsTeleportShellExt :
    public CComObjectRootEx<CComSingleThreadModel>,
    public CComCoClass<CTsTeleportShellExt, &CLSID_TsTeleportShellExt>,
    public IDispatchImpl<ITsTeleportShellExt, &IID_ITsTeleportShellExt, &LIBID_TsTeleportLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
    public IPersistFile,
    public IDropTarget
{
public:
    CTsTeleportShellExt(): _hDVC(NULL)
    {
    }

    ~CTsTeleportShellExt() { ASSERT(!_hDVC); }

    DECLARE_REGISTRY_RESOURCEID(IDR_TSTELEPORTSHELLEXT)


    BEGIN_COM_MAP(CTsTeleportShellExt)
        COM_INTERFACE_ENTRY(ITsTeleportShellExt)
        COM_INTERFACE_ENTRY(IPersistFile)
        COM_INTERFACE_ENTRY(IDropTarget)
    END_COM_MAP()



    DECLARE_PROTECT_FINAL_CONSTRUCT()

    HRESULT FinalConstruct()
    {
        return S_OK;
    }

    void FinalRelease()
    {
    }

    // IPersistFile Methods
public:

    STDMETHOD(GetClassID)(LPCLSID)      { return E_NOTIMPL; }
    STDMETHOD(IsDirty)()                { return E_NOTIMPL; }
    STDMETHOD(Load)(LPCOLESTR, DWORD)   { return S_OK;      }
    STDMETHOD(Save)(LPCOLESTR, BOOL)    { return E_NOTIMPL; }
    STDMETHOD(SaveCompleted)(LPCOLESTR) { return E_NOTIMPL; }
    STDMETHOD(GetCurFile)(__in_z LPOLESTR*)    { return E_NOTIMPL; }

    // IDropTarget Methods
public:

    STDMETHOD(DragEnter)(
        IDataObject *pDataObj,
        DWORD grfKeyState,
        POINTL pt,
        DWORD *pdwEffect);
    
    STDMETHOD(DragOver)(
        DWORD grfKeyState,
        POINTL pt,
        DWORD *pdwEffect)
    {
        UNREFERENCED_PARAMETER(grfKeyState);
        UNREFERENCED_PARAMETER(pt);
        UNREFERENCED_PARAMETER(pdwEffect);

        return E_NOTIMPL;
    }

    STDMETHOD(DragLeave)();

    STDMETHOD(Drop)(
        IDataObject *pDataObj,
        DWORD grfKeyState,
        POINTL pt,
        DWORD *pdwEffect);

private:

    HRESULT
    GetFileNames(
        IDataObject *pDataObj,
        TStringVector& vFileNames);

    HRESULT TeleportFiles(TStringVector& vFileNames);
    HRESULT TeleportFile(__in_z LPTSTR szFile);
    HRESULT TeleportDirectory(__in_z LPTSTR szFile);

    HRESULT GetVirtualChannelHandle(HANDLE *phFile);

    HRESULT AnnounceTransfer(__in_z LPTSTR szPartial, BOOL bDir);
    HRESULT AnnounceEndTransfer(BOOL bDir);
    HRESULT SendPacket(PTELEP_PACKET_HEADER pPacket);

    HANDLE _hDVC;
};

OBJECT_ENTRY_AUTO(__uuidof(TsTeleportShellExt), CTsTeleportShellExt)
