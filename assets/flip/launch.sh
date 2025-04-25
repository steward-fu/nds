#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export GCONV_PATH=$MYDIR/lib

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness
echo 0 > /proc/sys/kernel/randomize_va_space

cd $MYDIR
lib/ld-linux-aarch64.so.1 --library-path lib ./drastic $1
sync

echo $sv > /proc/sys/vm/swappiness
