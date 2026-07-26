#include <stdio.h>

int main() {
  char oper;
  float num1, num2;
  printf("Enter +, -, *, /, %%: ");
  scanf("%c", &oper);
  printf("Enter number 1: ");
  scanf("%f", &num1);
  printf("Enter number 2: ");
  scanf("%f", &num2);

  switch (oper) {
    case '+':
      printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
      break;
    case '%':
      printf("%d %% %d = %d\n", (int) num1, (int) num2, (int) num1 % (int) num2);
      break;
    default:
      printf("No operation is performed");
  }
  return 0;
}