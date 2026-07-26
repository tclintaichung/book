#include <iostream>
#include <cmath>
#include  <array>

const float GAUGE_RATE = 35.7;
const std::array<float, 4> WATER_UNIT = {7.35, 9.45, 11.55, 12.0750};
const std::array<float, 4> DEDUCT_RATE = {0., 21.0, 84.0, 110.25};

float water_rate(int consumption);

int main() {
  float water_fee;
  int consumption;
  do {
    std::cout << "Enter water consumption: ";
    std::cin >>  consumption; 
    if (consumption < 0) {
      std::cout << "Invalid consumption. Exiting." << std::endl;
      break;
    }
    water_fee = water_rate(consumption);
    std::cout << "Your water fee is: NT$" << water_fee << std::endl;
  } while (true);
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