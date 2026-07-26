#include <stdio.h>

int main() {
  int x = 0;
  int y = 0;

  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter y: ");
  scanf("%d", &y);

  printf("%d is greater than %d is %d\n", x, y, x > y);
  printf("%d is less than %d is %d\n", x, y, x < y);
  printf("%d is equal to %d is %d\n", x, y, x == y);

  return 0;
}