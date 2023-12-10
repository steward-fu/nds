#!/bin/sh
mydir=`dirname "$0"`

export HOME=$mydir
export PATH=$mydir:$PATH
export LD_LIBRARY_PATH=$mydir/libs:$LD_LIBRARY_PATH

sv=`cat /proc/sys/vm/swappiness`

# 60 by default
echo 10 > /proc/sys/vm/swappiness

export SDL_VIDEODRIVER=mmiyoo
export SDL_AUDIODRIVER=alsa
export EGL_VIDEODRIVER=mmiyoo

cd $mydir

if [ -f "libs/libasound.so.2" ]; then
    rm -rf libs/libasound.so.2
fi

rom=`cat rom.txt`
./drastic "$rom"
sync

echo $sv > /proc/sys/vm/swappiness
