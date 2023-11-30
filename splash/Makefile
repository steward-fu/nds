TARGET  = show_hotkeys
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -I/opt/mmiyoo/arm-buildroot-linux-gnueabihf/sysroot/usr/include
LDFLAGS = -lSDL -lSDL_image -ljson-c
MOD     = mmiyoo

ifeq ($(MOD),mmiyoo)
    $(shell bin2header miyoo_cn.png hex_cn > hex_cn.h)
    $(shell bin2header miyoo_en.png hex_en > hex_en.h)
else
    $(shell bin2header trimui_cn.png hex_cn > hex_cn.h)
    $(shell bin2header trimui_en.png hex_en > hex_en.h)
endif

all:
	$(CROSS)gcc main.c $(CFLAGS) $(LDFLAGS) -o $(TARGET)

clean:
	rm -rf $(TARGET)
