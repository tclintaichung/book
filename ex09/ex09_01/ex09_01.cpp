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
  cout << persons["Chang"] << endl;
  cout << persons["Chen"] << endl;
  cout << persons["Yu"] << endl;
  cout << persons["Wang"] << endl;
  return 0;
}