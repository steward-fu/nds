#!/bin/bash
MYDIR=`dirname "$0"`

sv=`cat /proc/sys/vm/swappiness`
echo 10 | sudo tee /proc/sys/vm/swappiness
echo performance | sudo tee /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
/usr/pandora/scripts/op_videofir.sh default

cd $MYDIR
op_runfbapp ./run.sh "$1"
./restore

echo $sv | sudo tee /proc/sys/vm/swappiness
echo ondemand | sudo tee /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
