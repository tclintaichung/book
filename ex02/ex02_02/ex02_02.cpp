#include <iostream>

int main() {
  auto address = "1, Main Str., ";
  auto region = "West District, ";
  auto city = "Taichung";

  auto index1 = 3, index2 = 5, index3 = 7;
  city = "Taipei bbbbbb";

  std::cout << "The (" << index1+1 << ")-th character of \"" 
            << address << "\": " << address[index1] << std::endl;
  std::cout << "The (" << index2+1 << ")-th character of \"" 
            << region << "\": " << region[index2] << std::endl;
  std::cout << "The (" << index3+1 << ")-th character of \"" 
            << city << "\": " << city[index3] << std::endl;

  return 0;
}