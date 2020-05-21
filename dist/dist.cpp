#include "include/pybind11/pybind11.h"
#include "include/pybind11/numpy.h"
#include "include/pybind11/stl.h"
#include "include/pybind11/stl_bind.h"
#include <iostream>
#include <queue>
#include <ctime>

#include <omp.h>

using namespace std;

namespace py = pybind11;

namespace dist{

    void  dist(
  
)
    {

	long b=0;
  #pragma omp parallel for
for(long a=0; a<10; a++)
  for(long i=0; i<10000000; i++) {
    for(long j=0; j<10000000; j++) {
    	b += 0.00001;
  }
  }


    }
}

PYBIND11_MODULE(dist, m){
    m.def("dist", &dist::dist, " rimplementation dist algorithm(cpp)");
}
