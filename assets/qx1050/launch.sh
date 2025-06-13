#!/bin/sh
MYDIR=`dirname "$0"`
PATCH=/tmp/drastic64
DRASTIC=drastic64

export HOME=$MYDIR
export PATH=$MYDIR:$PATH
export SDL_VIDEODRIVER=NDS
export LD_LIBRARY_PATH=lib:/usr/local/lib:$LD_LIBRARY_PATH

cd $MYDIR

rm -rf rerun
cp $DRASTIC $PATCH
./$DRASTIC

if [ -f rerun ]; then
    rm -rf rerun
    $PATCH
fi

rm -rf $PATCH
sync
