TARGET   = libutil.so
CFLAGS  += $(MORE_CFLAGS)
CFLAGS  += -I.
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fPIC
LDFLAGS += -shared
SOURCES  = util.c

ifneq ($(MOD),ut)
    SOURCES += neon_memcpy.S
endif

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
