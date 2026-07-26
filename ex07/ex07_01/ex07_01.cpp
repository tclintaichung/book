#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::string file_name = "../data/ex07_01.txt";
  std::string text;
  std::ofstream pf(file_name);

  if (!pf) {
    std::cerr << "Error open file";
    return 1;
  }
  std::cout << "Enter information: \n";
  while(1) {
    std::getline(std::cin, text);
    if (text.empty()) {
      std::cout << "Data saved to " << file_name << std::endl;
      break;
    }
    pf << text << std::endl;
  }
  pf.close();
  return 0;
}