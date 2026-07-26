#include <iostream>
#include "./include/leap.hpp"

int main() {
  int year = 0;

  do {
    std::cout << "Enter year: ";
    std::cin >> year;
    if (year < 0) {
      std::cout << "Invalid year. Exiting.\n";
      break;
    }
    if (is_leap_year(year)) {
      std::cout << "Year " << year << " is a leap year.\n";
    } else {
      std::cout << "Year " << year << " is a common year.\n";
    }
  } while (1);
  return 0;
}