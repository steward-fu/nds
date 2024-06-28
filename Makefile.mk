REL_VER  = $(shell printf `git rev-parse HEAD | cut -c 1-8`_`date +%Y%m%d%H%M%S`)

CFLAGS  += -I../alsa
CFLAGS  += -I../detour
CFLAGS  += -I../common
CFLAGS  += -I../inc/nanopb
CFLAGS  += -I../inc/sdl2
CFLAGS  += -I../sdl2/include
CFLAGS  += -I../ucgui/GUI_X
CFLAGS  += -I../ucgui/GUI/Core
CFLAGS  += -I../ucgui/GUI/Widget
CFLAGS  += -I../ucgui/GUI/WM

ifeq ($(MOD),mini)
    CFLAGS  += -DNDS_ARM32
    CFLAGS  += -DMIYOO_MINI
    CFLAGS  += -mcpu=cortex-a7
    CFLAGS  += -mfpu=neon-vfpv4
    CFLAGS  += -I../alsa
    CFLAGS  += -I../detour
    CFLAGS  += -I../common
    CFLAGS  += -I../include/mini
    CFLAGS  += -I../include/nanopb
    LDFLAGS += -L../library/mini
    LDFLAGS += -lmi_ao
    LDFLAGS += -lmi_sys
    LDFLAGS += -lmi_gfx
    LDFLAGS += -lmi_common
    LDFLAGS += -lprotobuf-nanopb
    LDFLAGS += -Wl,--no-undefined
    SDL2CFG += --enable-nds-miyoo-mini
endif

ifeq ($(MOD),a30)
    CFLAGS  += -DNDS_ARM32
    CFLAGS  += -DMIYOO_EGL
    CFLAGS  += -DMIYOO_A30
    CFLAGS  += -mcpu=cortex-a7
    CFLAGS  += -mfpu=neon-vfpv4
    LDFLAGS += -L../lib/mini
    LDFLAGS += -lprotobuf-nanopb
    LDFLAGS += -Wl,--no-undefined
    SDL2CFG += --enable-nds-miyoo-egl
    SDL2CFG += --enable-nds-miyoo-a30
endif

ifeq ($(MOD),xt897)
    CFLAGS  += -DNDS_ARM32
    CFLAGS  += -DSFOS_EGL
    CFLAGS  += -DSFOS_XT897
    CFLAGS  += -mcpu=cortex-a7
    CFLAGS  += -mfpu=neon-vfpv4
    LDFLAGS += -lprotobuf-nanopb
    LDFLAGS += -Wl,--no-undefined
    SDL2CFG += --enable-nds-sfos-egl
    SDL2CFG += --enable-nds-sfos-xt897
endif

ifeq ($(MOD),flip)
    CFLAGS  += -DNDS_ARM64
    CFLAGS  += -DMIYOO_EGL
    CFLAGS  += -DMIYOO_FLIP
    CFLAGS  += -I/opt/flip/aarch64-flip-linux-gnu/sysroot/usr/include/libdrm
    LDFLAGS += -L../lib/flip
    LDFLAGS += -Wl,--no-undefined
    LDFLAGS += -lprotobuf-nanopb
    SDL2CFG += --enable-nds-miyoo-egl
    SDL2CFG += --enable-nds-miyoo-flip
endif

ifeq ($(MOD),ut)
    export ASAN_OPTIONS=detect_odr_violation=0
    CFLAGS  += -DUT
    CFLAGS  += -I../alsa
    CFLAGS  += -I../detour
    CFLAGS  += -I../common
    CFLAGS  += -I../include/nanopb
    CFLAGS  += -I../ut/src
    CFLAGS  += -I../ut/extras/memory/src
    CFLAGS  += -I../ut/extras/fixture/src
    CFLAGS  += -fno-omit-frame-pointer
    CFLAGS  += -fsanitize=address,leak,undefined
    SDL2CFG += --enable-nds-ut
endif

ifeq ($(MOD),uidbg)
    CFLAGS  += -DUIDBG
    LDFLAGS += -lprotobuf-nanopb
    SDL2CFG += --enable-nds-uidbg
endif

ifeq ($(DEBUG),1)
    CFLAGS  += -ggdb
    SDL2CFG += --enable-nds-debug
else
ifneq ($(MOD),ut)
    CFLAGS  += -O3
endif
endif

MYDIR = rel
export CC=${CROSS}gcc
export AR=${CROSS}ar
export AS=${CROSS}as
export LD=${CROSS}ld
export CXX=${CROSS}g++
export MOREFLAGS=${CFLAGS} ${LDFALGS}

.PHONY: all
all: cfg
	MOD=$(MOD) make -C common
	MOD=$(MOD) make -C detour
	MOD=$(MOD) make -C alsa
	MOD=$(MOD) make -C ucgui
ifneq ($(MOD),uidbg)
	MOD=$(MOD) make -C sdl2 -j4
