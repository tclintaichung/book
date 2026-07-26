#include <iostream>
using namespace std;
#define DISCOUNT0 (100)
#define DISCOUNT1 (300)
#define DISCOUNT2 (500)
#define DISCOUNT3 (1000)
#define DISCOUNT4 (2000)
#define MAX_PRICE (65535)
const float discount[] = {0.0f, 0.05f, 0.1f, 0.15f, 0.2f, 0.25f};

int main() {
    int price = 0;
    cout << "Enter the price of the item: ";
    cin >> price;
    if (price < 0) {
        cout << "Invalid price. Exiting.\n";
        return 1;
    } 
   
    switch(price) {
        case 0 ... (DISCOUNT0 - 1):
            cout << "Final price: NT$" << (1.0 - discount[0])*price;
            break;
        case DISCOUNT0 ... (DISCOUNT1 - 1):
            cout << "Final price: NT$" << (1.0 - discount[1])*price;
            break;
        case DISCOUNT1 ... (DISCOUNT2 - 1):
            cout << "Final price: NT$" << (1.0 - discount[2])*price;
            break;
        case DISCOUNT2 ... (DISCOUNT3 - 1):
            cout << "Final price: NT$" << (1.0 - discount[3])*price;
            break;
        case DISCOUNT3 ... (DISCOUNT4 - 1):
            cout << "Final price: NT$" << (1.0 - discount[4])*price;
            break;
        case DISCOUNT4 ... MAX_PRICE:
            cout << "Final price: NT$" << (1.0 - discount[5])*price;
            break;
        default:
            cout << "Final price: NT$" << (1.0 - discount[5])*price;
    } 
    cout << endl;
    return 0;
}