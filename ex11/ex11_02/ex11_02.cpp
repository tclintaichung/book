#include <iostream>
#include <ctime>

int main() {
    std::time_t now = std::time(nullptr);
    std::tm *local_time;
    local_time = localtime(&now);
    int code[] = {0, 0, 0, 0, 0};
    code[0] = local_time->tm_year % 5 + 1;
    code[1] = (local_time->tm_mon + 1) % 5 + 1;
    code[2] = local_time->tm_mday % 5 + 1;
    code[3] = local_time->tm_hour % 5 + 1;
    code[4] = local_time->tm_min % 5 + 1;
    std::cout << "Access Code: ";
    for (int i = 0; i < 5; ++i) {   
        std::cout << code[i];
    }
    std::cout << std::endl;
    return 0;
}
