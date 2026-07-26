#include <stdio.h>
#include "./include/leap.h"

int main() {
  int year = 0;

  do {
    printf("Enter year: ");
    scanf("%d", &year);
    if (year < 0) {
      printf("Invalid year. Exiting.\n");
      break;
    }
    if (is_leap_year(year)) {
      printf("Year %d is a leap year.\n", year);
    } else {
      printf("Year %d is a common year.\n", year);
    }
  } while (1);
  return 0;
}