#include <iostream>

int main() {
  int x = 0;
  int low = 11;
  int up = 20;
  bool condition1 = false;
  bool condition2 = false;
  bool condition3 = false;

  std::cout << "Enter x: " << std::endl;
  std::cin >> x;

  condition1 = (x >= low) && (x <= up);
  condition2 = (x < low) || (x > up);
  condition3 = !(x >= up);

  std::cout << x << " is within [" << low << ", " << up << "]: " << condition1 << std::endl;
  std::cout << x << " is outside [" << low << ", " << up << "]: " << condition2 << std::endl;
  std::cout << x << " is less than " << up << ": " << condition1 << std::endl;

  return 0;
}