#include <stdio.h>

void add(float * x, float y);
void multiply(float * x, float y); 

int main() {
  float a, b;
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
  float c = a;
  printf("%.2f + %.2f = ", a, b);
  add(&a, b);
  printf("%.2f\n", a);
  printf("%.2f * %.2f = ", c, b);
  multiply(&c, b);
  printf("%.2f\n", c);
  return 0;
}
void add(float * x, float y) {
  *x += y;
}
void multiply(float * x, float y) {
  *x *= y;
}