#include <iostream>
#include <emscripten/emscripten.h>
extern "C" {
	EMSCRIPTEN_KEEPALIVE
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