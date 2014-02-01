================================================================================
                            DVC Sample Application
================================================================================

The DVC Sample application consist of sample code in two folders namely 
Client and Server.The Client sample code will compile and run on Windows 
CE 7.0 platform while the Server side sample code is a Visual Studio 2008 
solution .The Server Sample code uses Terminal Services API 
which are only supported in Windows 2008 and higher. The Server side 
binaries have also been checked along with this sample code.

==================================================================================
                                 SERVER PLUG IN
==================================================================================

The DVCServerApp.sln is a Server Side sample solution which provides an 
example of how to create the server-side Dynamic Virtual Channel (DVC) 
component. The Server opens a dynamic channel by calling WTSVirtualChannelOpenEx 
API with end point name "DVCSmpl" .The output file handle  returned by 
WTSVirtualChannelOpenEx API is used in ReadFile/WriteFile calls.
The sample code creates read and write threads and start to write series of random 
messages on the dynamic virtual channel .The read thread reads the data back from the 
dynamic virtual channel ,reconstruct the original message and verify its content.

Instructions
============
Open the solution in Visual Studio 2008
For the server side code to compile and build successfully , the Visual Studio 
installation should have Windows SDK Update for Vista or Windows 2008 or Windows 7.
Please follow the below MSDN link for latest SDK installation:
http://msdn.microsoft.com/en-us/windows/bb980924.aspx
Compile and Build the DVCServerApp.sln
It will create a DVCServerApp.exe in Debug / Release folder and works in Windows 
2008 Server or later.
DVC related Server APIs are only supported from Windows 2008 Server onwards.
Run the DVCServerApp.exe from console on the Server side.
It will start print message when DVC channel is created 
and read & write operations are started over DVC channel.



=====================================================================================
                                CLIENT PLUG IN
=====================================================================================
The DVC Client plug-in is an implementation of IWTSPlugin which is registered as a 
Component Object Model (COM) object. The plug-in must be implemented in a 
free-threading model and is loaded by RDP client during initialization.
The Client Plug-in can be implemented as InProc or OutProc. The sample code has 
been provided which implements the DVCSample plugin as both InProc and Outproc.
For Out-of-Proc Client plugin , we need to create a proxy stub and register 
it on WinCE. The proxy stub for DVC sample plug in has been provided at 
samples\DVC\Client\DVCSamplePS

The dynamic virtual channel (DVC) plug-in entry for the Remote Desktop Connection (RDC) 
client has the following syntax

[Plug-in DLLName:]{CLSID}

The Plug-in DLL Name represents the full path of the .dll file. 
CLSID specified in the format {CLSID} is class identifier which uniquely distinguish
different DVC client Plugin component interfaces on WinCE.


In proc Instructions
====================

Add the following registry entry in rdp.reg file (public\rdp\oak\files)
within the lines having following text "@CESYSGEN IF RDP_MODULES_TSCAXCTRL" and "@CESYSGEN ENDIF RDP_MODULES_TSCAXCTRL"

[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Terminal Server Client\Default\AddIns\DVCSmpl]
  "Name"="DVCSample.dll:{74738101-bfe5-4094-b874-d077e974d291}"

Create an Enterprise Web Pad or Windows Thin Client Image using Platform builder.

Compile the plug-in sample code (samples\DVC\Client\InProc) from platform builder 
build windows to create DVCSample.dll 

Load the image on to the device. When the device boots up,start the RDP connection

During initialization of RDP Client, the DVC plug-in on the client will loaded and 
call the initialize method of DVC Plug-in CDVCSamplePlugin Class. It will call the 
CreateListener method which returns an instance of a listener object that listens 
on a specific endpoint.

When the RDP session is established,run the DVCServerApp.exe from console on the 
Server side.
 
The DVCServerApp.exe will open a DVC channel which is used for establishing
communication between Client and Server inside the RDP session.

Out-proc Instructions
=====================

Add the following registry entry in rdp.reg file (public\rdp\oak\files)
within the lines having following text "@CESYSGEN IF RDP_MODULES_TSCAXCTRL" and "@CESYSGEN ENDIF RDP_MODULES_TSCAXCTRL"

[HKEY_CLASSES_ROOT\CLSID\{74738101-bfe5-4094-b874-d077e974d291}\LocalServer32]
@="\\release\\DVCSample.exe"
"ThreadingModel"="Free"

[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Terminal Server Client\Default\AddIns\DVCSmpl]
  "Name"="{74738101-bfe5-4094-b874-d077e974d291}"

Create an Enterprise Web Pad or Windows Thin Client Image using Platform builder.

Compile the plug-in sample code from platform builder build windows to create 
DVCSample.dll 

Compile the proxy stub code (samples\DVC\Client\DVCSamplePS)

The regsvr32.exe utility should be present in Release directory for registration 
of proxy stub code. In case it is not available in Release directory,it can be compiled and build 
from source code present at \public\dcom\sdk\samples\regsvr  

Load the image on to the device. When the device boots up open the WinCE target control 
window from PB and register the DVCSamplePS.dll on WinCE Device by running following
command

"s regsvr32 DVCSamplePS.Dll"

Start the RDP connection.

During initialization of RDP Client, the DVC plug-in (DVCSample.exe) will execute and 
call the initialize method of DVC Plug-in CDVCSamplePlugin Class. It will call the 
CreateListener method which returns an instance of a listener object that listens 
on a specific endpoint.

When the RDP session is established, run the DVCServerApp.exe from console on the 
Server side.
 
The DVCServerApp.exe will open a DVC channel which is used for establishing
communication between Client and Server inside the RDP session.


For more information related to Dynamic Virtual Channel please refer to the DVC 
documentation provided with the Platform Builder.








