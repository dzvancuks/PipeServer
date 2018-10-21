========================================================================
    CONSOLE APPLICATION : PipeServer Project Overview
========================================================================

StreamBase task

Pre requirements:
1. Install Protobuf using vcpkg
vcpkg install protobuf protobuf:x64-windows
Follow official guide:
https://github.com/protocolbuffers/protobuf/blob/master/src/README.md
2. Add protoc.exe to PATH
3. Generate Object.proto into pb.h and pb.cc files

TODO:
make custom build step for Object.proto to generate pb.h and pb.cc files

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
