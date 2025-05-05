# Makefile to build and install the SDL library

top_builddir = .
srcdir  = /home/user/Data/nds/sdl2
objects = build
gen = gen
prefix = /usr/local
exec_prefix = ${prefix}
bindir	= ${exec_prefix}/bin
libdir  = ${exec_prefix}/lib
includedir = ${prefix}/include
datarootdir = ${prefix}/share
datadir	= ${datarootdir}
auxdir	= build-scripts
distpath = $(srcdir)/..
distdir = SDL2-2.0.20
distfile = $(distdir).tar.gz


SHELL	= /bin/bash
CC      = gcc
INCLUDE = -Iinclude -I/home/user/Data/nds/sdl2/include -idirafter /home/user/Data/nds/sdl2/src/video/khronos
CFLAGS  = -g -O3 -DUSING_GENERATED_CONFIG_H
EXTRA_CFLAGS = -Iinclude -I/home/user/Data/nds/sdl2/include -idirafter /home/user/Data/nds/sdl2/src/video/khronos  -mmmx -m3dnow -msse -Wall -fno-strict-aliasing -DNDS_VIDEO -fPIC -I../alsa -I../util -I../detour -I../inc/sdl2 -I/opt/mini/arm-buildroot-linux-gnueabihf/sysroot/usr/include/SDL2 -DUT -I../ut/src -I../ut/extras/fixture/src -I../ut/extras/memory/src -Wdeclaration-after-statement -Werror=declaration-after-statement  -D_REENTRANT   -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include  -D_REENTRANT -DHAVE_LINUX_VERSION_H
LDFLAGS = 
EXTRA_LDFLAGS =  -lm -lEGL -lGLESv2 -lSDL2_image -lSDL2_ttf -lrt -ljson-c ../util/libutil.so -L../detour -ldtr -ldl -lpthread -lrt
LIBTOOL = $(SHELL) $(top_builddir)/libtool
INSTALL = /usr/bin/install -c
AR	= ar
RANLIB	= ranlib
RC	= 
LINKER = $(CC)
LIBTOOLLINKERTAG = CC

