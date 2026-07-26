#include <iostream>
#include <string>
#include <array>

std::array<int, 12> days_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const std::array<std::string, 12> MONTH_NAMES = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
  int month = 0;
  int day_week = 0;  
  int day = 1;
  int year = 0;
  std::cout << "Enter year: ";
  std::cin >> year;
  if (year < 0) {
    std::cout << "Invalid year. Exiting.\n";
    return 1;
  }
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    days_month[1] = 29;
  }
  std::cout << "Enter month (1-12): ";
  std::cin >> month;
  std::cout << "What day is the first day of the month (Sunday-0, Saturday-6): ";
  std::cin >> day_week;
  if (month < 1 || month > 12) {
    std::cout << "Invalid month. Exiting.\n";
    return 1;
  }
  if (day_week < 0 || day_week > 6) {
    std::cout << "Invalid day. Exiting.\n";
    return 1;
  }
  std::cout << "Calendar for " << MONTH_NAMES[month - 1] << ":\n";
  std::cout << "*****************************************************\n";
  std::cout << " Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat\n";
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 7; j++) {
        if (j < day_week) {
          std::cout << "\t";
        } 
        else {
          day_week = 0;
          if (day < 10) {
            std::cout << "   " << day << "\t";
          } else {
            std::cout << "  " << day << "\t";
          }
          day++;
          if (day > days_month[month-1]) {
            std::cout << "\n" << "*****************************************************\n";
            return 0;
          }
        }
      }
      std::cout << "\n";
  }
}