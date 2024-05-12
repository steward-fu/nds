SDL2_CFG+= --disable-joystick-virtual
SDL2_CFG+= --disable-jack
SDL2_CFG+= --disable-power
SDL2_CFG+= --disable-sensor
SDL2_CFG+= --disable-ime
SDL2_CFG+= --disable-dbus
SDL2_CFG+= --disable-fcitx
SDL2_CFG+= --disable-hidapi
SDL2_CFG+= --disable-libudev
SDL2_CFG+= --disable-video-x11
SDL2_CFG+= --disable-video-kmsdrm
SDL2_CFG+= --disable-video-vulkan
SDL2_CFG+= --disable-video-wayland
SDL2_CFG+= --disable-video-dummy
SDL2_CFG+= --disable-sndio
SDL2_CFG+= --disable-diskaudio
SDL2_CFG+= --disable-pulseaudio
SDL2_CFG+= --disable-dummyaudio
SDL2_CFG+= --disable-oss
SDL2_CFG+= --disable-alsa

REL_VER  = $(shell git rev-parse HEAD | cut -c 1-8)

.PHONY: all
all:
	make -C loader MOD=$(MOD)
	make -C detour MOD=$(MOD)
	cp detour/libdtr.so drastic/libs/
	make -C alsa MOD=$(MOD)
	cp alsa/libasound.so.2 drastic/libs/
	make -C sdl2 -j4
	cp sdl2/build/.libs/libSDL2-2.0.so.0 drastic/libs/
	make -C unittest $(MOD)

.PHONY: cfg
cfg:
	cp -a assets/$(MOD)/* drastic/
	cd sdl2 && ./autogen.sh && MOD=$(MOD) ./configure $(SDL2_CFG) --host=$(HOST)

.PHONY: rel
rel:
	zip -r drastic_$(MOD)_$(REL_VER).zip drastic

.PHONY: clean
clean:
	rm -rf drastic/cpuclock
	rm -rf drastic/launch.sh
	rm -rf drastic/config.json
	rm -rf drastic/libs/libdtr.so
	rm -rf drastic/libs/libasound.so.2
	rm -rf drastic/libs/libSDL2-2.0.so.0
	rm -rf drastic/libs/libfreetype.so.6
	rm -rf drastic/libs/libglib-2.0.so.0
	rm -rf drastic/libs/libharfbuzz.so.0
	rm -rf drastic/libs/libpcre2-8.so.0
	make -C alsa clean
	make -C detour clean
	make -C loader clean
	make -C sdl2 distclean
	sed -i 's/screen_orientation.*/screen_orientation = 0/g' drastic/config/drastic.cfg
	cd drastic && mkdir -p backup scripts slot2 unzip_cache cheats input_record profiles savestates
