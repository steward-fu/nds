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
CFLAGS  += -DLV_CONF_SKIP

ifeq ($(MOD),mini)
    CFLAGS  += -DNDS_ARM32
    CFLAGS  += -DMIYOO_MINI
    CFLAGS  += -mcpu=cortex-a7
    CFLAGS  += -mfpu=neon-vfpv4
    CFLAGS  += -I../inc/mini
    LDFLAGS += -L../lib/mini
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
    CFLAGS  += -I../lvgl
    CFLAGS  += -I../ut/src
    CFLAGS  += -I../ut/extras/memory/src
    CFLAGS  += -I../ut/extras/fixture/src
    CFLAGS  += -fno-omit-frame-pointer
    CFLAGS  += -fsanitize=address,leak,undefined
    LDFLAGS += -lprotobuf-nanopb
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
MYLIB = $(MYDIR)/lib

export CC=${CROSS}gcc
export AR=${CROSS}ar
export AS=${CROSS}as
export LD=${CROSS}ld
export CXX=${CROSS}g++
export MOREFLAGS=${CFLAGS} ${LDFLAGS}

include lvgl/lvgl.mk

.PHONY: all
all: cfg lvgl
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

LVGL_OBJS  = $(CSRCS:c=o)
LVGL_OBJS += $(CXXSRCS:cpp=o)

.PHONY: lvgl
lvgl: $(LVGL_OBJS)
	$(CXX) -shared -fPIC $^ -o lvgl/liblvgl.so

%.o: %.c
	$(CC) -std=gnu99 -fPIC $(CFLAGS) $(LDFLAGS) -c $< -o $@

%.o: %.cpp
	$(CXX) -fPIC $(CFLAGS) $(LDFLAGS) -c $< -o $@

.PHONY: rel
rel: mkdir prepare
ifeq ($(MOD),mini)
ifeq ($(DEBUG),1)
	cp -a gdb/armhf/* $(MYDIR)
endif
	cp -a assets/mini/* $(MYDIR)
	cp -a assets/nds/armhf/* $(MYDIR)
	cp assets/lib/armhf/libz.so.1 $(MYLIB)
	cp assets/lib/armhf/libEGL.so $(MYLIB)
	cp assets/lib/armhf/libGLESv2.so $(MYLIB)
	cp assets/lib/armhf/libpng16.so.16 $(MYLIB)
	cp assets/lib/armhf/libjson-c.so.5 $(MYLIB)
	cp assets/lib/armhf/libGLESv1_CM.so $(MYLIB)
	cp assets/lib/armhf/libSDL2_ttf-2.0.so.0 $(MYLIB)
	cp assets/lib/armhf/libSDL2_image-2.0.so.0 $(MYLIB)
	cp alsa/libasound.so.2 $(MYLIB)
	cp lib/mini/libprotobuf-nanopb.so.0 $(MYLIB)
endif

ifeq ($(MOD),a30)
ifeq ($(DEBUG),1)
	cp -a gdb/armhf/* $(MYDIR)
endif
	cp -a assets/nds/armhf/* $(MYDIR)
	cp assets/lib/armhf/libz.so.1 $(MYLIB)
	cp assets/lib/armhf/libpng16.so.16 $(MYLIB)
	cp assets/lib/armhf/libjson-c.so.5 $(MYLIB)
	cp assets/lib/armhf/libpcre2-8.so.0 $(MYLIB)
	cp assets/lib/armhf/libharfbuzz.so.0 $(MYLIB)
	cp assets/lib/armhf/libfreetype.so.6 $(MYLIB)
	cp assets/lib/armhf/libglib-2.0.so.0 $(MYLIB)
	cp assets/lib/armhf/libSDL2_ttf-2.0.so.0 $(MYLIB)
	cp assets/lib/armhf/libSDL2_image-2.0.so.0 $(MYLIB)
	cp assets/a30/* $(MYDIR)
	cp lib/a30/libprotobuf-nanopb.so.0 $(MYLIB)
	adb shell rm -rf /mnt/SDCARD/rel && adb push rel /mnt/SDCARD
endif

ifeq ($(MOD),flip)
ifeq ($(DEBUG),1)
	cp -a gdb/aarch64/* $(MYDIR)
endif
	cp -a assets/flip/* $(MYDIR)
	cp -a assets/nds/aarch64/* $(MYDIR)
	cp assets/lib/aarch64/libc.so.6 $(MYLIB)
	cp assets/lib/aarch64/libm.so.6 $(MYLIB)
	cp assets/lib/aarch64/libmpfr.so.6 $(MYLIB)
	cp assets/lib/aarch64/libgmp.so.10 $(MYLIB)
	cp assets/lib/aarch64/libstdc++.so.6 $(MYLIB)
	cp assets/lib/aarch64/ld-linux-aarch64.so.1 $(MYLIB)
	cp lib/flip/libprotobuf-nanopb.so.0 $(MYLIB)
	adb shell rm -rf /mnt/sdcard/rel && adb push rel /mnt/sdcard
endif

ifeq ($(MOD),xt897)
	cp -a assets/nds/armhf/* $(MYDIR)
	cp -a assets/sfos/* $(MYDIR)
	cp alsa/libasound.so.2 $(MYLIB)
endif

.PHONY: prepare
prepare:
	#cp -a assets/bg $(MYDIR)
	cp -a assets/lang $(MYDIR)
	cp lvgl/liblvgl.so $(MYLIB)
	cp ucgui/libucgui.so $(MYLIB)
	cp detour/libdetour.so $(MYLIB)
	cp common/libcommon.so $(MYLIB)
	cp sdl2/build/.libs/libSDL2-2.0.so.0.18.2 $(MYLIB)/libSDL2-2.0.so.0

.PHONY: mkdir
mkdir:
	rm -rf $(MYDIR)
	mkdir -p $(MYLIB)
	mkdir -p $(MYDIR)/system

.PHONY: clean
clean:
	rm -rf $(MYDIR)
	rm -rf ut/ut
	rm -rf lvgl/liblvgl.so
	make -C ut clean
	make -C alsa clean
	make -C uidbg clean
	make -C ucgui clean
	make -C detour clean
	make -C common clean
	make -C sdl2 distclean > /dev/null 2>&1 || true
	find lvgl -name "*.o" -exec rm -rf {} \;
