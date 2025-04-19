TARGET   = ut
CFLAGS  += -ggdb
CFLAGS  += -Isrc
CFLAGS  += -Iextras/memory/src
CFLAGS  += -Iextras/fixture/src
LDFLAGS += -Wl,--no-undefined
LDFLAGS += -Wl,-rpath .
LDFLAGS += -Wl,-rpath-link .
LDFLAGS += ../lvgl/liblvgl.so
LDFLAGS += ../ucgui/libucgui.so
LDFLAGS += ../alsa/libasound.so.2
LDFLAGS += ../common/libcommon.so
LDFLAGS += ../detour/libdetour.so
LDFLAGS += ../sdl2/build/.libs/libSDL2-2.0.so.0
SRCS     = main.c src/unity.c \
           extras/memory/src/unity_memory.c \
           extras/fixture/src/unity_fixture.c

.PHONY: ut
ut:
	$(CROSS)gcc $(SRCS) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(MOREFLAGS)
	mkdir -p system && LD_LIBRARY_PATH=. ./$(TARGET) -v

a30 mini flip xt897 uidbg:
	rm -rf $(TARGET)

.PHONY: clean
clean:
	rm -rf $(TARGET) mynds.log system

