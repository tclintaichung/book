#include <stdio.h>

const char *WEEKDAY[] = {
    " Sun ", " Mon", " Tue", " Wed", " Thu", " Fri", " Sat"
};  
const char *COURSE_NAME[] = {
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
  int course[7][5] = {
    {0, 1, 2, 0, 0},
    {0, 1, 2, 0, 0},
    {1, 0, 0, 4, 3},
    {1, 0, 0, 4, 3},
    {7, 8, 5, 6, 9},
    {7, 8, 5, 6, 9},
    {0, 0, 5, 6, 0}
  };  
  printf("-------------------------------------\n");
  for (int i = 1; i < 6; i++) {
    printf("%s", WEEKDAY[i]);
    printf("\t");
  }
  printf("\n");
  printf("-------------------------------------\n");
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 5; j++) {
      if (course[i][j] == 0) {
        printf("%s", COURSE_NAME[0]);
      } else {
        printf("%s", COURSE_NAME[course[i][j]]);
      }
      printf("\t");
    }
    printf("\n");
  }
  printf("-------------------------------------\n");
  return 0;
}