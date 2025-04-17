TARGET   = libdetour.so
CFLAGS  += -fPIC
CFLAGS  += -shared
CFLAGS  += $(MOREFLAGS)
LDFLAGS += -L../common
LDFLAGS += -lcommon
SRCS     = hook.c

ifneq ($(MOD),ut)
ifneq ($(MOD),flip)
ifneq ($(MOD),uidbg)
   SRCS += hook.S
endif
endif
endif

.PHONY: all
all:
	$(CC) $(SRCS) $(CFLAGS) -o $(TARGET) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
