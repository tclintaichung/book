#include <iostream>

auto global_num = 100;

auto print_nums() {
  auto function_num = 200;
  std::cout << "Integer in global: " << global_num << std::endl;
  std::cout << "Integer in function: " << function_num << std::endl;
}

int main() {
  std::cout << "Initial Integer in global: " << global_num << std::endl;
  global_num = 101; 
  print_nums();
  while (1) {
    int block_num = 300;
    std::cout << "Integer in block: " << block_num << std::endl;
    break;
  }
  // block_num = 301;
  // function_num = 102;
  return 0;
}