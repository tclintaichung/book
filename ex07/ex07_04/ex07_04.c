#include <stdio.h>
#include <stdlib.h>

int main() {
  int data_size = 0;
  char* file_name = "../data/ex07_03.txt";
  int *data = NULL;
  int sum = 0;
  int i = 0;
  FILE* pf;

  pf = fopen(file_name, "r");
  if (pf == NULL) {
    printf("Cannot open file %s", file_name);
    return 1;
  }

  fscanf(pf, "%d\n", &data_size);
  if (data_size <= 0) {
    printf("Invalid data size\n");
    fclose(pf);
    return 1;
  }
  data = (int*) malloc(data_size * sizeof(int));
  if (data == NULL) {
    printf("Memory allocation failed\n");
    fclose(pf);
    return 1;
  }
  while (fscanf(pf, "%d\n", &data[i]) != EOF) {
    sum += data[i++];
  }
  fclose(pf);
  printf("Average: %.2f\n", (double)sum / data_size);
  free(data);
  data = NULL; 
  return 0;
}