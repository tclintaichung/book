#include <iostream>

typedef struct {
  char name[40];
  int age;
  char sex;
  char id[10];
} Citizen;

int main() {
  Citizen citizen1;

  std::cout << "Enter name: ";
  std::cin >> citizen1.name;
  std::cout << "Enter age: ";
  std::cin >> citizen1.age;
  std::cout << "Enter sex (F/M): ";
  std::cin >> citizen1.sex;
  std::cout << "Enter ID: ";
  std::cin >> citizen1.id;
  std::cout << "**********************";
  std::cout << "\nName: " << citizen1.name << std::endl;
  std::cout << "Age: " << citizen1.age << std::endl;
  char c = toupper(citizen1.sex);
  std::cout << "Sex: " << c << std::endl;
  std::cout << "ID: " << citizen1.id << std::endl;
 
  return 0;
}