TARGET   = libcommon.so
CFLAGS  += $(MOREFLAGS)
LDFLAGS += -fPIC
LDFLAGS += -shared
LDFLAGS += -ljson-c
SRCS     = log.c cfg.c file.c cfg.pb.c

ifneq ($(MOD),ut)
ifneq ($(MOD),flip)
ifneq ($(MOD),uidbg)
        SRCS += memcpy.S
endif
endif
endif

.PHONY: all
all:
	$(CC) $(SRCS) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

.PHONY: proto
proto:
	sudo protoc --nanopb_out=-v:. cfg.proto

.PHONY: clean
clean:
	rm -rf $(TARGET)
