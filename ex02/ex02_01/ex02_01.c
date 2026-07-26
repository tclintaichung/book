#include <stdio.h>

int main() {
  char name[20];  
  int lucky_number;

  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your lucky number: ");
  scanf("%d", &lucky_number);
  printf("%s: Your lucky number is %d\n", name, lucky_number);
  return 0;
}