#include <stdio.h>

int main() {
  char address[50] = "1, Main Str., ";
  char region[20] = "West District, ";
  char city[10] = "Taichung";
  int index1 = 3, index2 = 5, index3 = 7;
  printf("The (%d)-th character of \"%s\": %c\n", 
    index1+1, address, address[index1]);
  printf("The (%d)-th character of \"%s\": %c\n", 
    index2+1, region, region[index2]);
  printf("The (%d)-th character of \"%s\": %c\n", 
    index3+1, city, city[index3]);
  return 0;
}