#include <stdio.h>
#include <string.h>

int main() {
  	char address[50] = "1, Main Str., ";
  	char region[20] = "West District, ";
  	char city[10] = "Taichung";

  	strcat(address, region);
  	strcat(address, city);
  	printf("%s\n", address);
  	printf("Length of address string: %lu\n", strlen(address));
  	return 0;
}