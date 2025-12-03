ifeq ($(MOD),gkd2)
export CROSS=aarch64-linux-
export PATH=/opt/flip/bin:$(shell echo $$PATH)
LDFLAGS += -DGKD2
CFLAGS  += -I/opt/flip/aarch64-flip-linux-gnu/sysroot/usr/include/SDL2
endif

ifeq ($(MOD),gkdmini)
export CROSS=aarch64-linux-
export PATH=/opt/flip/bin:$(shell echo $$PATH)
LDFLAGS += -DGKDMINI
CFLAGS  += -I/opt/flip/aarch64-flip-linux-gnu/sysroot/usr/include/SDL2
endif

ifeq ($(MOD),trimui_brick)
export CROSS=aarch64-linux-gnu-
export PATH=/opt/brick/bin:$(shell echo $$PATH)
CFLAGS  += -I/opt/brick/usr/include
CFLAGS  += -I/opt/brick/usr/include/SDL2
LDFLAGS += -DTRIMUI_BRICK
LDFLAGS += -lrt
LDFLAGS += -lusc
LDFLAGS += -lIMGegl
LDFLAGS += -lPVROCL
LDFLAGS += -ljson-c
LDFLAGS += -lsrv_um
LDFLAGS += -lpthread
LDFLAGS += -lglslcompiler
LDFLAGS += -L/opt/brick/usr/lib
endif

export CC=${CROSS}gcc
export AR=${CROSS}ar
export AS=${CROSS}as
export LD=${CROSS}ld
export CXX=${CROSS}g++

REL_VER  = $(shell git rev-parse HEAD | cut -c 1-8)
CFLAGS  += -DREL_VER=0x$(REL_VER)

TARGET   = runner
CFLAGS  += -DRUNNER
CFLAGS  += -O3
CFLAGS  += -I.
CFLAGS  += -I../common
LDFLAGS += -lSDL2
LDFLAGS += -lSDL2_image
LDFLAGS += -lEGL
LDFLAGS += -lGLESv2
SOURCES  = runner.c ../common/common.c

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
