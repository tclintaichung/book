#include "coffee.hpp"
#include <iostream>
const string roast[] = {"light", "medium", "high", "French"}; 

class Latte : public Coffee {
public:
    Latte(const string& name, const string& roast, float price, float foam)
        : Coffee(name, roast, price), foam(foam) {}
    float get_foam() const {
        return foam;
    }
    void set_foam(float new_foam) {
        foam = new_foam;
    }
private:
    float foam;
};  

int main() {
  Coffee coffee("Organic Ethiopia", roast[0], 50);
  Latte latte("Vanilla Latte", roast[1], 65, 2);
  cout << "--Coffee list--" << endl;
  cout << "Coffee Name: " << coffee.get_name() << endl;
  cout << "Coffee Roast: " << coffee.get_roast() << endl;
  cout << "Coffee Price per cup: $NT" << coffee.get_price() << endl;
  cout << "Latte Name: " << latte.get_name() << endl;
  cout << "Latte Roast: " << latte.get_roast() << endl;
  cout << "Latte Price per cup: $NT" << latte.get_price() << endl;
  cout << "Latte Milk Foam: " << latte.get_foam() << " cm" << endl;
  return 0;
}