TARGET   = unittest
CFLAGS   = -ggdb
CFLAGS  += -Isrc
CFLAGS  += -Iextras/memory/src
CFLAGS  += -Iextras/fixture/src
LDFLAGS  = -Wl,--no-undefined
LDFLAGS += libdtr.so libasound.so.2 libSDL2-2.0.so.0
SRC      = src/unity.c extras/memory/src/unity_memory.c extras/fixture/src/unity_fixture.c main.c

.PHONY: mmiyoo trimui funkeys pandora
mmiyoo trimui funkeys pandora:
	rm -rf $(TARGET)

.PHONY: unittest
unittest:
	gcc $(SRC) $(CFLAGS) $(LDFLAGS) -o $(TARGET)
	LD_LIBRARY_PATH=../drastic/libs ./$(TARGET) -v

.PHONY: clean
clean:
	rm -rf $(TARGET)
