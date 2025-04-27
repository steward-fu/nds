#!/bin/sh
MYDIR=`dirname "$0"`

export HOME=$MYDIR
export SDL_VIDEODRIVER=mmiyoo

sv=`cat /proc/sys/vm/swappiness`
echo 10 > /proc/sys/vm/swappiness

cd $MYDIR

mount -t squashfs miyoo355_rootfs_32.img mnt
mount --bind /sys mnt/sys
mount --bind /dev mnt/dev
mount --bind /proc mnt/proc
mount --bind /var/run mnt/var/run
mount --bind /mnt/sdcard mnt/sdcard

chroot mnt

umount mnt/sdcard
umount mnt/var/run
umount mnt/proc
umount mnt/sys
umount mnt/dev
umount mnt

sync

echo $sv > /proc/sys/vm/swappiness
