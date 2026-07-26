#include <iostream>
// #include <string>

int main() {
  	std::string address = "1, Main Str., ";
  	std::string region = "West District, ";
  	std::string city = "Taichung";

  	address = address + region;
  	address = address + city;
  	std::cout << address << std::endl;
  	std::cout << "Length of address string: " << address.length() << std::endl;
  	return 0;
}
