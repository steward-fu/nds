TARGET   = libdetour.so
LDFLAGS += -fPIC
LDFLAGS += -shared
SRC      = hook.c

.PHONY: all
all:
	$(CROSS)gcc $(SRC) -o $(TARGET) $(CFLAGS) $(LDFLAGS) $(MOREFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
