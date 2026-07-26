#include "../include/mytime.h"
struct tm get_time_left(double time_left) {
  struct tm tm_left;
  tm_left.tm_year = 0;
  tm_left.tm_mon = 0;
  tm_left.tm_mday = (int) time_left / (24 * 3600);
  time_left = fmod(time_left, 24 * 3600);
  tm_left.tm_hour = (int) time_left / 3600;
  time_left = fmod(time_left, 3600);
  tm_left.tm_min = (int) time_left / 60;
  tm_left.tm_sec = (int) fmod(time_left, 60);
  return tm_left;
}