#!/bin/sh
mydir=`dirname "$0"`

export HOME=$mydir
export PATH=$mydir:$PATH
export LD_LIBRARY_PATH=$mydir/libs:/usr/local/lib:$LD_LIBRARY_PATH
export SDL_VIDEODRIVER=mmiyoo
export SDL_AUDIODRIVER=mmiyoo
export EGL_VIDEODRIVER=mmiyoo

cd $mydir

if [ -f "libs/libpng16.so.16" ]; then
    mv libs/libEGL.so              libs/__libEGL.so
    mv libs/libGLESv1_CM.so        libs/__libGLESv1_CM.so
    mv libs/libGLESv2.so           libs/__libGLESv2.so
    mv libs/libpng16.so.16         libs/__libpng16.so.16
    mv libs/libz.so.1              libs/__libz.so.1
    mv libs/libSDL2_image-2.0.so.0 libs/__libSDL2_image-2.0.so.0
    mv libs/libSDL2_ttf-2.0.so.0   libs/__libSDL2_ttf-2.0.so.0
fi

./drastic
sync

if [ -f "libs/__libpng16.so.16" ]; then
    mv libs/__libEGL.so              libs/libEGL.so
    mv libs/__libGLESv1_CM.so        libs/libGLESv1_CM.so
    mv libs/__libGLESv2.so           libs/libGLESv2.so
    mv libs/__libpng16.so.16         libs/libpng16.so.16
    mv libs/__libz.so.1              libs/libz.so.1
    mv libs/__libSDL2_image-2.0.so.0 libs/libSDL2_image-2.0.so.0
    mv libs/__libSDL2_ttf-2.0.so.0   libs/libSDL2_ttf-2.0.so.0
fi

