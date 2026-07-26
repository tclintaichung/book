#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {
  int *data;
  std::string file_name = "../data/ex07_03.txt";
  int data_size = 0;
  int i = 0;
  int sum = 0;
  double average = 0.0;

  std::fstream myfile(file_name, std::ios::in);
  if (myfile.is_open()) {
    while (!myfile.eof()) {
      if (i == 0) {
        myfile >> data_size; 
        data = new int[data_size]; 
      }
      myfile >> data[i];
      if ( data[i] == '\n' || data[i] == '\0' ) break;
      else sum += data[i++];
    }
    average = (double) sum / data_size;
  }
  else {
    std::cout << "Can not open file" << file_name << std::endl;
    return 1;
  }
  std::cout << "Average: " << std::fixed << std::setprecision(2) << average << std::endl;
  myfile.close();
  delete[] data; 
  data = nullptr; 
  return 0;
}