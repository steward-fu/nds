#!/bin/sh
USE_CUST_CLOCK=0
mydir=`dirname "$0"`

export HOME=$mydir
export PATH=$mydir:$PATH
export LD_LIBRARY_PATH=$mydir/libs:$LD_LIBRARY_PATH

sv=`cat /proc/sys/vm/swappiness`

cd $mydir

[ ! -f "system/drastic_bios_arm7.bin" ] && exit
[ ! -f "system/drastic_bios_arm9.bin" ] && exit
[ ! -f "system/nds_bios_arm7.bin" ] && exit
[ ! -f "system/nds_bios_arm9.bin" ] && exit
[ ! -f "system/nds_firmware.bin" ] && exit

if [ -f "libs/libasound.so.2" ]; then
    rm -rf libs/libasound.so.2
fi

if [ "$USE_CUST_CLOCK" == "1" ]; then
    ./cpuclock 1400
fi

# 60 by default
echo 10 > /proc/sys/vm/swappiness

export SDL_VIDEODRIVER=mmiyoo
export SDL_AUDIODRIVER=alsa
export EGL_VIDEODRIVER=mmiyoo

rom=`cat rom.txt`
./drastic --color-depth 16 "$rom"
sync

echo $sv > /proc/sys/vm/swappiness

if [ "$USE_CUST_CLOCK" == "1" ]; then
    ./cpuclock 1000
fi

