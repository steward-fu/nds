TARGET   = libasound.so.2
LDFLAGS += -fPIC
LDFLAGS += -shared
LDFLAGS += -lm
LDFLAGS += -lpthread
LDFLAGS += -L../common
LDFLAGS += -lcommon
LDFLAGS += -L../detour
LDFLAGS += -ldetour
SRCS     = snd.c

.PHONY: all
all:
	$(CC) $(SRCS) -o $(TARGET) $(CFLAGS) $(LDFLAGS) $(MOREFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
