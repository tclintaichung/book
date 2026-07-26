#include <stdio.h>

int main() {
  FILE *pf;
  char file_name[256] = "../data/ex07_01.txt";
  char line[256];

  pf = fopen(file_name, "r");
  if (pf == NULL) {
    printf("Cannot open file %s\n", file_name);
    return 1;
  }

  while (1) {
    fscanf(pf, "%s", line);
    if (feof(pf)) break;
    printf("%s\n", line);
  }

  fclose(pf);
  return 0;
}