#include <iostream>
#include <array>
using namespace std;

array<float, 6> discount = {0.0f, 0.05f, 0.1f, 0.15f, 0.2f, 0.25f};
array<float, 5> discount_price = {99.0f, 299.0f, 499.0f, 999.0f, 1999.0f};
int main() {
    float price = 0.0f;
    cout << "Enter the price of the item: ";
    cin >> price;
    if (price < 0) {
        cout << "Invalid price. Exiting.\n";
        return 1;
    } 
    
    if (price <= discount_price[0]) {
      cout << "Final Price: NT$" << (1.0 - discount[0])*price;
    }
    else if (price <= discount_price[1]) {
      cout << "Final Price: NT$" << (1.0 - discount[1])*price;
    }
    else if (price <= discount_price[2]) {
      cout << "Final Price: NT$" << (1.0 - discount[2])*price;  
    }
    else if (price <= discount_price[3]) {
      cout << "Final Price: NT$" << (1.0 - discount[3])*price;    
    }
    else if (price <= discount_price[4]) {
      cout << "Final Price: NT$" << (1.0 - discount[4])*price;      
    }
    else {
      cout << "Final Price: NT$" << (1.0 - discount[5])*price;     
    } 
    cout << endl;
    return 0;
}