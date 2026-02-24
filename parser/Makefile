TARGET    = parser
CFLAGS   += $(MORE_CFLAGS)
CXXFLAGS += $(MORE_CXXFLAGS)
CXXFLAGS += -I/usr/local/include/fmt
CXXFLAGS += -std=c++17
LDFLAGS  += $(MORE_LDFLAGS)
LDFLAGS  += -lm
LDFLAGS  += -lfmt
SOURCES   = parser.cpp

.PHONY: all
all:
	$(CXX) $(SOURCES) -o $(TARGET) $(CXXFLAGS) $(LDFLAGS)

run:
	./parser ../drastic/drastic

.PHONY: clean
clean:
	rm -rf $(TARGET)
