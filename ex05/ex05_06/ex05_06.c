#include <stdio.h>
const char *TASK_LIST[] = {
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

int tasks[7][3] = { {-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1},
                      {-1, -1, -1}, {-1, -1, -1}, {-1, -1, -1} };

int main() {
  char input[10];
  int index = 0;
  int task_option = -1;
  char ch;
  for (int i = 0; i < 10; i++) {
    printf("%d - %s\n", i, TASK_LIST[i]);
  }
  for (int i = 0; i < 7; i++) {
    index = 0;
    do {
      printf("Enter the task for day %d (0-9): ", i+1);
      ch = getchar();
      printf("You entered: %c\n", ch);
      while (getchar() != '\n'); // Clear the input buffer
      task_option = ch - '0';
      if (task_option < 0 || task_option > 9) {
        printf("Invalid task.\n");
        tasks[i][index++] = -1;
        break;
      }
      tasks[i][index++] = task_option;
      if (index > 2) {
        printf("Next day tasks.\n");
        break;
      }
    } while (1);
  }
  for (int i = 0; i < 7; i++) {
    printf("Day %d tasks: \n", i + 1);
    for (int j = 0; j < 3; j++) {
      if (tasks[i][j] == -1) {
        break;
      }
      printf(" %d - %s \n", tasks[i][j], TASK_LIST[tasks[i][j]]);
    }
    printf("\n");
  }
  return 0;
}