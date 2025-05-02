#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness

cd $MYDIR

kill -9 `pidof runner`
LD_LIBRARY_PATH=/usr/trimui/lib ./runner&
sleep 1

export SDL_VIDEODRIVER=NDS
./lib/ld-linux-armhf.so.3 --library-path lib ./drastic "$1" > std.log 2>&1
kill -9 `pidof runner`

sync
echo $sv > /proc/sys/vm/swappiness
