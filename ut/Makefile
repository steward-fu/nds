TARGET   = ut
CFLAGS  += -ggdb
CFLAGS  += -Isrc
CFLAGS  += -Iextras/memory/src
CFLAGS  += -Iextras/fixture/src
LDFLAGS += -Wl,--no-undefined
LDFLAGS += libdtr.so
LDFLAGS += libasound.so.2
LDFLAGS += libSDL2-2.0.so.0
SOURCES  = main.c cases.c src/unity.c extras/memory/src/unity_memory.c extras/fixture/src/unity_fixture.c

.PHONY: all
all: gen_cases
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(SOURCES)
	LD_LIBRARY_PATH=../drastic/lib ./$(TARGET) -v

.PHONY: gen_cases
gen_cases:
	echo "#include \"unity_fixture.h\"" > cases.c
	echo "TEST_GROUP_RUNNER(detour)" >> cases.c
	echo "{" >> cases.c
	cat ../detour/main.c | grep 'TEST(' | sed 's/TEST/RUN_TEST_CASE/g' >> cases.c
	echo "}" >> cases.c

.PHONY: clean
clean:
	rm -rf $(TARGET)
