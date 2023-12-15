TARGET  = libasound.so.2
CFLAGS  = -I../detour
LDFLAGS = -fpic -shared
LDFLAGS+= -lpthread -lm -ljson-c
LDFLAGS+= -L../detour -ldtr
MOD     = mmiyoo
SRC     = main.c

ifeq ($(MOD),mmiyoo)
    SRC    += neon.S
    CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
    LDFLAGS+= -Wl,--no-undefined
    LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao
endif

ifeq ($(MOD),trimui)
    SRC    += neon.S
    CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
    CFLAGS += -DTRIMUI -I../trimui/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
    LDFLAGS+= -Wl,--no-undefined
endif

ifeq ($(MOD),funkeys)
    SRC    += neon.S
    CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
    CFLAGS += -DFUNKEYS -I../funkeys/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
    LDFLAGS+= -Wl,--no-undefined
endif

ifeq ($(MOD),unittest)
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    CFLAGS += -DUNITTEST -I../unittest/extras/fixture/src -I../unittest/src -I../unittest/extras/memory/src
endif

.PHONY: all
all:
	$(CROSS)gcc $(SRC) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
