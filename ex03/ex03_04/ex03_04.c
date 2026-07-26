#include <stdio.h>

int main() {
  int x = 0;
  int new_x = 0;
  int shift = 0;

  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter number of digit to shift: ");
  scanf("%d", &shift);

  new_x = x >> shift;
  printf("%d is right shift %d digits of %d\n", new_x, shift, x);

  new_x = x << shift;
  printf("%d is left shift %d digits of %d\n", new_x, shift, x);

  return 0;
}