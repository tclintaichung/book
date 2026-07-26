#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int data_size = 0;
  const char* file_name = "../data/ex07_03.txt";
  const int upper = 100;
  const int lower = 60;
  srand(time(NULL));
  FILE* pf;
  pf = fopen(file_name, "w");
  if (pf == NULL) {
    printf("Cannot open file %s\n", file_name);
    return 1;
  }
  printf("Enter data size: ");
  scanf("%d", &data_size);
  fprintf(pf, "%d\n", data_size);
  for (int i = 0; i < data_size; i++) {
    fprintf(pf, "%d\n", rand() % (upper - lower + 1) + lower);
  }
  fclose(pf);
  return 0;
}