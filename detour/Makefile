TARGET   = libdtr.so
CFLAGS  += $(MORE_CFLAGS)
CFLAGS  += -I../util
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fpic
LDFLAGS += -shared
LDFLAGS += libutil.so
SOURCES  = hook.c

ifneq ($(MOD),ut)
    SOURCES += hook.S
endif

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
