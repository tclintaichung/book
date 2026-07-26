#include <stdio.h>
#include <math.h>

int main() {
  double temp[] = {26.5, 27.1, 21.0, 29.4, 25.5, 28.8};
  double average = 0.0;
  double sum = 0.0;
  double sigma = 0.0;
  int size = sizeof(temp) / sizeof(temp[0]);
  for (int i = 0; i < size; i++) {
    sum += temp[i];
  }
  average = sum / size;
  for (int i = 0; i < size; i++) {
    sigma += pow(temp[i] -average, 2);
  }
  sigma = sigma / (size - 1);
  sigma = sqrt(sigma);
  printf("The average of temperatures: %.2f\n", average);
  printf("The standard deviation: %.2f\n", sigma);
  return 0;
}