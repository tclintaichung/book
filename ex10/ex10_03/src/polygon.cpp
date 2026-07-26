#include "polygon.hpp"

double Polygon::get_length() {
  double total_length = 0.0;
  total_length = Polyline::get_length();
  return total_length + this->get_distance(this->get_size() - 1, 0);
}
double Polygon::get_area() {
  double area = 0.0;
  size_t n = this->get_size();
  if (n < 3) return 0.0; 
  for (size_t i = 0; i < n; ++i) {
    if (i+1 == n) {
      area += this->get_x(i) * this->get_y(0) - this->get_x(0) * this->get_y(i);
    } else {
      area += this->get_x(i) * this->get_y(i+1) - this->get_x(i+1) * this->get_y(i);
    }
  }
  return fabs(area) / 2.0;
}