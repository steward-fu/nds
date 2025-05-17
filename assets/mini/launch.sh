#!/bin/sh
MYDIR=`dirname "$0"`
CUST_CPUCLOCK=1
USE_752x560_RES=0

export HOME=$MYDIR
export LD_LIBRARY_PATH=lib:$LD_LIBRARY_PATH
export SDL_VIDEODRIVER=nds
export SDL_AUDIODRIVER=nds

if [ -f /mnt/SDCARD/.tmp_update/script/stop_audioserver.sh ]; then
    /mnt/SDCARD/.tmp_update/script/stop_audioserver.sh
else
    killall audioserver
    killall audioserver.mod
fi

if [  -d "/customer/app/skin_large" ]; then
    USE_752x560_RES=1
fi

if [ "$USE_752x560_RES" == "1" ]; then
    fbset -g 752 560 752 1120 32
fi

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness
echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

cd $MYDIR

if [ "$CUST_CPUCLOCK" == "1" ]; then
    ./cpuclock 1500
fi

./drastic "$1" > std.log 2>&1
sync

echo $sv > /proc/sys/vm/swappiness
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

if [  -d "/customer/app/skin_large" ]; then
    USE_752x560_RES=0
fi

if [ "$USE_752x560_RES" == "1" ]; then
    fbset -g 640 480 640 960 32
fi
