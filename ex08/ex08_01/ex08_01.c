#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char matrix[][12] = {
  "chinese12345",
  "english12345",
  "mathematics1",
  "history12345",
  "physics12345"
};

int main() {
  char password[20];
  srand(time(NULL));
  password[0] = matrix[0][rand()%12]; 
  password[1] = matrix[1][rand()%12]; 
  password[2] = matrix[2][rand()%12]; 
  password[3] = matrix[3][rand()%12]; 
  password[4] = matrix[4][rand()%12]; 
  password[5] = '\0';
  printf("The password: %s\n", password);
  return 0;
}