CXXFLAGS = -I include  -std=c++11 -fopenmp -O3 -I/home/wxy/miniconda3/include/python3.7m
LDFLAGS = $(shell python3-config --ldflags)

DEPS = $(shell find include -xtype f)
CXX_SOURCES = dist.cpp

LIB_SO = dist.so

$(LIB_SO): $(CXX_SOURCES) $(DEPS)
	$(CXX) -o $@ $(CXXFLAGS) $(LDFLAGS) $(CXX_SOURCES) --shared -fPIC

clean:
	rm -rf $(LIB_SO)

