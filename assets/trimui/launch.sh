#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export SDL_VIDEODRIVER=NDS
export DRASTIC_MIC_EN=1
export DRASTIC_MIC_NAME=NDS

sv=`cat /proc/sys/vm/swappiness`
com=`cat /sys/module/gpio_keys_polled/parameters/l2r2combokey`

echo 10 > /proc/sys/vm/swappiness
echo 0 > /sys/module/gpio_keys_polled/parameters/l2r2combokey
echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

cd $MYDIR
./lib/ld-linux-armhf.so.3 --library-path lib ./drastic "$1" > std.log 2>&1
sync

echo $sv > /proc/sys/vm/swappiness
echo $com > /sys/module/gpio_keys_polled/parameters/l2r2combokey
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
