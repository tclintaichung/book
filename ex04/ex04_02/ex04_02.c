#include <stdio.h>

int main() {
  int year = 0;
  
  printf("Enter year: ");
  scanf("%d", &year);
  if (year < 0) {
    printf("Invalid year. Exiting.\n");
    return 1;
  }
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    printf("Year %d is a leap year.\n", year);
  } 
  else {
    printf("Year %d is a common year.\n", year);
  }
  return 0;
}