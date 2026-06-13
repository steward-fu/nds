TARGET   = libasound.so.2
CXXFLAGS  += $(MORE_CFLAGS)
CXXFLAGS  += -std=c++17
CXXFLAGS  += -I../detour
CXXFLAGS  += -I../common
LDFLAGS += $(MORE_LDFLAGS)
LDFLAGS += -fpic -shared
LDFLAGS += -lpthread
LDFLAGS += -lm
LDFLAGS += -L../detour
LDFLAGS += -ldtr
LDFLAGS += -L../common
LDFLAGS += -lcommon
SOURCES  = snd.cpp

.PHONY: all
all:
	$(CXX) $(SOURCES) -o $(TARGET) $(CXXFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm -rf $(TARGET)
