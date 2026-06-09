#include "stdio.h"

int main() {
    int digit1, digit2, digit3;
    printf("Введите трехзначное число:");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);
    printf("Reverse: %1d%1d%1d\n", digit3, digit2, digit1);
    return 0;
}
