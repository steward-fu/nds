#!/bin/sh
mount mmiyoo.squashfs mnt
mount -o bind /sys mnt/sys
mount -o bind /dev mnt/dev
mount -o bind /proc mnt/proc
mount -o bind /mnt/drastic mnt/mnt/emu
mount -o bind /mnt/NDS mnt/mnt/NDS
chroot mnt /bin/sh -c "/mnt/emu/launch.sh $1"
umount mnt/mnt/emu
umount mnt/mnt/NDS
umount mnt/proc
umount mnt/sys
umount mnt/dev
umount mnt
