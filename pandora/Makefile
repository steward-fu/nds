TARGET  = restore
LDFLAGS = -lX11 -lpthread

.PHONY: all
all:
	$(CC) $(TARGET).c -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
