#include <stdio.h>

int main() {
  int x = 0;
  int y = 0;
  int new_xy = 0;

  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter y: ");
  scanf("%d", &y);
  new_xy = x & y;
  printf("%d & %d = %d\n", x, y, new_xy);

  new_xy = x | y;
  printf("%d | %d = %d\n", x, y, new_xy);

  new_xy = x ^ y;
  printf("%d ^ %d = %d\n", x, y, new_xy);

  return 0;
}