TARGET  = libSDL2.la
OBJECTS = $(objects)/SDL.lo $(objects)/SDL_assert.lo $(objects)/SDL_dataqueue.lo $(objects)/SDL_error.lo $(objects)/SDL_hints.lo $(objects)/SDL_log.lo $(objects)/SDL_atomic.lo $(objects)/SDL_spinlock.lo $(objects)/SDL_audio.lo $(objects)/SDL_audiocvt.lo $(objects)/SDL_audiodev.lo $(objects)/SDL_audiotypecvt.lo $(objects)/SDL_mixer.lo $(objects)/SDL_wave.lo $(objects)/SDL_cpuinfo.lo $(objects)/SDL_dynapi.lo $(objects)/SDL_clipboardevents.lo $(objects)/SDL_displayevents.lo $(objects)/SDL_dropevents.lo $(objects)/SDL_events.lo $(objects)/SDL_gesture.lo $(objects)/SDL_keyboard.lo $(objects)/SDL_mouse.lo $(objects)/SDL_quit.lo $(objects)/SDL_touch.lo $(objects)/SDL_windowevents.lo $(objects)/imKStoUCS.lo $(objects)/SDL_rwops.lo $(objects)/SDL_haptic.lo $(objects)/SDL_hidapi.lo $(objects)/SDL_gamecontroller.lo $(objects)/SDL_joystick.lo $(objects)/e_atan2.lo $(objects)/e_exp.lo $(objects)/e_fmod.lo $(objects)/e_log.lo $(objects)/e_log10.lo $(objects)/e_pow.lo $(objects)/e_rem_pio2.lo $(objects)/e_sqrt.lo $(objects)/k_cos.lo $(objects)/k_rem_pio2.lo $(objects)/k_sin.lo $(objects)/k_tan.lo $(objects)/s_atan.lo $(objects)/s_copysign.lo $(objects)/s_cos.lo $(objects)/s_fabs.lo $(objects)/s_floor.lo $(objects)/s_scalbn.lo $(objects)/s_sin.lo $(objects)/s_tan.lo $(objects)/SDL_url.lo $(objects)/SDL_power.lo $(objects)/SDL_d3dmath.lo $(objects)/SDL_render.lo $(objects)/SDL_yuv_sw.lo $(objects)/SDL_render_d3d.lo $(objects)/SDL_shaders_d3d.lo $(objects)/SDL_render_d3d11.lo $(objects)/SDL_shaders_d3d11.lo $(objects)/nds_render.lo $(objects)/SDL_render_gl.lo $(objects)/SDL_shaders_gl.lo $(objects)/SDL_render_gles.lo $(objects)/SDL_render_gles2.lo $(objects)/SDL_shaders_gles2.lo $(objects)/SDL_render_psp.lo $(objects)/SDL_blendfillrect.lo $(objects)/SDL_blendline.lo $(objects)/SDL_blendpoint.lo $(objects)/SDL_drawline.lo $(objects)/SDL_drawpoint.lo $(objects)/SDL_render_sw.lo $(objects)/SDL_rotate.lo $(objects)/SDL_triangle.lo $(objects)/SDL_render_vita_gxm.lo $(objects)/SDL_render_vita_gxm_memory.lo $(objects)/SDL_render_vita_gxm_tools.lo $(objects)/SDL_sensor.lo $(objects)/SDL_crc32.lo $(objects)/SDL_getenv.lo $(objects)/SDL_iconv.lo $(objects)/SDL_malloc.lo $(objects)/SDL_qsort.lo $(objects)/SDL_stdlib.lo $(objects)/SDL_string.lo $(objects)/SDL_strtokr.lo $(objects)/SDL_thread.lo $(objects)/SDL_timer.lo $(objects)/SDL_RLEaccel.lo $(objects)/SDL_blit.lo $(objects)/SDL_blit_0.lo $(objects)/SDL_blit_1.lo $(objects)/SDL_blit_A.lo $(objects)/SDL_blit_N.lo $(objects)/SDL_blit_auto.lo $(objects)/SDL_blit_copy.lo $(objects)/SDL_blit_slow.lo $(objects)/SDL_bmp.lo $(objects)/SDL_clipboard.lo $(objects)/SDL_egl.lo $(objects)/SDL_fillrect.lo $(objects)/SDL_pixels.lo $(objects)/SDL_rect.lo $(objects)/SDL_shape.lo $(objects)/SDL_stretch.lo $(objects)/SDL_surface.lo $(objects)/SDL_video.lo $(objects)/SDL_vulkan_utils.lo $(objects)/SDL_yuv.lo $(objects)/yuv_rgb.lo $(objects)/SDL_locale.lo $(objects)/nds_event.lo $(objects)/nds_video.lo $(objects)/nds_joy.lo $(objects)/SDL_nullevents.lo $(objects)/SDL_nullframebuffer.lo $(objects)/SDL_nullvideo.lo $(objects)/SDL_diskaudio.lo $(objects)/SDL_dummyaudio.lo $(objects)/SDL_sysloadso.lo $(objects)/SDL_dspaudio.lo $(objects)/SDL_alsa_audio.lo $(objects)/SDL_pulseaudio.lo $(objects)/SDL_x11clipboard.lo $(objects)/SDL_x11dyn.lo $(objects)/SDL_x11events.lo $(objects)/SDL_x11framebuffer.lo $(objects)/SDL_x11keyboard.lo $(objects)/SDL_x11messagebox.lo $(objects)/SDL_x11modes.lo $(objects)/SDL_x11mouse.lo $(objects)/SDL_x11opengl.lo $(objects)/SDL_x11opengles.lo $(objects)/SDL_x11shape.lo $(objects)/SDL_x11touch.lo $(objects)/SDL_x11video.lo $(objects)/SDL_x11vulkan.lo $(objects)/SDL_x11window.lo $(objects)/SDL_x11xfixes.lo $(objects)/SDL_x11xinput2.lo $(objects)/edid-parse.lo $(objects)/SDL_dbus.lo $(objects)/SDL_ime.lo $(objects)/SDL_fcitx.lo $(objects)/SDL_hidapi_gamecube.lo $(objects)/SDL_hidapi_luna.lo $(objects)/SDL_hidapi_ps4.lo $(objects)/SDL_hidapi_ps5.lo $(objects)/SDL_hidapi_rumble.lo $(objects)/SDL_hidapi_stadia.lo $(objects)/SDL_hidapi_steam.lo $(objects)/SDL_hidapi_switch.lo $(objects)/SDL_hidapi_xbox360.lo $(objects)/SDL_hidapi_xbox360w.lo $(objects)/SDL_hidapi_xboxone.lo $(objects)/SDL_hidapijoystick.lo $(objects)/SDL_systhread.lo $(objects)/SDL_syssem.lo $(objects)/SDL_sysmutex.lo $(objects)/SDL_syscond.lo $(objects)/SDL_systls.lo $(objects)/SDL_sysurl.lo $(objects)/SDL_syslocale.lo $(objects)/SDL_sysjoystick.lo $(objects)/SDL_steamcontroller.lo $(objects)/SDL_syshaptic.lo $(objects)/SDL_syspower.lo $(objects)/SDL_sysfilesystem.lo $(objects)/SDL_systimer.lo $(objects)/SDL_udev.lo $(objects)/SDL_evdev.lo $(objects)/SDL_evdev_kbd.lo $(objects)/SDL_evdev_kbd_freebsd.lo $(objects)/SDL_evdev_capabilities.lo $(objects)/SDL_threadprio.lo $(objects)/SDL_poll.lo $(objects)/SDL_virtualjoystick.lo $(objects)/SDL_dummysensor.lo
GEN_HEADERS = 
GEN_OBJECTS = 
VERSION_OBJECTS = 

SDLMAIN_TARGET = libSDL2main.la
SDLMAIN_OBJECTS = $(objects)/SDL_dummy_main.lo

