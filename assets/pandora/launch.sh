#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export SDL_VIDEODRIVER=nds
export SDL_AUDIODRIVER=nds
export LD_LIBRARY_PATH=lib:/usr/local/lib:$LD_LIBRARY_PATH

cd $MYDIR
./drastic
./restore
sync
