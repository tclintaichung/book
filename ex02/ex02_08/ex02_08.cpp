#include <iostream>
#include <vector>
using namespace std;

struct Item {
  string item;
  int quantity;
  bool purchased;
};

vector<Item> shopping_list = {
  {"shampoo", 2, false},
  {"kitchen towel", 1, false},
  {"detergent", 2, false},
  {"cheese", 3, false},
  {"apple", 6, false}
};

int main() {
  Item item = {"banana", 2, false};
  shopping_list.push_back(item);
  shopping_list.at(1).quantity = 6;
  shopping_list.at(3).purchased = true;
  cout << shopping_list.at(1).item << ": " << 
          shopping_list.at(1).quantity << "/" <<
          shopping_list.at(1).purchased << endl;
  cout << shopping_list.at(3).item << ": " << 
          shopping_list.at(3).quantity << "/" <<
          shopping_list.at(3).purchased << endl;
  return 0;
}