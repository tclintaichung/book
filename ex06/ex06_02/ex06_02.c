#include <stdio.h>
#include <math.h>

const float GAUGE_RATE = 35.7;
const float WATER_UNIT[] = {7.35, 9.45, 11.55, 12.0750};
const float DEDUCT_RATE[] = {0., 21.0, 84.0, 110.25};

float water_rate(int consumption);

int main() {
  float water_fee;
  int consumption;
  do {
    printf("Enter water consumption: ");
    scanf("%d", &consumption);
    if (consumption < 0) {
      printf("Invalid consumption. Exiting.\n");
      break;
    }
    water_fee = water_rate(consumption);
    printf("Your water fee is: NT$%.2f\n", water_fee);
  } while (1);
  return 0;
}

float water_rate(int consumption) {
  float rate = 0.0;

  if (consumption <= 0) {
    rate = 0.0;
  } else if (consumption <= 10) {
    rate = consumption * WATER_UNIT[0] - DEDUCT_RATE[0];
  } else if (consumption <= 30) {
    rate = consumption * WATER_UNIT[1] - DEDUCT_RATE[1];
  } else if (consumption <= 50) {
    rate = consumption * WATER_UNIT[2] - DEDUCT_RATE[2];
  } else {
    rate = consumption * WATER_UNIT[3] - DEDUCT_RATE[3];
  }
  return round(rate + GAUGE_RATE);
}