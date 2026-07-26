// #include <stdio.h>
#include <emscripten/emscripten.h>
#include <string>
#include <cstring>

extern "C" {
  EMSCRIPTEN_KEEPALIVE
  int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
  }

  EMSCRIPTEN_KEEPALIVE
  int fibonacci_num(int n) {
    if (n == 1) return 1;
    if (n == 0) return 0;
    return fibonacci_num(n - 1) + fibonacci_num(n -2);
  }

  EMSCRIPTEN_KEEPALIVE
  const char* fibonacci_seq(int n) {
    char temp[50] = "";
    int seq_first = 0, seq_second = 1, seq_third;
    static std::string seq;
    seq.clear();
    seq = "0, 1";
    for (int i = 2; i < n; i++) {
      seq_third = seq_first + seq_second;
      sprintf(temp, "%d", seq_third);
      seq.append(", ");
      seq.append(temp);
      seq_first = seq_second;
      seq_second = seq_third;
    }  
    return seq.c_str();
  }
}   