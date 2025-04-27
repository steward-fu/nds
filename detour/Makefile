TARGET  = libdtr.so
LDFLAGS = -fpic -shared
MOD     = mmiyoo
SRC     = main.c

ifeq ($(MOD),flip)
    CFLAGS += -DFLIP
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
    LDFLAGS+= -ljson-c
endif

ifeq ($(MOD),a30)
    CFLAGS += -DA30
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
    LDFLAGS+= -ljson-c
endif

ifeq ($(MOD),mmiyoo)
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
    LDFLAGS+= -ljson-c
    LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao
endif

ifeq ($(MOD),trimui)
    CFLAGS += -DTRIMUI -I../trimui/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
    LDFLAGS+= -ljson-c
endif

ifeq ($(MOD),pandora)
    CFLAGS += -DPANDORA
    CFLAGS += -mcpu=cortex-a8 -mtune=cortex-a8 -mfpu=neon -Wl,--no-undefined
endif

ifeq ($(MOD),qx1000)
    CFLAGS += -DQX1000
    CFLAGS += -mcpu=cortex-a53 -mtune=cortex-a53 -mfpu=neon -Wl,--no-undefined
endif

ifeq ($(MOD),unittest)
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    CFLAGS += -DUNITTEST -I../unittest/extras/fixture/src -I../unittest/src -I../unittest/extras/memory/src
endif


all:
	$(CROSS)gcc $(SRC) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(TARGET)
