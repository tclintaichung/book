#ifndef POLYGON_HPP
#define POLYGON_HPP

#include "polyline.hpp"

class Polygon : public Polyline {
public:  Polygon() : Polyline() {}
  Polygon(const std::vector<Point>& pts) : Polyline(pts) {}
  double get_area();
  double get_length() override;
};  
#endif