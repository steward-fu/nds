TARGET  = libdtr.so
LDFLAGS = -fpic -shared -ljson-c
MOD     = mmiyoo
SRC     = main.c

ifeq ($(MOD),mmiyoo)
    CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    CFLAGS  = -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
    LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao
endif

ifeq ($(MOD),trimui)
    CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
    CFLAGS += -DTRIMUI -I../trimui/inc
    CFLAGS  = -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
endif

ifeq ($(MOD),funkeys)
    CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
    CFLAGS += -DFUNKEYS -I../funkeys/inc
    CFLAGS  = -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
endif

ifeq ($(MOD),unittest)
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    CFLAGS += -DUNITTEST -I../unittest/extras/fixture/src -I../unittest/src -I../unittest/extras/memory/src
endif


all:
	$(CROSS)gcc $(SRC) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(TARGET)
