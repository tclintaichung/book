#include <stdio.h>

int main() {
  char file_name[] = "../data/ex07_01.txt";
  char text[1024];
  FILE* pf;
  pf = fopen(file_name, "w");

  if (pf == NULL) {
    printf("Error open file");
    return 1;
  }
  printf("Enter information: \n");
  while(1) {
    fgets(text, sizeof(text), stdin);
    if (text[0] == '\n') {
      printf("Data saved to %s\n", file_name);
      break;
    }
    fprintf(pf, "%s", text);
  }
  fclose(pf);
  return 0;
}