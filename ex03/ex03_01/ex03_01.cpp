#include <iostream>

int main() {
  char oper = '\0';
  int x = 0;
  int y = 0;

  std::cout << "Enter x: " << std::endl;
  std::cin >> x;
  std::cout << "Enter y: " << std::endl;
  std::cin >> y;

  std::cout << "x + y = " <<  x + y << std::endl;
  std::cout << "x - y = " <<  x - y << std::endl;
  std::cout << "x * y = " <<  x * y << std::endl;
  std::cout << "x / y = " <<  x / y << std::endl;
  std::cout << "x % y = " <<  x % y << std::endl;
  
  return 0;
}