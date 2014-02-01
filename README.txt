TsTeleport Dynamic Virtual Channel Example

http://blogs.technet.com/b/virtualworld/archive/2007/09/26/dynamic-virtual-channels.aspx
http://blogs.msdn.com/b/rds/archive/2007/09/19/ts-teleport-sample-instructions.aspx

DVC Add-in Registration:
http://msdn.microsoft.com/en-us/library/bb540856/

Dynamic Virtual Channels (DVC) Sample (Compact 7):
http://msdn.microsoft.com/en-us/library/gg155299%28v=winembedded.70%29.aspx

Client Installation:

Register Add-in COM object:

"RegSvr32 /s TsTelePlgnPS.dll"
"RegSvr32 /s TsTelePlgn.dll"

Register the Add-in with mstsc.exe:
Create key: HKEY_CURRENT_USER\Software\Microsoft\Terminal Server Client\Default\AddIns\TsTelePlgn
And add a "Name" String with value {0350DF61-30CF-451B-B292-3CE3A330F958}

Server Installation:

Register Add-in COM object:

"RegSvr32 TsTeleportPS.dll"
"RegSvr32 TsTeleport.dll"

Manually create the following empty file to trigger loading the COM object by Shell
"C:\Users\<User>\AppData\Roaming\Microsoft\Windows\SendTo"

Create an empty file with the following name: “RDP Client Desktop.tsteleport”

Usage

Use the machine with the client plug-in to establish a TS connection
TS to the server with the shell extension
Highlight a group of files and/or directories and right-click
Select the send-to menu and then "RDP Client Desktop"
