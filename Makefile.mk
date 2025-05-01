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

REL_VER = $(shell git rev-parse HEAD | cut -c 1-8)

.PHONY: all
all: cfg
	make -C util MOD=$(MOD)
ifeq ($(NDS_RUNNER),1)
	make -C runner MOD=$(MOD)
	cp runner/runner drastic/
endif
	make -C detour MOD=$(MOD)
ifeq ($(NDS_ALSA),1)
	make -C alsa MOD=$(MOD)
	cp alsa/libasound.so.2 drastic/lib/
endif
	make -C sdl2 -j4
	cp util/libutil.so   drastic/lib/
	cp detour/libdtr.so  drastic/lib/
	cp sdl2/build/.libs/libSDL2-2.0.so.0 drastic/lib/

ifeq ($(MOD),ut)
	make -C ut
endif

.PHONY: cfg
cfg:
ifneq ($(MOD),ut)
	cp -a assets/$(MOD)/* drastic/
endif

ifeq ($(wildcard sdl2/Makefile),)
	cd sdl2 && ./autogen.sh && MOD=$(MOD) ./configure --enable-video --host=$(HOST)
endif

.PHONY: rel
rel:
	zip -r drastic_$(MOD)_$(REL_VER).zip drastic

.PHONY: clean
clean:
	make -C ut clean
	make -C util clean
	make -C alsa clean
	make -C detour clean
	make -C sdl2 distclean > /dev/null 2>&1 || true
	rm -rf sdl2/Makefile
	rm -rf sdl2/configure
	rm -rf drastic/cpuclock
	rm -rf drastic/14nds
	rm -rf drastic/run.sh
	rm -rf drastic/runner
	rm -rf drastic/launch.sh
	rm -rf drastic/config.json
	rm -rf drastic/lib/libdtr.so
	rm -rf drastic/lib/libutil.so
	rm -rf drastic/lib/libasound.so.2
	rm -rf drastic/lib/libSDL2-2.0.so.0
	rm -rf drastic/config/drastic.cf2
