#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> persons = {
    {"Chang", 45},
    {"Chen", 36},
    {"Yu", 39},
    {"Wang", 25}
  };
  map<string, int>::iterator it;
  for (it = persons.begin(); it != persons.end(); ++it) {
      cout << it->second << endl;
  }
  return 0;
}