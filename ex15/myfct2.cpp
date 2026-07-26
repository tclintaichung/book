#include <iostream>
extern "C" {
	int plus10(int a){
		return a + 10;
	}
}
int main() {
	int value = 5;
    std::cout << "plus10(" << value << ") = " << plus10(value) <<
	std::endl;
    return 0;
}