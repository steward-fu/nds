#!/bin/sh
CUST_LOGO=0
CUST_CPUCLOCK=1
USE_752x560_RES=0

mydir=`dirname "$0"`

cd $mydir
if [ ! -f "/tmp/.show_hotkeys" ]; then
    touch /tmp/.show_hotkeys
    LD_LIBRARY_PATH=./libs:/customer/lib:/config/lib ./show_hotkeys
fi

export HOME=$mydir
export PATH=$mydir:$PATH
export LD_LIBRARY_PATH=$mydir/libs:$LD_LIBRARY_PATH
export SDL_VIDEODRIVER=miyoo
export SDL_AUDIODRIVER=miyoo
export EGL_VIDEODRIVER=miyoo

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

cd $mydir
if [ "$CUST_LOGO" == "1" ]; then
    ./png2raw
fi

sv=`cat /proc/sys/vm/swappiness`

# 60 by default
echo 10 > /proc/sys/vm/swappiness

cd $mydir

if [ "$CUST_CPUCLOCK" == "1" ]; then
    ./cpuclock 1500
fi

./drastic "$1"
sync

echo $sv > /proc/sys/vm/swappiness

if [  -d "/customer/app/skin_large" ]; then
    USE_752x560_RES=0
fi

if [ "$USE_752x560_RES" == "1" ]; then
    fbset -g 640 480 640 960 32
fi
