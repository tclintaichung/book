#include <stdio.h>

float discount[] = {0.0f, 0.05f, 0.1f, 0.15f, 0.2f, 0.25f};
float discount_price[] = {99.0f, 299.0f, 499.0f, 999.0f, 1999.0f};

int main() {
    float price = 0.0f;
    printf("Enter the price of the item: ");
    scanf("%f", &price);
    if (price < 0) {
        printf("Invalid price. Exiting.\n");
        return 1;
    } 
    
    if (price <= discount_price[0]) {
      printf("Final Price: %.2f\n", (1.0 - discount[0])*price);
    }
    else if (price <= discount_price[1]) {
      printf("Final Price: %.2f\n", (1.0 - discount[1])* price);
    }
    else if (price <= discount_price[2]) {
      printf("Final Price: NT$%.2f\n", (1.0 - discount[2])* price);  
    }
    else if (price <= discount_price[3]) {
      printf("Final Price: NT$%.2f\n", (1.0 - discount[3])* price);    
    }
    else if (price <= discount_price[4]) {
      printf("Final Price: NT$%.2f\n", (1.0 - discount[4])* price);      
    }
    else {
      printf("Final Price: NT$%.2f\n", (1.0 - discount[5])* price);     
    } 
    return 0;
}