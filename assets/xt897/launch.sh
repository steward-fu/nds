#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export PATH=$MYDIR:$PATH
export SDL_VIDEODRIVER=NDS
export LD_LIBRARY_PATH=lib:/usr/local/lib:$LD_LIBRARY_PATH

echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

cd $MYDIR
./drastic
sync

echo interactive > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
