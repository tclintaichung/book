#include <iostream>
#include <string>
#include <map>
#include <array>
using namespace std;

map<string, array<int, 2>> paper_size = {
	{"A0", {841, 1189}}, {"A1", {594, 841}}, {"A2", {420, 594}},
	{"A3", {297, 420}}, {"A4", {210, 297}}, {"A5", {148, 210}},
	{"A6", {105, 148}}, {"A7", {74, 105}}, {"A8", {52, 74}},
	{"A9", {37, 52}}, {"A10", {26, 37}}
};

int main() {
  	string choice;
	map<string, array<int, 2>>::iterator it;
  	do {
		cout << "Enter a paper size (A0 to A10) or 'q' to quit: ";
		cin >> choice;
		if (choice == "q") {
			break;
		}
		choice[0] = toupper(choice[0]);
		it = paper_size.find(choice);
		if (it != paper_size.end()) {
			cout << "Size of " << choice << ": " << it->second[0] << " x " << 
		it->second[1] << endl;
		} else {
			cout << "Invalid input. Please enter a valid paper size." << endl;
		} 
  	} while (true);
  	cout << "Goodbye!" << endl;
  	return 0;
} 