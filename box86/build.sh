#!/bin/bash

if [ "$1" == "" ]; then
    echo "usage: $0 [x86|armhf]"
    exit
fi

if [ -f "build/Makefile" ]; then
    cd build
    make
    exit
fi

mkdir -p build
cd build

if [ "$1" == "x86" ]; then
    echo "build for x86 platform"
    cmake .. -DCMAKE_C_FLAGS="-m32" -DLD80BITS=1 -DNOALIGN=1 -DBOX86LIB=1 -DBOX86DYNAMIC=1 -DBOX86_ROOT="${HOME}/Data/nds/box86" -DCMAKE_BUILD_TYPE=RelWithDebInfo
fi

if [ "$1" == "armhf" ]; then
    echo "build for armhf platform"
    cmake .. -DARM_DYNAREC=1 -DBOX86LIB=1 -DBOX86DYNAMIC=1 -DBOX86_ROOT="${HOME}/Data/nds/box86" -DCMAKE_BUILD_TYPE=RelWithDebInfo
fi

make
