#include <stdio.h>

typedef struct {
  float x;
  float y;
} Point;

void line_eq(Point p1, Point p2) {
  float m = 0.0;
  if (p2.x - p1.x != 0) {
    m = (p2.y - p1.y) / (p2.x - p1.x);
  } else {
    printf("Line equation: x = %.3f\n", p1.x) ;
    return;
  }
  float b = p1.y - m * p1.x;

  if (b < 0) {
    printf("Line equation: y = %.3fx - %.3f\n", m, -b);
  }
  else if (b == 0) {
    printf("Line equation: y = %.3fx\n", m);
  } 
  else if (m == 0) {
    printf("Line equation: y = %.3f\n", b);
  } 
  else {
    printf("Line equation: y = %.3fx + %.3f\n", m, b);
  }
} 

int main() {
  Point p1, p2;
  char ch;
  do {
      printf("Enter point 1 x: ");
      scanf("%f", &p1.x);
      printf("Enter point 1 y: ");
      scanf("%f", &p1.y);
      printf("Enter point 2 x: ");
      scanf("%f", &p2.x);
      printf("Enter point 2 y: ");
      scanf("%f", &p2.y);
      line_eq(p1, p2);
      printf("Continue?y/n: ");
      getchar();
      scanf("%c", &ch);
      if (ch == 'n') break;
  } while (1);
  return 0;
}