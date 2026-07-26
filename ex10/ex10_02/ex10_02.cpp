#include "polyline.hpp"

int main() {
  Polyline polyline;
  int n;
  double x, y;
  std::cout << "Enter the number of points: ";
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cout << "Enter point " << i + 1 << " (x y): ";
    std::cin >> x >> y;
    polyline.add_point(x, y);
  }

  std::cout << "The points are:\n";
  for (int i = 0; i < n; ++i) {
    std::cout << "(" << polyline.get_x(i) << ", " << polyline.get_y(i) << ")\n";
  }
  std::cout << "Length of the polyline: " << polyline.get_length() << "\n";
  return 0;
}