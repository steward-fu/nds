TARGET  = libasound.so.2
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -I../detour
CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
LDFLAGS = -fpic -shared -Wl,--no-undefined
LDFLAGS+= -lpthread -lm -ljson-c
LDFLAGS+= -L../detour -ldtr

ifeq ($(MOD),mmiyoo)
    CFLAGS += -DMMIYOO -I../mmiyoo/inc
    LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao
else
    CFLAGS += -DTRIMUI -I../trimui/inc
endif

.PHONY: all
all:
	$(CROSS)gcc main.c neon.S -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