SDLTEST_TARGET = libSDL2_test.la
SDLTEST_OBJECTS = $(objects)/SDL_test_assert.lo $(objects)/SDL_test_common.lo $(objects)/SDL_test_compare.lo $(objects)/SDL_test_crc32.lo $(objects)/SDL_test_font.lo $(objects)/SDL_test_fuzzer.lo $(objects)/SDL_test_harness.lo $(objects)/SDL_test_imageBlit.lo $(objects)/SDL_test_imageBlitBlend.lo $(objects)/SDL_test_imageFace.lo $(objects)/SDL_test_imagePrimitives.lo $(objects)/SDL_test_imagePrimitivesBlend.lo $(objects)/SDL_test_log.lo $(objects)/SDL_test_md5.lo $(objects)/SDL_test_memory.lo $(objects)/SDL_test_random.lo

WAYLAND_SCANNER = 
WAYLAND_SCANNER_CODE_MODE = 

INSTALL_SDL2_CONFIG = TRUE

SRC_DIST = *.md *.txt acinclude Android.mk autogen.sh android-project build-scripts cmake cmake_uninstall.cmake.in configure configure.ac debian docs include Makefile.* sdl2-config.cmake.in sdl2-config-version.cmake.in sdl2-config.in sdl2.m4 sdl2.pc.in SDL2.spec.in SDL2Config.cmake src test VisualC VisualC-WinRT Xcode Xcode-iOS wayland-protocols
GEN_DIST = SDL2.spec

ifneq ($V,1)
RUN_CMD_AR     = @echo "  AR    " $@;
RUN_CMD_CC     = @echo "  CC    " $@;
RUN_CMD_CXX    = @echo "  CXX   " $@;
RUN_CMD_LTLINK = @echo "  LTLINK" $@;
RUN_CMD_RANLIB = @echo "  RANLIB" $@;
RUN_CMD_RC     = @echo "  RC    " $@;
RUN_CMD_GEN    = @echo "  GEN   " $@;
LIBTOOL += --quiet
endif

HDRS = \
	SDL.h \
	SDL_assert.h \
	SDL_atomic.h \
	SDL_audio.h \
	SDL_bits.h \
	SDL_blendmode.h \
	SDL_clipboard.h \
	SDL_cpuinfo.h \
	SDL_egl.h \
	SDL_endian.h \
	SDL_error.h \
	SDL_events.h \
	SDL_filesystem.h \
	SDL_gamecontroller.h \
	SDL_gesture.h \
	SDL_haptic.h \
	SDL_hidapi.h \
	SDL_hints.h \
	SDL_joystick.h \
	SDL_keyboard.h \
	SDL_keycode.h \
	SDL_loadso.h \
	SDL_locale.h \
	SDL_log.h \
	SDL_main.h \
	SDL_messagebox.h \
	SDL_metal.h \
	SDL_misc.h \
	SDL_mouse.h \
	SDL_mutex.h \
	SDL_name.h \
	SDL_opengl.h \
	SDL_opengl_glext.h \
	SDL_opengles.h \
	SDL_opengles2_gl2ext.h \
	SDL_opengles2_gl2.h \
	SDL_opengles2_gl2platform.h \
	SDL_opengles2.h \
	SDL_opengles2_khrplatform.h \
	SDL_pixels.h \
	SDL_platform.h \
	SDL_power.h \
	SDL_quit.h \
	SDL_rect.h \
	SDL_render.h \
	SDL_rwops.h \
	SDL_scancode.h \
	SDL_sensor.h \
	SDL_shape.h \
	SDL_stdinc.h \
	SDL_surface.h \
	SDL_system.h \
	SDL_syswm.h \
	SDL_thread.h \
	SDL_timer.h \
	SDL_touch.h \
	SDL_types.h \
	SDL_version.h \
	SDL_video.h \
	SDL_vulkan.h \
	begin_code.h \
	close_code.h

SDLTEST_HDRS = $(shell ls $(srcdir)/include | fgrep SDL_test)

LT_AGE      = 18
LT_CURRENT  = 18
LT_RELEASE  = 2.0
LT_REVISION = 2
LT_LDFLAGS  = -no-undefined -rpath $(libdir) -release $(LT_RELEASE) -version-info $(LT_CURRENT):$(LT_REVISION):$(LT_AGE)

all: $(srcdir)/configure Makefile $(objects)/$(TARGET) $(objects)/$(SDLMAIN_TARGET) $(objects)/$(SDLTEST_TARGET)

$(srcdir)/configure: $(srcdir)/configure.ac
	@echo "Warning, configure is out of date, please re-run autogen.sh"

Makefile: $(srcdir)/Makefile.in
	$(SHELL) config.status $@

Makefile.in:;

$(objects)/.created:
	$(SHELL) $(auxdir)/mkinstalldirs $(objects)
	touch $@

update-revision:
	$(SHELL) $(auxdir)/updaterev.sh

