// dllmain.h : Declaration of module class.

class CTsTeleportModule : public CAtlDllModuleT< CTsTeleportModule >
{
public :
	DECLARE_LIBID(LIBID_TsTeleportLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TSTELEPORT, "{8808D664-E7A8-4300-A7A5-B2F1FF2100BE}")
};

extern class CTsTeleportModule _AtlModule;
