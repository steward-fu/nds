TARGET   = libdtr.so
CFLAGS  += $(MORE_CFLAGS)
CFLAGS  += -I../common
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fpic
LDFLAGS += -shared
LDFLAGS += -L../common
LDFLAGS += -lcommon
LDFLAGS += -lpthread
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
