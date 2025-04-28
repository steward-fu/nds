TARGET   = ut
CFLAGS   = -ggdb
CFLAGS  += -Isrc
CFLAGS  += -Iextras/memory/src
CFLAGS  += -Iextras/fixture/src
LDFLAGS  = -Wl,--no-undefined
LDFLAGS += libdtr.so libasound.so.2 libSDL2-2.0.so.0
SRC      = src/unity.c extras/memory/src/unity_memory.c extras/fixture/src/unity_fixture.c main.c

.PHONY: ut
unt:
	$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) -o $(TARGET)
	LD_LIBRARY_PATH=../drastic/lib ./$(TARGET) -v

.PHONY: clean
clean:
	rm -rf $(TARGET)
