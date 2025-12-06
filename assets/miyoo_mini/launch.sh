#!/bin/sh
MYDIR=`dirname "$0"`
RESTORE_RES=0

export HOME=$MYDIR
export SDL_VIDEODRIVER=NDS
export NDS_DEBUG_LEVEL=ERROR
export LD_LIBRARY_PATH=lib:$LD_LIBRARY_PATH

if [ -f /mnt/SDCARD/.tmp_update/script/stop_audioserver.sh ]; then
    /mnt/SDCARD/.tmp_update/script/stop_audioserver.sh
else
    killall audioserver
    killall audioserver.mod
fi

if [ -d "/customer/app/skin_large" ]; then
    RESTORE_RES=1
    fbset -g 640 480 640 960 32
fi

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness
echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

kill -STOP `pidof keymon`

cd $MYDIR
./cpuclock 1500
./drastic "$1" > debug_drastic.log 2>&1
sync
killall vol

echo $sv > /proc/sys/vm/swappiness
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

kill -CONT `pidof keymon`

if [ "$RESTORE_RES" == "1" ]; then
    fbset -g 752 560 752 1120 32
fi
