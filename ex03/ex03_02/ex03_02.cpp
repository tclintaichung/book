#include <iostream>

int main() {
  int x = 0;
  int y = 0;

  std::cout << "Enter x: " << std::endl;
  std::cin >> x;
  std::cout << "Enter y: " << std::endl;
  std::cin >> y;

  std::cout << x << " is greater than " << y << " is " << (x > y) << std::endl;
  std::cout << x << " is less than " << y << " is " << (x < y) << std::endl;
  std::cout << x << " is equal to " << y << " is " << (x == y) << std::endl;

  return 0;
}