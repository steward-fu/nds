#!/bin/sh
USE_752x560_RES=0
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export LD_LIBRARY_PATH=$MYDIR/lib:$LD_LIBRARY_PATH

if [ -f /mnt/SDCARD/.tmp_update/script/stop_audioserver.sh ]; then
    /mnt/SDCARD/.tmp_update/script/stop_audioserver.sh
else
    killall audioserver
    killall audioserver.mod
fi

if [ -d "/customer/app/skin_large" ]; then
    USE_752x560_RES=1
fi

if [ "$USE_752x560_RES" == "1" ]; then
    fbset -g 752 560 752 1120 32
fi

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness

cd $MYDIR
./drastic "$1"
sync

echo $sv > /proc/sys/vm/swappiness

if [ -d "/customer/app/skin_large" ]; then
    USE_752x560_RES=0
fi

if [ "$USE_752x560_RES" == "1" ]; then
    fbset -g 640 480 640 960 32
fi
