export CROSS=aarch64-linux-
export PATH=/opt/flip/bin:$(shell echo $$PATH)
export CC=${CROSS}gcc
export AR=${CROSS}ar
export AS=${CROSS}as
export LD=${CROSS}ld
export CXX=${CROSS}g++

TARGET   = runner
CFLAGS  += -DRUNNER
CFLAGS  += -O3
CFLAGS  += -I.
CFLAGS  += -I../util
CFLAGS  += -I/opt/mini/arm-buildroot-linux-gnueabihf/sysroot/usr/include/SDL2
LDFLAGS += -lSDL2
LDFLAGS += -lSDL2_image
LDFLAGS += -lEGL
LDFLAGS += -lGLESv2
SOURCES  = runner.c

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
