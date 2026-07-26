#include <iomanip>
#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main() {
  array<double, 6> temp = {26.5, 27.1, 21.0, 29.4, 25.5, 28.8};
  double average = 0.0;
  double sum = 0.0;
  double sigma = 0.0;
  int size = temp.size();
  for (int i = 0; i < size; i++) {
    sum += temp[i];
  }
  average = sum / size;
  for (int i = 0; i < size; i++) {
    sigma += pow(temp[i] - average, 2);
  }
  sigma = sigma / (size - 1);
  sigma = sqrt(sigma);
  cout << "The average of temperatures: " << setprecision(2) << fixed << average << endl;
  cout << "The standard deviation: " << sigma << endl;
  return 0;
}