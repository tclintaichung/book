#include <iostream>
#include "include/mytime.h"
using namespace std;
  
int main() {
  char schedule_date_str[50];
  struct tm tm_plan = {};
  struct tm tm_left = {};
  cout << "Enter a schedule date in the format YYYY-MM-DD HH:MM" << endl;
  cout << "Date: ";
  fgets(schedule_date_str, sizeof(schedule_date_str), stdin);
  schedule_date_str[strlen(schedule_date_str)-1] = '\0';
  if (strlen(schedule_date_str) == 10 ) {
    strcat(schedule_date_str, " 00:00:00");
  }
  else if (strlen(schedule_date_str) == 13) {
    strcat(schedule_date_str, ":00:00");  
  }
  else if (strlen(schedule_date_str) == 16) {  
    strcat(schedule_date_str, ":00");
  }
  strptime(schedule_date_str, "%Y-%m-%d %H:%M:%S", &tm_plan);
  tm_plan.tm_isdst = -1;
  time_t schedule_date = mktime(&tm_plan);
  time_t current_date = time(nullptr);
  double time_left = difftime(schedule_date, current_date);
  if (time_left < 0) {
    cout << "The schedule date was passed!" << endl;
    return 0;
  }
  tm_left = get_time_left(time_left);
  cout << "Time left: " 
    << tm_left.tm_mday << " days, "
    << tm_left.tm_hour << " hours, "
    << tm_left.tm_min << " minutes, "
    << tm_left.tm_sec << " seconds" << endl;
  return 0;
}