#define TSTELE_CHANNEL_NAME "TsTeleport"

typedef enum
{
    PacketTypeFileStart,
    PacketTypeFileData,
    PacketTypeFileEnd
} PACKET_TYPE;

#define TELET_FLAG_DIRECTORY 0x1

#pragma pack(push)
#pragma pack(1)

typedef struct _TELEP_PACKET_HEADER
{
    PACKET_TYPE     PacketType;
    USHORT          Flags;
    USHORT          PacketSize;
} TELEP_PACKET_HEADER, *PTELEP_PACKET_HEADER;

#pragma pack(pop)

enum
{
    _E_PROTOCOL = 0x200,
    _E_TIMEOUT,
    _E_IO,
    _E_SHELLCALL
};

#define TELEP_E_PROTOCOL            MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, _E_PROTOCOL)
#define TELEP_E_TIMEOUT             MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, _E_TIMEOUT)
#define TELEP_E_IO                  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, _E_IO)
#define TELEP_E_SHELLCALL           MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, _E_SHELLCALL)
