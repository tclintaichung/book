#include <iostream>
#include <unistd.h>

int main() {
    int count_down_time;
    std::cout << "Enter count down time in seconds: ";
    std::cin >> count_down_time;
    while (count_down_time > 0) {
        std::cout << "Time remaining (s): " << count_down_time << std::endl;
        sleep(1);
        count_down_time--;
    }   
    std::cout << "Time's up!\n";
    return 0;
}
