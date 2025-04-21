TARGET   = uidbg
CFLAGS  += -ggdb
CFLAGS  += -DUIDBG
CFLAGS  += -DSDL_VIDEO_DRIVER_NDS=1
CFLAGS  += -I/usr/include/SDL
LDFLAGS += -Wl,--no-undefined
LDFLAGS += -Wl,-rpath .
LDFLAGS += -Wl,-rpath-link .
LDFLAGS += -lm
LDFLAGS += -lpthread
LDFLAGS += -lSDL
LDFLAGS += ../lvgl/liblvgl.so
LDFLAGS += ../ucgui/libucgui.so
LDFLAGS += ../common/libcommon.so
SRCS     = main.c menu_nds.c ucgui_font.c

.PHONY: uidbg
uidbg:
	$(CROSS)gcc $(CFLAGS) $(SRCS) $(LDFLAGS) -o $(TARGET) $(MOREFLAGS)
	LD_LIBRARY_PATH=. ./$(TARGET)

a30 mini flip xt897 ut pc:
	rm -rf $(TARGET)

.PHONY: clean
clean:
	rm -rf $(TARGET) mynds.log

