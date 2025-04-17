#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export LD_LIBRARY_PATH=lib:/usr/miyoo/lib:/usr/lib

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness

cd $MYDIR
./drastic $1
sync

echo $sv > /proc/sys/vm/swappiness
