#include <stdio.h>

int main() {
  int price = 0;
  int money = 0;
  int changes = 0;
  int i = 0;
  const int change_type[] = {500, 100, 50, 10, 5, 1};
  int change_no[] = {0, 0, 0, 0, 0, 0};

  printf("Enter the money you have: ");
  scanf("%d", &money);
  printf("Enter the price of item: ");
  scanf("%d", &price);
  money = money - price;

  while (money > 0) {
    change_no[i] = money / change_type[i];
    changes += change_no[i];
    money = money % change_type[i];
    i++;
  }
  printf("Total changes: %d\n", changes);
  printf("They are: 500(%d); 100(%d); 50(%d); 10(%d); 5(%d); 1(%d)\n", change_no[0], change_no[1], change_no[2], change_no[3], change_no[4], change_no[5]);
  return 0;
}