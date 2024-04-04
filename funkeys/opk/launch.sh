#!/bin/sh
echo "$1" > /mnt/drastic/rom.txt
mkdir -p mnt

insmod zsmalloc.ko
insmod zram.ko

echo 128M > /sys/block/zram0/disksize
mkswap /dev/zram0
swapon /dev/zram0

if [ -f "/lib/ld-linux-armhf.so.3" ]; then
    /mnt/drastic/launch.sh
else
    mount mmiyoo.squashfs mnt
    mount --bind /sys mnt/sys
    mount --bind /dev mnt/dev
    mount --bind /proc mnt/proc
    mount --bind /mnt/drastic mnt/mnt/emu
    mount --bind -o iocharset=utf8 /mnt/NDS mnt/mnt/NDS
    chroot mnt /bin/sh -c /mnt/emu/launch.sh
    umount mnt/mnt/emu
    umount mnt/mnt/NDS
    umount mnt/proc
    umount mnt/sys
    umount mnt/dev
    umount mnt
fi

swapoff swapon /dev/zram0
echo 1 > /sys/block/zram0/reset
rmmod zram.ko
rmmod zsmalloc.ko
