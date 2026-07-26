#include <stdio.h>

int main() {
    int number = 0;
    printf("Enter a number to compute its factorial: ");
    scanf("%d", &number);

    long factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is %ld.\n", number, factorial);
    return 0;
}