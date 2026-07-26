#include "geometry.hpp"

void vector_diff(Point* pd, Point p2, Point p1) {
  pd->x = p2.x - p1.x;
  pd->y = p2.y - p1.y;
}

double triangle_area(Point a, Point b) {
  return 0.5 * fabs(a.x * b.y - a.y * b.x);
}
double triangle_perimeter(Point a, Point b, Point c) {
  return distance(a, b) + distance(b, c) + distance(c, a);
} 
double distance(Point p1, Point p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
