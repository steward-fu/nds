TARGET   = libasound.so.2
CFLAGS  += $(MORE_CFLAGS)
CFLAGS  += -I../util
CFLAGS  += -I../detour
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fpic -shared
LDFLAGS += -lpthread
LDFLAGS += -lm
LDFLAGS += libdtr.so
LDFLAGS += libutil.so
SOURCES  = snd.c

.PHONY: all
all:
	$(CC) $(SOURCES) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
