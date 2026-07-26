#include <iostream>

int main() {
  char name[20];
  int lucky_number;

  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Enter your lucky number: ";
  std::cin >> lucky_number;
  std::cout << name << ": Your lucky number is " << lucky_number << std::endl;
  return 0;
}