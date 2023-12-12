TARGET  = libdtr.so
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
LDFLAGS = -fpic -shared -ljson-c
MOD     = mmiyoo

ifeq ($(MOD),mmiyoo)
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao
endif

ifeq ($(MOD),trimui)
    CFLAGS += -DTRIMUI -I../trimui/inc
endif

ifeq ($(MOD),funkeys)
    CFLAGS += -DFUNKEYS -I../funkeys/inc
endif

all:
	$(CROSS)gcc main.c -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(TARGET)
