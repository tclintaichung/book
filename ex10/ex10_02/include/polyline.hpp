#ifndef POLYLINE_HPP
#define POLYLINE_HPP

#include <iostream>
#include <cmath>
#include <vector>

struct Point {
    double x, y;
    Point(double px = 0, double py = 0) : x(px), y(py) {}
};

class Polyline {
private:
  std::vector<Point> points;
public:
  Polyline(){}
  Polyline(const std::vector<Point>& pts) : points(pts) {}
  void add_point(double x, double y);
  double get_x(size_t index);
  double get_y(size_t index);
  double get_distance(size_t i, size_t j);
  double get_length(); 
  size_t get_size() const;
};
#endif