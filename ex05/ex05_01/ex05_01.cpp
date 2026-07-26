#include <iostream>
using namespace std;

int main() {
  int price = 0;
  int money = 0;
  int changes = 0;
  int i = 0;
  const int change_type[] = {500, 100,50, 10, 5, 1};
  int change_no[] = {0, 0, 0, 0, 0, 0};

  cout << "Enter the money you have: ";
  cin >> money;
  cout << "Enter the price of item: ";
  cin >> price;
  money = money - price;

  while (money > 0) {
    change_no[i] = money / change_type[i];
    changes += change_no[i];
    money = money % change_type[i];
    i++;
  }
  cout << "Total changes: " << changes << endl;
  cout << "They are: 500(" << change_no[0] << ");" << "100(" << change_no[1] << ");" 
       << "50(" << change_no[2] << ");" << "10(" << change_no[3] << ");" 
       << "5(" << change_no[4] << ");" << "1(" << change_no[5] << ")" << endl;
  return 0;
}