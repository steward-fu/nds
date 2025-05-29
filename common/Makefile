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

REL_VER = $(shell git rev-parse HEAD | cut -c 1-8)
CFLAGS += -DREL_VER=0x$(REL_VER)

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
