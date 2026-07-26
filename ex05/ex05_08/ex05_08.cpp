#include <iostream>
#include <ctime>

int main() {
  int data_size = 0;
  int *data = NULL;

  srand(time(NULL));
  std::cout << "Enter data size: ";
  std::cin >> data_size;
  data = new int[data_size]; 

  if (data == NULL) {
    std::cout << "Memory allocation failed\n";
    return 1;
  }
  for (int i = 0; i < data_size; i++) {
    data[i] = rand() % 101;
  }
  for (int i = 0; i < data_size; i++) {
    std::cout << i+1 << ": " << data[i] << std::endl;
  }
  delete[] data;
  data = nullptr; 
  return 0;
}