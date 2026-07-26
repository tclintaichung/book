#include <iostream>
#include "./include/standard.hpp"

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
    get_standard(nation, factor);
    std::cout << "Enter value in tons: ";
    std::cin >> ton;
    BTU = ton * factor[0];
    std::cout << ton << " tons = " << BTU << " BTU" << std::endl;
    kW = ton * factor[1];
    std::cout << ton << " tons = " << kW << " kW" << std::endl;
  } while (true);
  return 0;
}