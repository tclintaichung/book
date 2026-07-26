#include "coffee.hpp"

Coffee::Coffee(const string& name, const string& roast, float price)
    : name(name), roast(roast), price(price) {}

string Coffee::get_name() const {
    return name;
}

void Coffee::set_name(string new_name) {
    name = new_name;
}

string Coffee::get_roast() const {
    return roast;
}

void Coffee::set_roast(string new_roast) {
    roast = new_roast;
}

float Coffee::get_price() const {
    return price;
}
void Coffee::set_price(float new_price) {
    price = new_price;
}