#include <emscripten/bind.h>
#include "coffee.hpp"
using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_coffee_bindings) {
    class_<Coffee>("Coffee")
        .constructor<std::string, std::string, float>()
        .property("name", &Coffee::get_name, &Coffee::set_name)
        .property("roast", &Coffee::get_roast, &Coffee::set_roast)
        .property("price", &Coffee::get_price, &Coffee::set_price);

    class_<Latte, base<Coffee>>("Latte")
        .constructor<std::string, std::string, float, float>()
        .property("foam", &Latte::get_foam, &Latte::set_foam);
}