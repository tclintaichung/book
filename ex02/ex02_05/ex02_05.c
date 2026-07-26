#include <stdio.h>
#include <ctype.h>

int main() {
  	char cmd[20];

  	printf("Enter string: ");
  	scanf("%s", cmd);
  	printf("First character is alphabetic: %d\n", isalpha(cmd[0]));
  	cmd[0] = toupper(cmd[0]);
  	printf("%s\n",cmd);
  	return 0;
}