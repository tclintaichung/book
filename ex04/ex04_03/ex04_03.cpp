#include <iostream>
using namespace std;

int main() {
  char oper;
  float number1, number2;
  cout << "Enter +, -, *, /, %: ";
  cin >> oper;
  cout << "Enter number 1: ";
  cin >> number1;
  cout << "Enter number 2: ";
  cin >> number2;

  switch (oper) {
    case '+':
      cout << number1 << " + " << number2 << " = " << number1 + number2;
      break;
    case '-':
      cout << number1 << " - " << number2 << " = " << number1 - number2;
      break;
    case '*':
      cout << number1 << " * " << number2 << " = " << number1 * number2;
      break;
    case '/':
      cout << number1 << " / " << number2 << " = " << number1 / number2;
      break;
    case '%':
      cout << number1 << " % " << number2 << " = " << (int) number1 % (int) number2;
      break;
    default:
      cout << "No operation is performed";
  }
  cout << endl;
  return 0;
}