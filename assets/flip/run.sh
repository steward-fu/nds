#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export SDL_VIDEODRIVER=NDS
export LD_LIBRARY_PATH=lib:$LD_LIBRARY_PATH

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness
echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

cd $MYDIR
./drastic "$1" > std.log 2>&1
sync

echo $sv > /proc/sys/vm/swappiness
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
