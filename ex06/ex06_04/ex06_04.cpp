#include <iostream>

void standard(int nation, float* factor); 

int main() {
  int nation = 0;
  float ton = 0.0;
  float BTU = 0.0;
  float kW = 0.0;
  float factor[2];
  do {
    std::cout << "Enter nation (1: US, 2: Japan, 3: Taiwan): ";
    
    std::cin >> nation; 
    if (nation < 1 || nation > 3) {
      std::cout << "Invalid nation. Exiting." << std::endl;
      break;
    } 
    standard(nation, factor);
    std::cout << "Enter value in tons: ";
    std::cin >> ton;
    BTU = ton * factor[0];
    std::cout << ton << " tons = " << BTU << " BTU" << std::endl;
    kW = ton * factor[1];
    std::cout << ton << " tons = " << kW << " kW" << std::endl;
  } while (true);
  return 0;
}

void standard(int nation, float* factor) {
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