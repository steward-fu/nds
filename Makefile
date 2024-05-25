export MOD=mmiyoo
export PATH=/opt/mmiyoo/bin:$(shell echo $$PATH)
export CROSS=/opt/mmiyoo/bin/arm-linux-gnueabihf-
export CC=${CROSS}gcc
export AR=${CROSS}ar
export AS=${CROSS}as
export LD=${CROSS}ld
export CXX=${CROSS}g++
export HOST=arm-linux

$(shell cd sdl2 && rm -rf libEGL.so libGLESv2.so)
$(shell cd sdl2 && ln -s ../drastic/libs/libEGL.so)
$(shell cd sdl2 && ln -s ../drastic/libs/libGLESv2.so)

$(shell sed -i 's/"xv":80000/"xv":30000/g' drastic/resources/settings.json)
$(shell sed -i 's/"yv":85000/"yv":35000/g' drastic/resources/settings.json)

SDL2_CFG+= --disable-video-opengl
SDL2_CFG+= --disable-video-opengles
SDL2_CFG+= --disable-video-opengles2

include Makefile.mk
