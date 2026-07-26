#include <emscripten/bind.h>
#include "polyline.hpp"
using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_polyline_bindings) {
    class_<Polyline>("Polyline")
        .constructor<>()
        .function("getPointx", &Polyline::get_x)
        .function("getPointy", &Polyline::get_y)
        .function("getLength", &Polyline::get_length)
        .function("addPoint", &Polyline::add_point)
        .function("getDistance", &Polyline::get_distance)
        .function("getSize", &Polyline::get_size);
}