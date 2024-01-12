#!/bin/sh
mydir=`dirname "$0"`

export HOME=$mydir
export PATH=$mydir:$PATH
export LD_LIBRARY_PATH=$mydir/libs:/usr/local/lib:$LD_LIBRARY_PATH
export SDL_VIDEODRIVER=mmiyoo
export SDL_AUDIODRIVER=mmiyoo
export EGL_VIDEODRIVER=mmiyoo

if [ -f "libs/libpng16.so.16" ]; then
    mv libs/libpng16.so.16 libs/__libpng16.so.16
    mv libs/libz.so.1 libs/__libz.so.1
    mv libs/libSDL2_image-2.0.so.0 libs/__libSDL2_image-2.0.so.0
    mv libs/libSDL2_ttf-2.0.so.0 libs/__libSDL2_ttf-2.0.so.0
fi

cd $mydir
./drastic
./restore
sync

if [ -f "libs/__libpng16.so.16" ]; then
    mv libs/__libpng16.so.16 libs/libpng16.so.16
    mv libs/__libz.so.1 libs/libz.so.1
    mv libs/__libSDL2_image-2.0.so.0 libs/libSDL2_image-2.0.so.0
    mv libs/__libSDL2_ttf-2.0.so.0 libs/libSDL2_ttf-2.0.so.0
fi
