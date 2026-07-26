#include <emscripten/bind.h>
#include "polygon.hpp"
using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_polygon_bindings) {
    class_<Polyline>("Polyline")
        .constructor<>()
        .function("getPointx", &Polyline::get_x)
        .function("getPointy", &Polyline::get_y)
        .function("addPoint", &Polyline::add_point)
        .function("getDistance", &Polyline::get_distance)
        .function("getSize", &Polyline::get_size)
        .function("getLength", &Polyline::get_length);

    class_<Polygon, base<Polyline>>("Polygon")
        .constructor<>()
        .function("getLength", &Polygon::get_length)
        .function("getArea", &Polygon::get_area);
}