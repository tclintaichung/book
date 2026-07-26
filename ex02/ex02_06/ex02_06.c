#include <stdio.h>
#include <ctype.h>

typedef struct {
  char name[40];
  int age;
  char id[10];
} Citizen;

int main() {
  Citizen citizen1;

  printf("Enter name: ");
  scanf("%s", citizen1.name);
  printf("Enter age: ");
  scanf("%d", &citizen1.age);
  printf("Enter ID: ");
  scanf("%s", citizen1.id);
  printf("**********************\n");
  printf("Name: %s\n", citizen1.name);
  printf("Age: %d\n", citizen1.age);
  printf("ID: %s\n", citizen1.id);
  return 0;
}