.PHONY: all update-revision install install-bin install-hdrs install-lib install-data uninstall uninstall-bin uninstall-hdrs uninstall-lib uninstall-data clean distclean dist $(OBJECTS:.lo=.d)

$(objects)/$(TARGET): $(GEN_HEADERS) $(GEN_OBJECTS) $(OBJECTS) $(VERSION_OBJECTS)
	$(RUN_CMD_LTLINK)$(LIBTOOL) --tag=$(LIBTOOLLINKERTAG) --mode=link $(LINKER) -o $@ $(OBJECTS) $(GEN_OBJECTS) $(VERSION_OBJECTS) $(LDFLAGS) $(EXTRA_LDFLAGS) $(LT_LDFLAGS)

$(objects)/$(SDLMAIN_TARGET): $(SDLMAIN_OBJECTS)
	$(RUN_CMD_LTLINK)$(LIBTOOL) --tag=$(LIBTOOLLINKERTAG) --mode=link $(LINKER) -static -o $@ $(SDLMAIN_OBJECTS) -rpath $(libdir)

$(objects)/$(SDLTEST_TARGET): $(SDLTEST_OBJECTS)
	$(RUN_CMD_LTLINK)$(LIBTOOL) --tag=$(LIBTOOLLINKERTAG) --mode=link $(LINKER) -static -o $@ $(SDLTEST_OBJECTS) -rpath $(libdir)

install: all install-bin install-hdrs install-lib install-data
install-bin:
ifeq ($(INSTALL_SDL2_CONFIG),TRUE)
	$(SHELL) $(auxdir)/mkinstalldirs $(DESTDIR)$(bindir)
	$(INSTALL) -m 755 sdl2-config $(DESTDIR)$(bindir)/sdl2-config
endif

install-hdrs: update-revision
	$(SHELL) $(auxdir)/mkinstalldirs $(DESTDIR)$(includedir)/SDL2
	for file in $(HDRS) $(SDLTEST_HDRS); do \
	    $(INSTALL) -m 644 $(srcdir)/include/$$file $(DESTDIR)$(includedir)/SDL2/$$file; \
	done
	$(INSTALL) -m 644 include/SDL_config.h $(DESTDIR)$(includedir)/SDL2/SDL_config.h
	if test -f include/SDL_revision.h; then \
	    $(INSTALL) -m 644 include/SDL_revision.h $(DESTDIR)$(includedir)/SDL2/SDL_revision.h; \
	else \
	    $(INSTALL) -m 644 $(srcdir)/include/SDL_revision.h $(DESTDIR)$(includedir)/SDL2/SDL_revision.h; \
	fi

install-lib: $(objects)/$(TARGET) $(objects)/$(SDLMAIN_TARGET) $(objects)/$(SDLTEST_TARGET)
	$(SHELL) $(auxdir)/mkinstalldirs $(DESTDIR)$(libdir)
	$(LIBTOOL) --mode=install $(INSTALL) $(objects)/$(TARGET) $(DESTDIR)$(libdir)/$(TARGET)
	$(LIBTOOL) --mode=install $(INSTALL) $(objects)/$(SDLMAIN_TARGET) $(DESTDIR)$(libdir)/$(SDLMAIN_TARGET)
	$(LIBTOOL) --mode=install $(INSTALL) $(objects)/$(SDLTEST_TARGET) $(DESTDIR)$(libdir)/$(SDLTEST_TARGET)
install-data:
	$(SHELL) $(auxdir)/mkinstalldirs $(DESTDIR)$(datadir)/aclocal
	$(INSTALL) -m 644 $(srcdir)/sdl2.m4 $(DESTDIR)$(datadir)/aclocal/sdl2.m4
	$(SHELL) $(auxdir)/mkinstalldirs $(DESTDIR)$(libdir)/pkgconfig
	$(INSTALL) -m 644 sdl2.pc $(DESTDIR)$(libdir)/pkgconfig
ifeq ($(INSTALL_SDL2_CONFIG),TRUE)
	$(SHELL) $(auxdir)/mkinstalldirs $(DESTDIR)$(libdir)/cmake/SDL2
	$(INSTALL) -m 644 sdl2-config.cmake $(DESTDIR)$(libdir)/cmake/SDL2
	$(INSTALL) -m 644 sdl2-config-version.cmake $(DESTDIR)$(libdir)/cmake/SDL2
endif

uninstall: uninstall-bin uninstall-hdrs uninstall-lib uninstall-data
uninstall-bin:
	rm -f $(DESTDIR)$(bindir)/sdl2-config
uninstall-hdrs:
	for file in $(HDRS) $(SDLTEST_HDRS); do \
	    rm -f $(DESTDIR)$(includedir)/SDL2/$$file; \
	done
	rm -f $(DESTDIR)$(includedir)/SDL2/SDL_config.h
	rm -f $(DESTDIR)$(includedir)/SDL2/SDL_revision.h
	-rmdir $(DESTDIR)$(includedir)/SDL2
