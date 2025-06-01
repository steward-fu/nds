#!/bin/bash
MYDIR=`dirname "$0"`
MYLIB=lib

export HOME=$MYDIR
export SDL_VIDEODRIVER=NDS

cd $MYDIR
$MYLIB/ld-linux-armhf.so.3 --library-path $MYLIB ./drastic
sync
