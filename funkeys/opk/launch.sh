#!/bin/sh
echo "$1" > /mnt/drastic/rom.txt
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
