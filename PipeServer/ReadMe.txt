========================================================================
    CONSOLE APPLICATION : PipeServer Project Overview
========================================================================

StreamBase task

Requirements
- The server should be able to receive both sync/async connection requests from clients
  Taken from official MS example https://docs.microsoft.com/ru-ru/windows/desktop/ipc/named-pipe-server-using-overlapped-i-o
  According to https://stackoverflow.com/questions/42249020/pipe-nowait-breaks-connetion better to use overlapping IO instead of async NOWAIT connections
- The server should be able to store data provided by the client via NamedPipe in a reasonable data structure
  It uses "\\.\pipe\mynamedpipe" named pipe and exchanges dapa packed by protobuf
- The server should be able to register a custom class (w/ related functions, attributes) which can be used by the client (see req-4)
  It creates local object, serializes it and sends to Client as binary data
- The server should be able to store the custom objects created by the client for the custom class created in req-7
  It stores map of object received via pipe


Pre requirements:
1. Install Protobuf using vcpkg
vcpkg install protobuf protobuf:x64-windows
Follow official guide:
https://github.com/protocolbuffers/protobuf/blob/master/src/README.md
2. Add protoc.exe to PATH
3. Generate Object.proto into pb.h and pb.cc files

TODO:
- make custom build step for Object.proto to generate pb.h and pb.cc files
- add variability using new ClassB
- make "deep serialization" for custom classes, one way is to use protobuf for ClassA

/////////////////////////////////////////////////////////////////////////////
Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named PipeServer.pch and a precompiled types file named StdAfx.obj.

/////////////////////////////////////////////////////////////////////////////
Other notes:

AppWizard uses "TODO:" comments to indicate parts of the source code you
should add to or customize.

/////////////////////////////////////////////////////////////////////////////
