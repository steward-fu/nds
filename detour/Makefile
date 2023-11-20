TARGET  = libdtr.so
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
LDFLAGS = -fpic -shared -ljson-c

ifeq ($(MOD),trimui)
    CFLAGS += -DTRIMUI -I../trimui/inc
else
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao
endif

all:
	$(CROSS)gcc main.c -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(TARGET)
