#include <iostream>

int main() {
  int x = 0;
  int y = 0;
  int new_xy = 0;

  std::cout << "Enter x: " << std::endl;
  std::cin >> x;
  std::cout << "Enter y: " << std::endl;
  std::cin >> y;

  new_xy = x & y;
  std::cout << x << " & " << y << " = " << new_xy << std::endl;

  new_xy = x | y;
  std::cout << x << " | " << y << " = " << new_xy << std::endl;

  new_xy = x ^ y;
  std::cout << x << " ^ " << y << " = " << new_xy << std::endl;

  return 0;
}