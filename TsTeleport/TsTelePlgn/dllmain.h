// dllmain.h : Declaration of module class.

class CTsTelePlgnModule : public CAtlDllModuleT< CTsTelePlgnModule >
{
public :
	DECLARE_LIBID(LIBID_TsTelePlgnLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TSTELEPLGN, "{7F636FAC-C09C-469E-8111-F0A9FD9252C2}")
};

extern class CTsTelePlgnModule _AtlModule;
