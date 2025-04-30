#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export SDL_VIDEODRIVER=nds
export LD_LIBRARY_PATH=lib:$LD_LIBRARY_PATH

sv=`cat /proc/sys/vm/swappiness`
com=`cat /sys/module/gpio_keys_polled/parameters/l2r2combokey`

echo 10 > /proc/sys/vm/swappiness
echo 0 > /sys/module/gpio_keys_polled/parameters/l2r2combokey
echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

cd $MYDIR
./drastic "$1"
sync

echo $sv > /proc/sys/vm/swappiness
echo $com > /sys/module/gpio_keys_polled/parameters/l2r2combokey
