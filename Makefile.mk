ifeq ($(NDS_GCC),1)
export CROSS=arm-linux-gnueabihf-
export PATH=/opt/mini/bin:$(shell echo $$PATH)
endif

export CC=${CROSS}gcc
export AR=${CROSS}ar
export AS=${CROSS}as
export LD=${CROSS}ld
export CXX=${CROSS}g++
export HOST=arm-linux

SDL2_CFG += --enable-video
SDL2_CFG += --disable-video-x11
SDL2_CFG += --disable-video-vulkan
SDL2_CFG += --disable-video-opengl
SDL2_CFG += --disable-video-opengles
SDL2_CFG += --disable-video-opengles2
SDL2_CFG += --disable-hidapi-joystick

REL_VER = $(shell git rev-parse HEAD | cut -c 1-8)

.PHONY: all
all: cfg
	make -C common MOD=$(MOD)
	cp common/libcommon.so drastic/lib/

	make -C detour MOD=$(MOD)
	cp detour/libdtr.so drastic/lib/

ifeq ($(NDS_ALSA),1)
	make -C alsa MOD=$(MOD)
	cp alsa/libasound.so.2 drastic/lib/
endif

	make -C sdl2 -j4
	cp sdl2/build/.libs/libSDL2-2.0.so.0 drastic/lib/

ifeq ($(NDS_RUNNER),1)
	make -C runner MOD=$(MOD)
	cp runner/runner drastic/
endif

ifeq ($(MOD),ut)
	make -C ut
endif

.PHONY: cfg
cfg:
	mkdir -p drastic/lib
ifneq ($(MOD),ut)
	cp -a assets/$(MOD)/* drastic/ || true
endif

ifeq ($(wildcard sdl2/Makefile),)
	cd sdl2 && ./autogen.sh && MOD=$(MOD) ./configure $(SDL2_CFG) --host=$(HOST)
endif

.PHONY: rel
rel:
	zip -r drastic_$(MOD)_$(REL_VER).zip drastic

.PHONY: clean
clean:
	make -C ut clean
	make -C alsa clean
	make -C detour clean
	make -C runner clean
	make -C common clean
	make -C sdl2 distclean > /dev/null 2>&1 || true
	rm -rf sdl2/Makefile
	rm -rf sdl2/configure
	rm -rf drastic/lib
	rm -rf drastic/14nds
	rm -rf drastic/run.sh
	rm -rf drastic/runner
	rm -rf drastic/icon.png
	rm -rf drastic/cpuclock
	rm -rf drastic/launch.sh
	rm -rf drastic/backup/
	rm -rf drastic/rerun
	rm -rf drastic/restore
	rm -rf drastic/savestates/
	rm -rf drastic/config.json
	rm -rf drastic/overlayfs.img
	rm -rf drastic/drastic64_patched
	rm -rf drastic/config/drastic.cf2
	rm -rf drastic/input_capture_crash.ir
