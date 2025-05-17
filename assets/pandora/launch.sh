#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export SDL_VIDEODRIVER=NDS
export LD_LIBRARY_PATH=lib:/usr/local/lib:$LD_LIBRARY_PATH

cd $MYDIR
./drastic
./restore
sync
