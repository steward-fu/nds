#!/bin/sh
mydir=`dirname "$0"`

export HOME=$mydir
export LD_LIBRARY_PATH=libs:/usr/miyoo/lib:/usr/lib
export SDL_VIDEODRIVER=mmiyoo
export SDL_AUDIODRIVER=mmiyoo
export EGL_VIDEODRIVER=mmiyoo

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness

cd $mydir

if [ -f 'libs/libEGL.so' ]; then
    rm -rf libs/libasound.so.2
    rm -rf libs/libEGL.so
    rm -rf libs/libGLESv1_CM.so
    rm -rf libs/libGLESv2.so
fi

./drastic
sync

echo $sv > /proc/sys/vm/swappiness
