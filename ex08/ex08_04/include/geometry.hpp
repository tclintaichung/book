#include <cmath>

typedef struct {
  double x;
  double y;
} Point;

void vector_diff(Point* pd, Point p2, Point p1);
double triangle_area(Point a, Point b); 
double triangle_perimeter(Point a, Point b, Point c); 
double distance(Point p1, Point p2);