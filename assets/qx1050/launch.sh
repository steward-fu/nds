#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export PATH=$MYDIR:$PATH
export SDL_VIDEODRIVER=NDS
export LD_LIBRARY_PATH=lib:/usr/local/lib:$LD_LIBRARY_PATH

cd $MYDIR

rm -rf rerun
cp drastic64 drastic64_patched

./drastic64

if [ -f rerun ]; then
    rm -rf rerun
    cp drastic64_patched drastic64
    ./drastic64
fi

rm -rf drastic64_patched
sync
