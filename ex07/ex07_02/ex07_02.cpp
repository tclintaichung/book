#include <iostream>
#include <string>
#include <fstream>

int main() {
  std::string filename = "../data/ex07_01.txt";
  std::string line;
  if (filename.empty()) {
    std::cout << "Filename cannot be empty." << std::endl;
    return 1;
  }

  std::ifstream pf(filename);
  if (!pf.is_open()) {
    std::cout << "Cannot open file " << filename << std::endl;
    return 1;
  }

  while (1) {
    pf >> line;
    if (pf.eof()) {
      std::cout << line << " " << std::endl;
      break;
    }
    std::cout << line << " ";
    line.clear(); 
  }

  pf.close();
  return 0;
}