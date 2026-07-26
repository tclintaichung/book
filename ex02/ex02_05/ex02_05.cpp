#include <iostream>
#include <cctype>

int main() {
  	char cmd[20];
  	std::cout << "Enter string: ";
  	std::cin >> cmd;
  	std::cout << "First character is alphabetic: " << isalpha(cmd[0]) << std::endl;
  	cmd[0] = toupper(cmd[0]);
  	std::cout << cmd << std::endl;
  	return 0;
}