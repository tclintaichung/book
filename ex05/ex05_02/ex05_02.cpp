#include <iostream>

int main() {
    int number = 0;
    std::cout << "Enter a number to compute its factorial: ";
    std::cin >> number;

    long factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    std::cout << "The factorial of " << number << " is " << factorial << "." << std::endl;
    return 0;
}