#include <iostream>
#include <array>
#include <numeric>
#include "series.hpp"

int main(int argc, char* argv[]) {
  std::array<double, 10> x;
  int n = 5;
  if (argc > 1) {
    n = std::atoi(argv[1]);
    if (n < 2) n = 2;
  }
  for (int i = 0; i < n; ++i) {
    x[i] = nine_tenth(i);
  }
  double inf_series = std::accumulate(x.begin(), x.begin() + n, 0.0);
  std::cout << inf_series << std::endl;
  return 0;
}