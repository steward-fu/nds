TARGET   = libasound.so.2
CFLAGS  += $(MORE_CFLAGS)
CFLAGS  += -I../detour
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fpic -shared
LDFLAGS += -lpthread
LDFLAGS += -lm
LDFLAGS += -L../detour
LDFLAGS += -ldtr
SOURCES  = main.c

ifneq ($(MOD), ut)
    SOURCES += neon_memcpy.S
endif

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
