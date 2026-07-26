#include <iostream> 
void add(float &x, float y);
void multiply(float &x, float y); 

int main() {
  float a, b, c;
  std::cout << " a = ";
	std::cin >> a;
	std::cout << " b = ";
	std::cin >> b;
  c = a;
  std::cout << a << " + " << b << " = ";
  add(a, b);
  std::cout << a << std::endl;
  std::cout << c << " * " << b << " = ";
  multiply(c, b);
  std::cout << c << std::endl;
  return 0;
}
void add(float& x, float y) {
  x += y;
}
void multiply(float& x, float y) {
  x *= y;
}