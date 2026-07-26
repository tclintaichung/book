#include <stdio.h>
#include <unistd.h>

int main() {
    int count_down_time;
    printf("Enter count down time in seconds: ");
    scanf("%d", &count_down_time);
    while (count_down_time > 0) {
        printf("Time remaining (s): %3d\n", count_down_time);
        sleep(1);
        count_down_time--;
    }
    printf("Time's up!\n");
    return 0;
}
