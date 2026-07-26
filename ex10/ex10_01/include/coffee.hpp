#ifndef COFFEE_HPP
#define COFFEE_HPP
#include <string>
using namespace std;

class Coffee {
public:
    Coffee(const string& name, const string& roast, float price);
    ~Coffee() = default;
    string get_name() const;
    void set_name(string);
    string get_roast() const;
    void set_roast(string);
    float get_price() const;
    void set_price(float);

private:
    string name;
    string roast;
    float price;
};
#endif // COFFEE_HPP