TARGET  = show_hotkeys
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -I/opt/mmiyoo/arm-buildroot-linux-gnueabihf/sysroot/usr/include -ggdb
LDFLAGS = -lSDL -lSDL_image -ljson-c

$(shell bin2header miyoo_cn.png hex_miyoo_cn > hex_miyoo_cn.h)
$(shell bin2header miyoo_en.png hex_miyoo_en > hex_miyoo_en.h)
$(shell bin2header trimui_cn.png hex_trimui_cn > hex_trimui_cn.h)
$(shell bin2header trimui_en.png hex_trimui_en > hex_trimui_en.h)

all:
	$(CROSS)gcc main.c $(CFLAGS) $(LDFLAGS) -o $(TARGET)

clean:
	rm -rf $(TARGET)
