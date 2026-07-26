#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    struct tm *local_time;
    local_time = localtime(&now);
    int code[] = {0, 0, 0, 0, 0};
    code[0] = local_time->tm_year % 5 + 1;
    code[1] = (local_time->tm_mon + 1) % 5 + 1;
    code[2] = local_time->tm_mday % 5 + 1;
    code[3] = local_time->tm_hour % 5 + 1;
    code[4] = local_time->tm_min % 5 + 1;
    printf("Access Code: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d", code[i])   ;
    }
    printf("\n");
    return 0;
}
