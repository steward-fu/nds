#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export PATH=$MYDIR:$PATH
export SDL_VIDEODRIVER=NDS
export LD_LIBRARY_PATH=lib:/usr/local/lib:$LD_LIBRARY_PATH

cd $MYDIR
rm -rf rerun
./drastic64

if [ -f rerun ]; then
    rm -rf rerun
    mv drastic64_patched drastic64
fi

if [ -f drastic64_patched ]; then
    rm -rf drastic64_patched
fi

sync
