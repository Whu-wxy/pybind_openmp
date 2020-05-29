CXXFLAGS = -I include  -std=c++11 -fopenmp -O3 -I/home/beidou/.conda/envs/torch1/include/python3.7m
LDFLAGS = $(shell python-config --ldflags)
LIB += -lgomp

DEPS = $(shell find include -xtype f)
CXX_SOURCES = dist.cpp

LIB_SO = dist.so

$(LIB_SO): $(CXX_SOURCES) $(DEPS)
	$(CXX) -o $@ $(CXXFLAGS) $(LDFLAGS) $(CXX_SOURCES) --shared -fPIC

clean:
	rm -rf $(LIB_SO)

