#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export SDL_VIDEODRIVER=mmiyoo
export LD_LIBRARY_PATH=libs

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness

cd $MYDIR
./drastic $1
sync

echo $sv > /proc/sys/vm/swappiness
