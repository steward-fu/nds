TARGET  = launcher
MOD     = mmiyoo
SRC     = main.c
LDFLAGS = -lSDL -lSDL_image -lSDL_ttf

ifeq ($(MOD),mmiyoo)
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
    LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao
endif

ifeq ($(MOD),trimui)
    CFLAGS += -DTRIMUI -I../trimui/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
endif

ifeq ($(MOD),funkeys)
    CFLAGS += -DFUNKEYS -I../funkeys/inc
    CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
endif

ifeq ($(MOD),pandora)
    CFLAGS += -DPANDORA
    CFLAGS += -mcpu=cortex-a8 -mtune=cortex-a8 -mfpu=neon -ffast-math -O3
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
