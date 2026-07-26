#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int data_size = 0;
  int *data = NULL;

  srand(time(NULL));
  printf("Enter data size: ");
  scanf("%d", &data_size);

  data = (int*) malloc(data_size * sizeof(int));
  if (data == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }
  for (int i = 0; i < data_size; i++) {
    data[i] = rand() % 101;
  }
  for (int i = 0; i < data_size; i++) {
    printf("%d: %d\n", i+1, data[i]);
  }
  free(data);
  data = NULL; 
  return 0;
}