#include "polygon.hpp"

int main() {
  Polygon polygon;
  int n;
  double x, y;
  std::cout << "Enter the number of points: ";
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cout << "Enter point " << i + 1 << " (x y): ";
    std::cin >> x >> y;
    polygon.add_point(x, y);
  }

  std::cout << "The points are:\n";
  for (int i = 0; i < n; ++i) {
    std::cout << "(" << polygon.get_x(i) << ", " << polygon.get_y(i) << ")\n";
  }
  std::cout << "Length of the polygon: " << polygon.get_length() << "\n";
  std::cout << "Area of the polygon: " << polygon.get_area() << "\n";
  return 0;
}