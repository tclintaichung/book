#include "leap.h"
#include <emscripten/emscripten.h>

EMSCRIPTEN_KEEPALIVE
bool is_leap_year(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return true;
	}
	return false;
}