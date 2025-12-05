#!/bin/sh
MYDIR=`dirname "$0"`
MYFS=$MYDIR/tmp

export HOME=$MYDIR
export SDL_VIDEODRIVER=NDS
export LD_LIBRARY_PATH=lib:$LD_LIBRARY_PATH

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness
echo performance > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor

if [ ! -d /usr/lib32 ]; then
    mkdir -p $MYFS
    mount -o loop $MYDIR/overlayfs.img $MYFS
    mount -t overlay overlay -o ro,lowerdir=/usr,upperdir=$MYFS/usr/upper,workdir=$MYFS/usr/work $MYFS/usr/merged_usr
    mount --bind $MYFS/usr/merged_usr /usr
fi

cd $MYDIR
./drastic "$1" > debug_drastic.log 2>&1
sync

echo $sv > /proc/sys/vm/swappiness
echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor
