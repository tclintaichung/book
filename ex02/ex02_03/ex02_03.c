#include <stdio.h>

int global_num = 100;

void print_nums() {
  int function_num = 200;
  printf("Integer in global: %d\n",  global_num);
  printf("Integer in function: %d\n", function_num);
}

int main() {
  printf("Initial Integer in global: %d\n", global_num);
  global_num = 101; 
  print_nums();
  {
    int block_num = 300;
    printf("Integer in block: %d\n", block_num);
  }
  block_num = 301;
  // function_num = 102;
  return 0;
}