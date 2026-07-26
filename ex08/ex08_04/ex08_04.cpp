#include <iostream>
#include "geometry.hpp"

int main() {
  Point p1 = {0, 0};
  Point p2 = {4, 0};
  Point p3 = {4, 2};
  Point pd1;
  Point pd2;
  vector_diff(&pd1, p2, p1);
  vector_diff(&pd2, p3, p1);
  std::cout << "Area of triangle: " << triangle_area(pd1, pd2) << std::endl;
  std::cout << "Perimeter of triangle: " << triangle_perimeter(p1, p2, p3) << std::endl;
  return 0;
}