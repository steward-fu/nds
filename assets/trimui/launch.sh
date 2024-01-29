#!/bin/sh
mydir=`dirname "$0"`

export HOME=$mydir
export PATH=$mydir:$PATH
export LD_LIBRARY_PATH=$mydir/libs:$LD_LIBRARY_PATH

sv=`cat /proc/sys/vm/swappiness`
com=`cat /sys/module/gpio_keys_polled/parameters/l2r2combokey`

# 60 by default
echo 10 > /proc/sys/vm/swappiness
echo 0 > /sys/module/gpio_keys_polled/parameters/l2r2combokey

cd $mydir
if [ ! -f "/tmp/.show_hotkeys" ]; then
    touch /tmp/.show_hotkeys
    LD_LIBRARY_PATH=/usr/trimui/lib:$LD_LIBRARY_PATH ./show_hotkeys
fi

export SDL_VIDEODRIVER=mmiyoo
export SDL_AUDIODRIVER=mmiyoo
export EGL_VIDEODRIVER=mmiyoo

cd $mydir
./drastic "$1"
sync

echo $sv > /proc/sys/vm/swappiness
echo $com > /sys/module/gpio_keys_polled/parameters/l2r2combokey
