#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export LD_LIBRARY_PATH=lib:$LD_LIBRARY_PATH

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness

cd $MYDIR
./runner&
sleep 1
SDL_VIDEODRIVER=NDS ./drastic "$1" > std.log 2>&1
sync

echo $sv > /proc/sys/vm/swappiness
