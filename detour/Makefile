TARGET   = libdtr.so
CFLAGS   = $(MORE_CFLAGS)
LDFLAGS  = $(MORE_LDFLAGS)
LDFLAGS += -fpic
LDFLAGS += -shared
SOURCES  = main.c

ifneq ($(MOD),ut)
    SOURCES += main.S
endif

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
