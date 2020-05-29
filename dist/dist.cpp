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

int num_threads = omp_get_num_procs();
//omp_set_num_threads(4);
cout<<"threads: "<<num_threads<<endl;

  #pragma omp parallel for num_threads(2)
  for(long i=0; i<2; i++) {
    for(long j=0; j<100000000; j++) {
    	long b = i+j;
  }
  }


    }
}

PYBIND11_MODULE(dist, m){
    m.def("dist", &dist::dist, " rimplementation dist algorithm(cpp)");
}
