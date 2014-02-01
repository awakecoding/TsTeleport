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
#ifndef _TSCCTRL_H_
#define _TSCCTRL_H_

#define TSCCONTROL_CLASS	L"TerminalServerClient"

typedef enum _TscPropType
{
	TscTypeULONG  = 1,
	TscTypeBOOL   = 2,
	TscTypeSTRING = 3,
	TscTypeBINARY = 4,
	TscTypePtrULONG = 5,
	TscTypeUNKNOWN= -1
} TscPropType;

#define MAX_PROPNAME_LEN		256

typedef struct _TscProperty
{
	TscPropType	ePropType;
	PWSTR		pszPropName;
	DWORD		dwPropSize;
	union
	{
		ULONG	lLongVal;
		BOOL	fBoolVal;
		PWSTR	pszStrVal;
		ULONG_PTR	pUlongVal;
	} propVal;
	

} TSCPROPERTY, *PTSCPROPERTY;


#define WM_TSCEVT_FIRST						(WM_APP + 100)

#define WM_TSCEVT_INITTSC					(WM_TSCEVT_FIRST + 0)
#define WM_TSCEVT_TERMTSC                   (WM_TSCEVT_FIRST + 1)
#define WM_TSCEVT_CONNECTING                (WM_TSCEVT_FIRST + 2)
#define WM_TSCEVT_CONNECTED                 (WM_TSCEVT_FIRST + 3)
#define WM_TSCEVT_LOGINCOMPLETE             (WM_TSCEVT_FIRST + 4)
#define WM_TSCEVT_DISCONNECTED              (WM_TSCEVT_FIRST + 5)
#define WM_TSCEVT_GONEFULLSCREEN            (WM_TSCEVT_FIRST + 6)
#define WM_TSCEVT_LEFTFULLSCREEN            (WM_TSCEVT_FIRST + 7)
#define WM_TSCEVT_REQUESTFULLSCREEN         (WM_TSCEVT_FIRST + 8)
#define WM_TSCEVT_FATALERROR                (WM_TSCEVT_FIRST + 9)
#define WM_TSCEVT_WARNING                   (WM_TSCEVT_FIRST + 10)
#define WM_TSCEVT_DESKTOPSIZECHANGE         (WM_TSCEVT_FIRST + 11)
#define WM_TSCEVT_IDLETIMEOUTNOTIFICATION   (WM_TSCEVT_FIRST + 12)
#define WM_TSCEVT_REQUESTMINIMIZE           (WM_TSCEVT_FIRST + 13)
#define WM_TSCEVT_ASKCONFIRMCLOSE           (WM_TSCEVT_FIRST + 14)
#define WM_TSCEVT_RECEIVEDPUBLICKEY         (WM_TSCEVT_FIRST + 15)
#define WM_TSCEVT_NOTIFY_EVENT_QUEUE        (WM_TSCEVT_FIRST + 16)
#define WM_TSCEVT_AUTORECONNECTING			(WM_TSCEVT_FIRST + 17)

#define WM_TSCEVT_LAST						(WM_TSCEVT_FIRST + 500)

#define WM_TSCMSG_FIRST					(WM_TSCEVT_LAST + 500)

#define WM_TSCMSG_CONNECT				(WM_TSCMSG_FIRST + 0)
#define WM_TSCMSG_DISCONNECT			(WM_TSCMSG_FIRST + 1)
#define WM_TSCMSG_GETPROPERTY			(WM_TSCMSG_FIRST + 2)
#define WM_TSCMSG_SETPROPERTY			(WM_TSCMSG_FIRST + 3)
#define WM_TSCMSG_REQUESTCLOSE			(WM_TSCMSG_FIRST + 4)
#define WM_TSCMSG_GETEXTDISCONREASON	(WM_TSCMSG_FIRST + 5)
#define WM_TSCMSG_PUTFULLSCREEN			(WM_TSCMSG_FIRST + 6)

#define WM_TSCMSG_LAST					(WM_TSCMSG_FIRST + 500)


#ifdef __cplusplus
extern "C" {
#endif

BOOL
InitializeTSC(
	HINSTANCE hInst
	);

BOOL 
UninitializeTSC(
	);

#ifdef __cplusplus
}
#endif

#endif		//_TSCCTRL_H_
