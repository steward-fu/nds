TARGET   = libasound.so.2
CFLAGS  += $(MORE_CFLAGS)
CFLAGS  += -I../detour
CFLAGS  += -I../common
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fpic -shared
LDFLAGS += -lpthread
LDFLAGS += -lm
LDFLAGS += -L../detour
LDFLAGS += -ldtr
LDFLAGS += -L../common
LDFLAGS += -lcommon
SOURCES  = snd.c

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
