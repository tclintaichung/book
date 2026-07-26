#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
int main() {
  int data_size = 0;
  std::string file_name = "../data/ex07_03.txt";
  const int upper = 100;
  const int lower = 60;
  srand(time(NULL));
  std::fstream myfile(file_name, std::ios::out);
  std::cout << "Enter data size: ";
  std::cin >> data_size;
  if (data_size <= 0) {
    std::cout << "Invalid data size" << std::endl;
    return 1;
  }
  if (myfile.is_open()) {
    myfile << data_size << std::endl; 
    for (int i = 0; i < data_size; i++) {
      myfile << rand() % (upper - lower + 1) + lower << std::endl;
    }
  }
  else {
    std::cout << "Cannot open file " << file_name << std::endl;
    return 1;
  }
 
  myfile.close();
  return 0;
}