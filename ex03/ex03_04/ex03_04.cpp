#include <iostream>

int main() {
  int x = 0;
  int new_x = 0;
  int shift = 0;

  std::cout << "Enter x: " << std::endl;
  std::cin >> x;
  std::cout << "Enter number of digit to shift: " << std::endl;
  std::cin >> shift;

  new_x = x >> shift;
  std::cout << new_x << " is right shift " << shift << " digits of " << x << std::endl;
  new_x = x << shift;
  std::cout << new_x << " is left shift " << shift << " digits of " << x << std::endl;
  
  return 0;
}