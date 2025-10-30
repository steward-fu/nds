#!/bin/bash

rm -rf build

# x86 test
mkdir build; cd build; cmake .. -DCMAKE_C_FLAGS="-m32" -DLD80BITS=1 -DNOALIGN=1 -DBOX86LIB=1 -DBOX86DYNAMIC=1 -DBOX86_ROOT="${HOME}/Data/nds/box86" -DCMAKE_BUILD_TYPE=RelWithDebInfo; make -j3

# armhf test
#mkdir build; cd build; cmake .. -DARM_DYNAREC=1 -DBOX86LIB=1 -DBOX86DYNAMIC=1 -DBOX86_ROOT="~/Data/nds/box86" -DCMAKE_BUILD_TYPE=RelWithDebInfo; make -j3