uninstall-lib:
	$(LIBTOOL) --mode=uninstall rm -f $(DESTDIR)$(libdir)/$(TARGET)
	rm -f $(DESTDIR)$(libdir)/$(SDLMAIN_TARGET)
	rm -f $(DESTDIR)$(libdir)/$(SDLTEST_TARGET)
uninstall-data:
	rm -f $(DESTDIR)$(datadir)/aclocal/sdl2.m4
	rm -f $(DESTDIR)$(libdir)/pkgconfig/sdl2.pc
	rm -f $(DESTDIR)$(libdir)/cmake/SDL2/sdl2-config.cmake
	rm -f $(DESTDIR)$(libdir)/cmake/SDL2/sdl2-config-version.cmake

clean:
	rm -rf $(objects)
	rm -rf $(gen)
	if test -f test/Makefile; then (cd test; $(MAKE) $@); fi

distclean: clean
	rm -f Makefile Makefile.rules sdl2-config
	rm -f config.status config.cache config.log libtool
	rm -rf $(srcdir)/autom4te*
	find $(srcdir) \( \
	    -name '*~' -o \
	    -name '*.bak' -o \
	    -name '*.old' -o \
	    -name '*.rej' -o \
	    -name '*.orig' -o \
	    -name '.#*' \) \
	    -exec rm -f {} \;
	if test -f test/Makefile; then (cd test; $(MAKE) $@); fi

dist $(distfile):
	$(SHELL) $(auxdir)/mkinstalldirs $(distdir)
	(cd $(srcdir); tar cf - $(SRC_DIST)) | (cd $(distdir); tar xf -)
	tar cf - $(GEN_DIST) | (cd $(distdir); tar xf -)
	find $(distdir) \( \
	    -name '*~' -o \
	    -name '*.bak' -o \
	    -name '*.old' -o \
	    -name '*.rej' -o \
	    -name '*.orig' -o \
	    -name '.#*' \) \
	    -exec rm -f {} \;
	if test -f $(distdir)/test/Makefile; then (cd $(distdir)/test && make distclean); fi
	(cd $(distdir); build-scripts/updaterev.sh)
	tar cvf - $(distdir) | gzip --best >$(distfile)
	rm -rf $(distdir)

rpm: $(distfile)
	rpmbuild -ta $?

# Build rules for objects
-include $(OBJECTS:.lo=.d)

# Special dependency for SDL.c, since it depends on SDL_revision.h
/home/user/Data/nds/sdl2/src/SDL.c: update-revision

