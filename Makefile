CXX      = g++
CXXFLAGS = -std=c++17 -O2 -Ivendor
SRC      = src/main.cpp
OUT      = server

all: vendor/httplib.h $(OUT)

vendor/httplib.h:
	@mkdir -p vendor
	@echo "Downloading cpp-httplib..."
	@curl -sL https://raw.githubusercontent.com/yhirose/cpp-httplib/master/httplib.h -o vendor/httplib.h
	@echo "Done."

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f $(OUT)

distclean: clean
	rm -rf vendor/

.PHONY: all run clean distclean
