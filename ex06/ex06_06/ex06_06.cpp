#include <iostream>
#include <vector>
#include <numeric>

bool odd(int x) {
  return x % 2 != 0;
}

int main() {
  std::vector<int> x(20);
  int index = 0;
 
  for (int i = 0; i < 39; i++) {
    if (odd(i+1)) x[index++] = i + 1;
  }
  int sum_series = std::accumulate(x.begin(), x.end(), 0);
  std::cout << sum_series << std::endl;
}
