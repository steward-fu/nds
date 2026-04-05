TARGET   = libcommon.so
CFLAGS  += $(MORE_CFLAGS)
CFLAGS  += -I.
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fPIC
LDFLAGS += -shared
SOURCES  = common.c

ifneq ($(MOD),ut)
    SOURCES += common.S
endif

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
