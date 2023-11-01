TARGET  = libasound.so.2
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -I../mmiyoo/inc -I../detour 
CFLAGS += -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3
LDFLAGS = -fpic -shared -Wl,--no-undefined
LDFLAGS+= -lpthread -lm
LDFLAGS+= -L../detour -ldtr
LDFLAGS+= -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao -ljson-c

all:
	$(CROSS)gcc main.c neon.S -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(TARGET)
