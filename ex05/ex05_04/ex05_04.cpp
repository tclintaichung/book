#include <iostream>
#include <array>
#include <string>

const std::array<std::string, 7> WEEKDAY = {
    " Sun ", " Mon", " Tue", " Wed", " Thu", " Fri", " Sat"
};  
std::array<std::string, 10> COURSE_NAME = {
    "free",
    "Chin",
    "Engl",
    "Math",
    "Phys",
    "Chem",
    "Biol",
    "Hist",
    "Geog",
    "Comp",
};

int main() {
  std::array<std::array<int, 5>, 7> course = {{
    {0, 1, 2, 0, 0}, {0, 1, 2, 0, 0},
    {1, 0, 0, 4, 3},
    {1, 0, 0, 4, 3},
    {7, 8, 5, 6, 9},
    {7, 8, 5, 6, 9},
    {0, 0, 5, 6, 0}
  }};  
  std::cout << "-------------------------------------\n";
  for (int i = 1; i < 6; i++) {
    std::cout << WEEKDAY[i] << "\t";
  }
  std::cout << "\n";
  std::cout << "-------------------------------------\n";
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 5; j++) {
      if (course[i][j] == 0) {
        std::cout << COURSE_NAME[0] << "\t";
      } else {
        std::cout << COURSE_NAME[course[i][j]] << "\t";
      }
    }
    std::cout << "\n";
  }
  std::cout << "-------------------------------------\n";
  return 0;
  }