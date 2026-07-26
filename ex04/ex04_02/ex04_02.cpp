#include <iostream>

int main() {
  int year = 0;

  std::cout << "Enter year: ";
  std::cin >> year;
  if (year < 0) {
    std::cout << "Invalid year. Exiting." << std::endl;
    return 1;
  }
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    std::cout << "Year " << year << " is a leap year." << std::endl;
  } 
  else {
    std::cout << "Year " << year << " is a common year." << std::endl;
  }
  return 0;
}