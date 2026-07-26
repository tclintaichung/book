#include <stdio.h>

int days_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char *MONTH_NAMES[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int main() {
  int year = 0;
  int month = 0;
  int day_week = 0;  
  int day = 1;
  printf("Enter year: ");
  scanf("%d", &year);
  if (year < 0) {
    printf("Invalid year. Exiting.\n");
    return 1;
  }
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    days_month[1] = 29;
  } 
  printf("Enter month (1-12): ");
  scanf("%d", &month);
  printf("What day is the first day of the month (Sunday-0, Saturday-6): ");
  scanf("%d", &day_week);
  if (month < 1 || month > 12) {
    printf("Invalid month. Exiting.\n");
    return 1;
  }
  if (day_week < 0 || day_week > 6) {
    printf("Invalid day. Exiting.\n");
    return 1;
  }
  printf("Calendar for %s:\n", MONTH_NAMES[month - 1]);
  printf("*****************************************************\n");
  printf(" Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat\n");
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 7; j++) {
      if (j < day_week) {
        printf("\t");
      } else {
        day_week = 0;
        if (day < 10) {
          printf("   %d\t", day);
        } else {
          printf("  %d\t", day);
        } 
        day++;
        if (day > days_month[month-1]) {
          printf("\n*****************************************************\n");
          return 0;
        }
      }
      
    }
    printf("\n");
  }
}