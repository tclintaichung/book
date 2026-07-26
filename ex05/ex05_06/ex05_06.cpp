#include <iostream>
#include <string>
#include <sstream>
#include <array>

const std::array<std::string, 10> TASK_LIST = {
    "wash clothes",
    "wash dishes",
    "clean house",
    "fix toilet",
    "cook dinner",
    "make coffee",
    "change bulb",
    "water plants",
    "feed dog",
    "take out trash",
};

int tasks[7][3];

int main() {
  int index = 0;
  char ch;
  int task_option = -1;
  for (int i = 0; i < 10; i++) {
    std::cout << i << " - " << TASK_LIST[i] << "\n";
  }
  for (int i = 0; i < 7; i++) {
    index = 0;
    do{
      std::cout << "Enter the task for day " << i+1 << " (0-9): ";
      ch = getchar();
      std::cout << "You entered: " << ch << "\n";
      while (getchar() != '\n'); 
      task_option = ch - '0';
      if (task_option < 0 || task_option > 9) {
        std::cout << "Invalid task.\n";
        tasks[i][index++] = -1;
        break;
      }
      tasks[i][index++] = task_option;
      if (index > 2) {
        std::cout << "Next day tasks." << "\n";
        break;
      }
    } while (true);
  }
  for (int i = 0; i < 7; i++) {
    std::cout << "Day " << i + 1 << " tasks: \n";
    for (int j = 0; j < 3; j++) {
      if (tasks[i][j] == -1) {
        break;
      }
      std::cout << " " << tasks[i][j] << " - " << TASK_LIST[tasks[i][j]] << "\n";
    }
    std::cout << "\n";
  }
  return 0;
}