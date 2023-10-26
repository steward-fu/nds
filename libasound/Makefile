TARGET  = libasound.so.2
CROSS   = /opt/mmiyoo/bin/arm-linux-gnueabihf-
CFLAGS  = -Iincs
LDFLAGS = -fpic -shared -Llibs -lmi_common -lmi_sys -lmi_gfx -lmi_ao -ljson-c

all:
	$(CROSS)gcc main.c -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -rf $(TARGET)
