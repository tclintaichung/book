#include <iostream>
#include <iomanip>
#include <cmath>

typedef struct {
  float x;
  float y;
} Point;

void line_eq(Point p1, Point p2);  

int main() {
  Point p1, p2;
  do {
    std::cout << "Enter point 1 x: ";
    std::cin >> p1.x;
    std::cout << "Enter point 1 y: ";
    std::cin >> p1.y;
    std::cout << "Enter point 2 x: ";
    std::cin >> p2.x;
    std::cout << "Enter point 2 y: ";
    std::cin >> p2.y;
    line_eq(p1, p2);
    std::cout << "Continue?y/n: ";
    char ch;
    std::cin >> ch;
    if (ch == 'n') break; 
  } while (true);
  return 0;
}

void line_eq(Point p1, Point p2) {
  float m = 0.0;
  if (p2.x - p1.x != 0) {
    m = (p2.y - p1.y) / (p2.x - p1.x);
  } else {
    std::cout << "Line equation: x = " << std::setprecision(3) << p1.x << std::endl;
    return;
  }
  float b = p1.y - m * p1.x;

  if (b < 0) {
    std::cout << "Line equation: y = " << std::setprecision(3) << m << "x - " << -b << std::endl;
  }
  else if (b == 0) {
    std::cout << "Line equation: y = " << std::setprecision(3) << m << "x" << std::endl;
  } 
  else if (m == 0) {
    std::cout << "Line equation: y = " << std::setprecision(3) << b << std::endl;
  } 
  else {
    std::cout << "Line equation: y = " << std::setprecision(3) << m << "x + " << b << std::endl;
  }
} 
