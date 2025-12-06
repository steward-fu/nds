TARGET   = libcommon.so
CFLAGS  += $(MORE_CFLAGS)
CFLAGS  += -I.
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fPIC
LDFLAGS += -shared
SOURCES  = common.c

ifneq ($(MOD),ut)
ifneq ($(MOD),qx1050)
    SOURCES += common.S
endif
endif

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
