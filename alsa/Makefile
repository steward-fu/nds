TARGET  = libasound.so.2
CFLAGS  = -I../detour
LDFLAGS = -fpic -shared
LDFLAGS+= -lpthread -lm
LDFLAGS+= -L../detour -ldtr
MOD     = mmiyoo
SRC     = main.c

ifeq ($(MOD),mmiyoo)
    SRC    += neon.S
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
    LDFLAGS+= -Wl,--no-undefined -ljson-c
    LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao
endif

ifeq ($(MOD),trimui)
    SRC    += neon.S
    CFLAGS += -DTRIMUI -I../trimui/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
    LDFLAGS+= -Wl,--no-undefined -ljson-c
endif

ifeq ($(MOD),pandora)
    SRC    += neon.S
    CFLAGS += -DPANDORA
    CFLAGS += -mcpu=cortex-a8 -mtune=cortex-a8 -mfpu=neon -O3
    LDFLAGS+= -Wl,--no-undefined -ljson-c
endif

ifeq ($(MOD),qx1000)
    SRC    += neon.S
    CFLAGS += -DQX1000
    CFLAGS += -mcpu=cortex-a53 -mtune=cortex-a53 -mfpu=neon -O3
    LDFLAGS+= -Wl,--no-undefined -ljson-c -lpulse
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