$(objects)/SDL.lo: /home/user/Data/nds/sdl2/src/SDL.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_assert.lo: /home/user/Data/nds/sdl2/src/SDL_assert.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_dataqueue.lo: /home/user/Data/nds/sdl2/src/SDL_dataqueue.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_error.lo: /home/user/Data/nds/sdl2/src/SDL_error.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hints.lo: /home/user/Data/nds/sdl2/src/SDL_hints.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_log.lo: /home/user/Data/nds/sdl2/src/SDL_log.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_atomic.lo: /home/user/Data/nds/sdl2/src/atomic/SDL_atomic.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_spinlock.lo: /home/user/Data/nds/sdl2/src/atomic/SDL_spinlock.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_audio.lo: /home/user/Data/nds/sdl2/src/audio/SDL_audio.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_audiocvt.lo: /home/user/Data/nds/sdl2/src/audio/SDL_audiocvt.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_audiodev.lo: /home/user/Data/nds/sdl2/src/audio/SDL_audiodev.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_audiotypecvt.lo: /home/user/Data/nds/sdl2/src/audio/SDL_audiotypecvt.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_mixer.lo: /home/user/Data/nds/sdl2/src/audio/SDL_mixer.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_wave.lo: /home/user/Data/nds/sdl2/src/audio/SDL_wave.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_cpuinfo.lo: /home/user/Data/nds/sdl2/src/cpuinfo/SDL_cpuinfo.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_dynapi.lo: /home/user/Data/nds/sdl2/src/dynapi/SDL_dynapi.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_clipboardevents.lo: /home/user/Data/nds/sdl2/src/events/SDL_clipboardevents.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_displayevents.lo: /home/user/Data/nds/sdl2/src/events/SDL_displayevents.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_dropevents.lo: /home/user/Data/nds/sdl2/src/events/SDL_dropevents.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_events.lo: /home/user/Data/nds/sdl2/src/events/SDL_events.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_gesture.lo: /home/user/Data/nds/sdl2/src/events/SDL_gesture.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_keyboard.lo: /home/user/Data/nds/sdl2/src/events/SDL_keyboard.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_mouse.lo: /home/user/Data/nds/sdl2/src/events/SDL_mouse.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_quit.lo: /home/user/Data/nds/sdl2/src/events/SDL_quit.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_touch.lo: /home/user/Data/nds/sdl2/src/events/SDL_touch.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_windowevents.lo: /home/user/Data/nds/sdl2/src/events/SDL_windowevents.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/imKStoUCS.lo: /home/user/Data/nds/sdl2/src/events/imKStoUCS.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_rwops.lo: /home/user/Data/nds/sdl2/src/file/SDL_rwops.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_haptic.lo: /home/user/Data/nds/sdl2/src/haptic/SDL_haptic.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi.lo: /home/user/Data/nds/sdl2/src/hidapi/SDL_hidapi.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_gamecontroller.lo: /home/user/Data/nds/sdl2/src/joystick/SDL_gamecontroller.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_joystick.lo: /home/user/Data/nds/sdl2/src/joystick/SDL_joystick.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/e_atan2.lo: /home/user/Data/nds/sdl2/src/libm/e_atan2.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/e_exp.lo: /home/user/Data/nds/sdl2/src/libm/e_exp.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/e_fmod.lo: /home/user/Data/nds/sdl2/src/libm/e_fmod.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/e_log.lo: /home/user/Data/nds/sdl2/src/libm/e_log.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/e_log10.lo: /home/user/Data/nds/sdl2/src/libm/e_log10.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/e_pow.lo: /home/user/Data/nds/sdl2/src/libm/e_pow.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/e_rem_pio2.lo: /home/user/Data/nds/sdl2/src/libm/e_rem_pio2.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/e_sqrt.lo: /home/user/Data/nds/sdl2/src/libm/e_sqrt.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/k_cos.lo: /home/user/Data/nds/sdl2/src/libm/k_cos.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/k_rem_pio2.lo: /home/user/Data/nds/sdl2/src/libm/k_rem_pio2.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/k_sin.lo: /home/user/Data/nds/sdl2/src/libm/k_sin.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/k_tan.lo: /home/user/Data/nds/sdl2/src/libm/k_tan.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/s_atan.lo: /home/user/Data/nds/sdl2/src/libm/s_atan.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/s_copysign.lo: /home/user/Data/nds/sdl2/src/libm/s_copysign.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/s_cos.lo: /home/user/Data/nds/sdl2/src/libm/s_cos.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/s_fabs.lo: /home/user/Data/nds/sdl2/src/libm/s_fabs.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/s_floor.lo: /home/user/Data/nds/sdl2/src/libm/s_floor.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/s_scalbn.lo: /home/user/Data/nds/sdl2/src/libm/s_scalbn.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/s_sin.lo: /home/user/Data/nds/sdl2/src/libm/s_sin.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/s_tan.lo: /home/user/Data/nds/sdl2/src/libm/s_tan.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_url.lo: /home/user/Data/nds/sdl2/src/misc/SDL_url.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_power.lo: /home/user/Data/nds/sdl2/src/power/SDL_power.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_d3dmath.lo: /home/user/Data/nds/sdl2/src/render/SDL_d3dmath.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render.lo: /home/user/Data/nds/sdl2/src/render/SDL_render.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_yuv_sw.lo: /home/user/Data/nds/sdl2/src/render/SDL_yuv_sw.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_d3d.lo: /home/user/Data/nds/sdl2/src/render/direct3d/SDL_render_d3d.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_shaders_d3d.lo: /home/user/Data/nds/sdl2/src/render/direct3d/SDL_shaders_d3d.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_d3d11.lo: /home/user/Data/nds/sdl2/src/render/direct3d11/SDL_render_d3d11.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_shaders_d3d11.lo: /home/user/Data/nds/sdl2/src/render/direct3d11/SDL_shaders_d3d11.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/nds_render.lo: /home/user/Data/nds/sdl2/src/render/nds/nds_render.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_gl.lo: /home/user/Data/nds/sdl2/src/render/opengl/SDL_render_gl.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_shaders_gl.lo: /home/user/Data/nds/sdl2/src/render/opengl/SDL_shaders_gl.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_gles.lo: /home/user/Data/nds/sdl2/src/render/opengles/SDL_render_gles.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_gles2.lo: /home/user/Data/nds/sdl2/src/render/opengles2/SDL_render_gles2.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_shaders_gles2.lo: /home/user/Data/nds/sdl2/src/render/opengles2/SDL_shaders_gles2.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_psp.lo: /home/user/Data/nds/sdl2/src/render/psp/SDL_render_psp.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blendfillrect.lo: /home/user/Data/nds/sdl2/src/render/software/SDL_blendfillrect.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blendline.lo: /home/user/Data/nds/sdl2/src/render/software/SDL_blendline.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blendpoint.lo: /home/user/Data/nds/sdl2/src/render/software/SDL_blendpoint.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_drawline.lo: /home/user/Data/nds/sdl2/src/render/software/SDL_drawline.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_drawpoint.lo: /home/user/Data/nds/sdl2/src/render/software/SDL_drawpoint.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_sw.lo: /home/user/Data/nds/sdl2/src/render/software/SDL_render_sw.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_rotate.lo: /home/user/Data/nds/sdl2/src/render/software/SDL_rotate.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_triangle.lo: /home/user/Data/nds/sdl2/src/render/software/SDL_triangle.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_vita_gxm.lo: /home/user/Data/nds/sdl2/src/render/vitagxm/SDL_render_vita_gxm.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_vita_gxm_memory.lo: /home/user/Data/nds/sdl2/src/render/vitagxm/SDL_render_vita_gxm_memory.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_render_vita_gxm_tools.lo: /home/user/Data/nds/sdl2/src/render/vitagxm/SDL_render_vita_gxm_tools.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_sensor.lo: /home/user/Data/nds/sdl2/src/sensor/SDL_sensor.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_crc32.lo: /home/user/Data/nds/sdl2/src/stdlib/SDL_crc32.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_getenv.lo: /home/user/Data/nds/sdl2/src/stdlib/SDL_getenv.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_iconv.lo: /home/user/Data/nds/sdl2/src/stdlib/SDL_iconv.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_malloc.lo: /home/user/Data/nds/sdl2/src/stdlib/SDL_malloc.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_qsort.lo: /home/user/Data/nds/sdl2/src/stdlib/SDL_qsort.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_stdlib.lo: /home/user/Data/nds/sdl2/src/stdlib/SDL_stdlib.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_string.lo: /home/user/Data/nds/sdl2/src/stdlib/SDL_string.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_strtokr.lo: /home/user/Data/nds/sdl2/src/stdlib/SDL_strtokr.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_thread.lo: /home/user/Data/nds/sdl2/src/thread/SDL_thread.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_timer.lo: /home/user/Data/nds/sdl2/src/timer/SDL_timer.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_RLEaccel.lo: /home/user/Data/nds/sdl2/src/video/SDL_RLEaccel.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blit.lo: /home/user/Data/nds/sdl2/src/video/SDL_blit.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blit_0.lo: /home/user/Data/nds/sdl2/src/video/SDL_blit_0.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blit_1.lo: /home/user/Data/nds/sdl2/src/video/SDL_blit_1.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blit_A.lo: /home/user/Data/nds/sdl2/src/video/SDL_blit_A.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blit_N.lo: /home/user/Data/nds/sdl2/src/video/SDL_blit_N.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blit_auto.lo: /home/user/Data/nds/sdl2/src/video/SDL_blit_auto.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blit_copy.lo: /home/user/Data/nds/sdl2/src/video/SDL_blit_copy.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_blit_slow.lo: /home/user/Data/nds/sdl2/src/video/SDL_blit_slow.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_bmp.lo: /home/user/Data/nds/sdl2/src/video/SDL_bmp.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_clipboard.lo: /home/user/Data/nds/sdl2/src/video/SDL_clipboard.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_egl.lo: /home/user/Data/nds/sdl2/src/video/SDL_egl.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_fillrect.lo: /home/user/Data/nds/sdl2/src/video/SDL_fillrect.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_pixels.lo: /home/user/Data/nds/sdl2/src/video/SDL_pixels.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_rect.lo: /home/user/Data/nds/sdl2/src/video/SDL_rect.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_shape.lo: /home/user/Data/nds/sdl2/src/video/SDL_shape.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_stretch.lo: /home/user/Data/nds/sdl2/src/video/SDL_stretch.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_surface.lo: /home/user/Data/nds/sdl2/src/video/SDL_surface.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_video.lo: /home/user/Data/nds/sdl2/src/video/SDL_video.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_vulkan_utils.lo: /home/user/Data/nds/sdl2/src/video/SDL_vulkan_utils.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_yuv.lo: /home/user/Data/nds/sdl2/src/video/SDL_yuv.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/yuv_rgb.lo: /home/user/Data/nds/sdl2/src/video/yuv2rgb/yuv_rgb.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_locale.lo: /home/user/Data/nds/sdl2/src/locale/SDL_locale.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/nds_event.lo: /home/user/Data/nds/sdl2/src/video/nds/nds_event.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/nds_video.lo: /home/user/Data/nds/sdl2/src/video/nds/nds_video.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/nds_joy.lo: /home/user/Data/nds/sdl2/src/joystick/nds/nds_joy.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_nullevents.lo: /home/user/Data/nds/sdl2/src/video/dummy/SDL_nullevents.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_nullframebuffer.lo: /home/user/Data/nds/sdl2/src/video/dummy/SDL_nullframebuffer.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_nullvideo.lo: /home/user/Data/nds/sdl2/src/video/dummy/SDL_nullvideo.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_diskaudio.lo: /home/user/Data/nds/sdl2/src/audio/disk/SDL_diskaudio.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_dummyaudio.lo: /home/user/Data/nds/sdl2/src/audio/dummy/SDL_dummyaudio.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_sysloadso.lo: /home/user/Data/nds/sdl2/src/loadso/dlopen/SDL_sysloadso.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_dspaudio.lo: /home/user/Data/nds/sdl2/src/audio/dsp/SDL_dspaudio.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_alsa_audio.lo: /home/user/Data/nds/sdl2/src/audio/alsa/SDL_alsa_audio.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_pulseaudio.lo: /home/user/Data/nds/sdl2/src/audio/pulseaudio/SDL_pulseaudio.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11clipboard.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11clipboard.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11dyn.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11dyn.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11events.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11events.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11framebuffer.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11framebuffer.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11keyboard.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11keyboard.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11messagebox.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11messagebox.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11modes.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11modes.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11mouse.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11mouse.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11opengl.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11opengl.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11opengles.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11opengles.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11shape.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11shape.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11touch.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11touch.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11video.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11video.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11vulkan.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11vulkan.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11window.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11window.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11xfixes.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11xfixes.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_x11xinput2.lo: /home/user/Data/nds/sdl2/src/video/x11/SDL_x11xinput2.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/edid-parse.lo: /home/user/Data/nds/sdl2/src/video/x11/edid-parse.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_dbus.lo: /home/user/Data/nds/sdl2/src/core/linux/SDL_dbus.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_ime.lo: /home/user/Data/nds/sdl2/src/core/linux/SDL_ime.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_fcitx.lo: /home/user/Data/nds/sdl2/src/core/linux/SDL_fcitx.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_gamecube.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_gamecube.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_luna.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_luna.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_ps4.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_ps4.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_ps5.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_ps5.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_rumble.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_rumble.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_stadia.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_stadia.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_steam.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_steam.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_switch.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_switch.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_xbox360.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_xbox360.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_xbox360w.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_xbox360w.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapi_xboxone.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapi_xboxone.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_hidapijoystick.lo: /home/user/Data/nds/sdl2/src/joystick/hidapi/SDL_hidapijoystick.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_systhread.lo: /home/user/Data/nds/sdl2/src/thread/pthread/SDL_systhread.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_syssem.lo: /home/user/Data/nds/sdl2/src/thread/pthread/SDL_syssem.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_sysmutex.lo: /home/user/Data/nds/sdl2/src/thread/pthread/SDL_sysmutex.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_syscond.lo: /home/user/Data/nds/sdl2/src/thread/pthread/SDL_syscond.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_systls.lo: /home/user/Data/nds/sdl2/src/thread/pthread/SDL_systls.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_sysurl.lo: /home/user/Data/nds/sdl2/src/misc/unix/SDL_sysurl.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_syslocale.lo: /home/user/Data/nds/sdl2/src/locale/unix/SDL_syslocale.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_sysjoystick.lo: /home/user/Data/nds/sdl2/src/joystick/linux/SDL_sysjoystick.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_steamcontroller.lo: /home/user/Data/nds/sdl2/src/joystick/steam/SDL_steamcontroller.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_syshaptic.lo: /home/user/Data/nds/sdl2/src/haptic/linux/SDL_syshaptic.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_syspower.lo: /home/user/Data/nds/sdl2/src/power/linux/SDL_syspower.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_sysfilesystem.lo: /home/user/Data/nds/sdl2/src/filesystem/unix/SDL_sysfilesystem.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_systimer.lo: /home/user/Data/nds/sdl2/src/timer/unix/SDL_systimer.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_udev.lo: /home/user/Data/nds/sdl2/src/core/linux/SDL_udev.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_evdev.lo: /home/user/Data/nds/sdl2/src/core/linux/SDL_evdev.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_evdev_kbd.lo: /home/user/Data/nds/sdl2/src/core/linux/SDL_evdev_kbd.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_evdev_kbd_freebsd.lo: /home/user/Data/nds/sdl2/src/core/freebsd/SDL_evdev_kbd_freebsd.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_evdev_capabilities.lo: /home/user/Data/nds/sdl2/src/core/linux/SDL_evdev_capabilities.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_threadprio.lo: /home/user/Data/nds/sdl2/src/core/linux/SDL_threadprio.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_poll.lo: /home/user/Data/nds/sdl2/src/core/unix/SDL_poll.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_virtualjoystick.lo: /home/user/Data/nds/sdl2/src/joystick/virtual/SDL_virtualjoystick.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_dummysensor.lo: /home/user/Data/nds/sdl2/src/sensor/dummy/SDL_dummysensor.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@


$(objects)/SDL_dummy_main.lo: /home/user/Data/nds/sdl2/src/main/dummy/SDL_dummy_main.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

$(objects)/SDL_test_assert.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_assert.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_common.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_common.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_compare.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_compare.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_crc32.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_crc32.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_font.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_font.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_fuzzer.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_fuzzer.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_harness.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_harness.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_imageBlit.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_imageBlit.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_imageBlitBlend.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_imageBlitBlend.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_imageFace.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_imageFace.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_imagePrimitives.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_imagePrimitives.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_imagePrimitivesBlend.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_imagePrimitivesBlend.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_log.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_log.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_md5.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_md5.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_memory.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_memory.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@ 
$(objects)/SDL_test_random.lo: /home/user/Data/nds/sdl2/src/test/SDL_test_random.c $(objects)/.created
	$(RUN_CMD_CC)$(LIBTOOL) --tag=CC --mode=compile $(CC) $(CFLAGS) $(EXTRA_CFLAGS) -MMD -MT $@ -c $< -o $@

