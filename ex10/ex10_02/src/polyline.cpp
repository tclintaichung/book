#include "polyline.hpp"
using namespace std;

void Polyline::add_point(double x, double y) {
  points.emplace_back(x, y);
}
double Polyline::get_x(size_t index) {
  if (index < this->points.size()) {
      return this->points[index].x;
  }
  throw std::out_of_range("Index out of range");
}
double Polyline::get_y(size_t index) {
  if (index < this->points.size()) {
      return this->points[index].y;
  }
  throw std::out_of_range("Index out of range");
}
double Polyline::get_distance(size_t i, size_t j) {
  if (i < 0 || i >= Polyline::get_size() || j < 0 || j >= Polyline::get_size()) {
    throw out_of_range("Invalid index");
  }
  double dx = this->get_x(j) - this->get_x(i);
  double dy = this->get_y(j) - this->get_y(i);
  return sqrt(dx * dx + dy * dy);
}
double Polyline::get_length() {
  double total_length = 0.0;
  for (int i = 1; i < this->Polyline::get_size(); ++i) {
    total_length += this->get_distance(i - 1, i);
  }
  return total_length;
}
size_t Polyline::get_size() const {
  return this->points.size();
};