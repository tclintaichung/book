#include "standard.hpp"

extern "C" { 
  void get_standard(int nation, float* factor) {
    switch (nation) {
      case 1:  // US standard
        factor[0] = 12000.0; 
        factor[1] = 3.517;  
        break;
      case 2: // Japan standard
        factor[0] = 10000.0; 
        factor[1] = 2.93;  
        break;
      case 3: // Taiwan standard
        factor[0] = 8000.0; 
        factor[1] = 2.34;  
        break;
      default:
        break;
    }
  }
}
