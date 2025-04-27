#!/bin/sh
MYDIR=`dirname "$0"`
PORT32=`dirname "$0"`/../PORT32
IMG=miyoo355_rootfs_32.img

cd $MYDIR

if [ ! -f $IMG ]; then
if [ ! -f $PORT32/$IMG ]; then
    exit
fi
IMG=$PORT32/$IMG
fi


mkdir -p mnt
mount -t squashfs $IMG mnt
mount --bind /sys mnt/sys
mount --bind /dev mnt/dev
mount --bind /proc mnt/proc
mount --bind /var/run mnt/var/run
mount --bind /mnt/sdcard mnt/sdcard

chroot mnt /bin/sh -c "cd /sdcard/Emu/drastic && ./run.sh \"$1\""

umount mnt/sdcard
umount mnt/var/run
umount mnt/proc
umount mnt/sys
umount mnt/dev
umount mnt