endif
	MOD=$(MOD) make -C ut $(MOD)
	MOD=$(MOD) make -C uidbg $(MOD)

.PHONY: cfg
cfg:
ifneq ($(MOD),uidbg)
ifeq (,$(wildcard sdl2/Makefile))
	cd sdl2 && ./autogen.sh && ./configure $(SDL2CFG) --host=$(HOST)
endif
endif

.PHONY: rel
rel: mkdir prepare
ifeq ($(MOD),mini)
	cp -a assets/nds/armhf/* $(MYDIR)
	cp -a assets/lib/armhf/libz.so.1 $(MYDIR)/lib
	cp -a assets/lib/armhf/libEGL.so $(MYDIR)/lib
	cp -a assets/lib/armhf/libGLESv2.so $(MYDIR)/lib
	cp -a assets/lib/armhf/libpng16.so.16 $(MYDIR)/lib
	cp -a assets/lib/armhf/libjson-c.so.5 $(MYDIR)/lib
	cp -a assets/lib/armhf/libGLESv1_CM.so $(MYDIR)/lib
	cp -a assets/lib/armhf/libSDL2_ttf-2.0.so.0 $(MYDIR)/lib
	cp -a assets/lib/armhf/libSDL2_image-2.0.so.0 $(MYDIR)/lib
	cp -a assets/mini/* $(MYDIR)
	cp -a alsa/libasound.so.2 $(MYDIR)/lib
endif

ifeq ($(MOD),a30)
	cp -a assets/nds/armhf/* $(MYDIR)
	cp -a assets/lib/armhf/libz.so.1 $(MYDIR)/lib
	cp -a assets/lib/armhf/libpng16.so.16 $(MYDIR)/lib
	cp -a assets/lib/armhf/libjson-c.so.5 $(MYDIR)/lib
	cp -a assets/lib/armhf/libpcre2-8.so.0 $(MYDIR)/lib
	cp -a assets/lib/armhf/libharfbuzz.so.0 $(MYDIR)/lib
	cp -a assets/lib/armhf/libfreetype.so.6 $(MYDIR)/lib
	cp -a assets/lib/armhf/libglib-2.0.so.0 $(MYDIR)/lib
	cp -a assets/lib/armhf/libSDL2_ttf-2.0.so.0 $(MYDIR)/lib
	cp -a assets/lib/armhf/libSDL2_image-2.0.so.0 $(MYDIR)/lib
	cp -a assets/a30/* $(MYDIR)
	cp -a lib/a30/libprotobuf-nanopb.so.0 $(MYDIR)/lib
	adb shell rm -rf /mnt/SDCARD/rel && adb push rel /mnt/SDCARD
endif

ifeq ($(MOD),flip)
ifeq ($(DEBUG),1)
	cp -a gdb/aarch64/* $(MYDIR)
endif
	cp -a assets/nds/aarch64/* $(MYDIR)
	cp -a assets/lib/aarch64/libc.so.6 $(MYDIR)/lib
	cp -a assets/lib/aarch64/libm.so.6 $(MYDIR)/lib
	cp -a assets/lib/aarch64/libmpfr.so.6 $(MYDIR)/lib
	cp -a assets/lib/aarch64/libgmp.so.10 $(MYDIR)/lib
	cp -a assets/lib/aarch64/libstdc++.so.6 $(MYDIR)/lib
	cp -a assets/lib/aarch64/ld-linux-aarch64.so.1 $(MYDIR)/lib
	cp -a lib/flip/libprotobuf-nanopb.so.0 $(MYDIR)/lib
	cp -a assets/flip/* $(MYDIR)
	adb shell rm -rf /mnt/sdcard/rel && adb push rel /mnt/sdcard
endif

ifeq ($(MOD),xt897)
	cp -a assets/nds/armhf/* $(MYDIR)
	cp -a assets/sfos/* $(MYDIR)
	cp -a alsa/libasound.so.2 $(MYDIR)/lib
endif

.PHONY: prepare
prepare:
	cp -a sdl2/build/.libs/libSDL2-2.0.so.0.18.2 $(MYDIR)/lib/libSDL2-2.0.so.0
	cp -a ucgui/libucgui.so $(MYDIR)/lib
	cp -a common/libcommon.so $(MYDIR)/lib
	cp -a detour/libdetour.so $(MYDIR)/lib
	cp -a assets/res $(MYDIR)

.PHONY: mkdir
mkdir:
	rm -rf $(MYDIR)
	mkdir -p $(MYDIR)/lib
	mkdir -p $(MYDIR)/system

.PHONY: clean
clean:
	rm -rf ut/ut
	make -C ut clean
	make -C alsa clean
	make -C uidbg clean
	make -C ucgui clean
	make -C detour clean
	make -C common clean
	make -C sdl2 distclean > /dev/null 2>&1 || true
