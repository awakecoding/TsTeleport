$(OBJ_PATH)\$(O)\tsteleplgn.tlb:
	midl.exe /Zp8  /I$(INCLUDES) /ms_ext  /c_ext  /proxy $(OBJ_PATH)\$(O)\tsteleplgn_p.c /dlldata $(OBJ_PATH)\$(O)\dlldata.c  /iid $(OBJ_PATH)\$(O)\tsteleplgn_i.c  /tlb $(OBJ_PATH)\$(O)\tsteleplgn.tlb  /header $(OBJ_PATH)\$(O)\tsteleplgn.h $(C_DEFINES) /no_stamp /nologo -sal /win32 -target NT60 tsteleplgn.idl
