#include <stdio.h>
#include <stdbool.h>

int main() {
  int x = 0;
  int low = 11;
  int up = 20;
  bool condition1 = false;
  bool condition2 = false;
  bool condition3 = false;

  printf("Enter x: ");
  scanf("%d", &x);

  condition1 = (x >= low) && (x <= up);
  condition2 = (x < low) || (x > up);
  condition3 = !(x >= up);

  printf("%d is within [%d, %d]: %d\n", x, low, up, condition1);
  printf("%d is outside [%d, %d]: %d\n", x, low, up, condition2);
  printf("%d is less than %d: %d\n", x, up, condition3);

  return 0;
}