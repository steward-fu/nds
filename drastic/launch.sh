#!/bin/sh
mydir=`dirname "$0"`

export HOME=$mydir
export PATH=$mydir:$PATH
export LD_LIBRARY_PATH=$mydir/libs:$LD_LIBRARY_PATH
export SDL_VIDEODRIVER=mmiyoo
export SDL_AUDIODRIVER=mmiyoo
export EGL_VIDEODRIVER=mmiyoo

sv=`cat /proc/sys/vm/swappiness`

# 60 by default
echo 10 > /proc/sys/vm/swappiness

cd $mydir

./drastic "$1"
sync

echo $sv > /proc/sys/vm/swappiness
