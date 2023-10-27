# NDS Emulator for Miyoo Mini (Plus)
## Introduction
This repository hosts all of resources, which include SDL2 and ALSA source code, needed for NDS emulator on Miyoo Mini (Plus) handheld. The NDS emulator we used is DraStic emulator (close-source) that obtained from RetroPie package and the ELF binary is in ARM32 format, not AArch64. The DraStic version is v2.5.0.4 and sha1 is ae9c215bdea88359cbcb3c259ce0d60a1f59986c. In this porting, I focusd on SDL2 and ALSA libraries and heavily customized for DraStic emulator on Miyoo Mini (Plus) handheld. Therefore, there are some hooking points used in this emulator. To make sure it works as expected, please use the correct DraStic emulator. It is welcome to file any suggestion or issue to this GitHub but I must say that I cannot make sure whether it can be fixed. Since this porting is heavily customized, it is not recommended for generic use-case on Miyoo Mini (Plus) handheld.

## How to prepare the build environment on Debian 10 x64
```
$ cd
$ wget https://github.com/steward-fu/miyoo-mini/releases/download/setup/toolchain.tar.gz
$ tar xvf toolchain.tar.gz
$ sudo mv mmiyoo /opt
$ sudo mv prebuilt /opt
$ export PATH=/opt/mmiyoo/bin/:$PATH
```

## How to build SDL2 library
```
$ cd sdl2
$ export MOD=mmiyoo
$ export CROSS=/opt/mmiyoo/bin/arm-linux-gnueabihf-
$ export CC=${CROSS}gcc
$ export AR=${CROSS}ar
$ export AS=${CROSS}as
$ export LD=${CROSS}ld
$ export CXX=${CROSS}g++
$ export HOST=arm-linux

$ ./autogen.sh
$ ./configure --disable-joystick-virtual --disable-sensor --disable-power --disable-alsa \
    --disable-diskaudio --disable-video-x11 --disable-video-wayland --disable-video-kmsdrm \
    --disable-video-vulkan --disable-dbus --disable-ime --disable-fcitx --disable-hidapi \ 
    --disable-pulseaudio --disable-sndio --disable-libudev --disable-jack --disable-video-opengl \
    --disable-video-opengles --disable-video-opengles2 --disable-oss --disable-dummyaudio \
    --disable-video-dummy --host=${HOST}

$ make -j4 V=99
```

## How to build ALSA library
```
$ cd libasound
$ make
```
