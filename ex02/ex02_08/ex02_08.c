#include <stdio.h>
#include <stdbool.h>

typedef struct {
  char item[20];
  int quantity;
  bool purchased;
} Item;

Item shopping_list[] = {
  {"shampoo", 2, false},
  {"kitchen towel", 1, false},
  {"detergent", 2, false},
  {"cheese", 3, false},
  {"apple", 6, false}
};

int main() {
  shopping_list[1].quantity = 6;
  shopping_list[3].purchased = true;
  printf("%s: %d/%d\n", shopping_list[1].item, shopping_list[1].quantity,
    shopping_list[1].purchased);
   printf("%s: %d/%d\n", shopping_list[3].item, shopping_list[3].quantity,
    shopping_list[3].purchased);
  return 0;
}