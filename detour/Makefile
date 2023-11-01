TARGET  = libdtr.so
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -I../mmiyoo/inc -mcpu=cortex-a7 -mfpu=neon-vfpv4 -O3 -Wl,--no-undefined
LDFLAGS = -fpic -shared -L../mmiyoo/lib -lmi_common -lmi_sys -lmi_gfx -lmi_ao -ljson-c

all:
	$(CROSS)gcc main.c -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(TARGET)
