#!/bin/sh
CUST_LOGO=0
CUST_CPUCLOCK=1

mydir=`dirname "$0"`

#cd $mydir
#if [ ! -f "/tmp/.show_hotkeys" ]; then
#    touch /tmp/.show_hotkeys
#    LD_LIBRARY_PATH=./libs:/customer/lib:/config/lib ./show_hotkeys
#fi

export HOME=$mydir
export LD_LIBRARY_PATH=libs:/usr/miyoo/lib:/usr/lib
export SDL_VIDEODRIVER=mmiyoo
export SDL_AUDIODRIVER=mmiyoo
export EGL_VIDEODRIVER=mmiyoo

cd $mydir
if [ "$CUST_LOGO" == "1" ]; then
    ./png2raw
fi

sv=`cat /proc/sys/vm/swappiness`

# 60 by default
echo 10 > /proc/sys/vm/swappiness

cd $mydir

if [ -f 'libs/libEGL.so' ]; then
    rm -rf libs/libEGL.so
    rm -rf libs/libGLESv1_CM.so
    rm -rf libs/libGLESv2.so
fi

#if [ "$CUST_CPUCLOCK" == "1" ]; then
#    ./cpuclock 1500
#fi

./drastic "$1"
sync

echo $sv > /proc/sys/vm/swappiness
