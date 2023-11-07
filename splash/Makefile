TARGET  = show_hotkeys
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -I/opt/mmiyoo/arm-buildroot-linux-gnueabihf/sysroot/usr/include
LDFLAGS = -lSDL -lSDL_image -ljson-c

all:
	$(CROSS)gcc main.c $(CFLAGS) $(LDFLAGS) -o $(TARGET)

clean:
	rm -rf $(TARGET)
