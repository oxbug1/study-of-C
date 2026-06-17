#include "stdio.h"

int main() {
    int num1,num2,num3,num4, max, min, low1, low2, high1, high2;
    printf("Введите 4 целых числа: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    if (num1 > num2) {
        high1 = num1;
        low1 = num2;
    } else {
        high1 = num2;
        low1 = num1;
    }

    if (num3 > num4) {
        high2 = num3;
        low2 = num4;
    } else {
        high2 = num4;
        low2 = num3;
    }

    if (high1 > high2) {
        max = high1;
    } else {
        max = high2;
    }

    if (low1 > low2) {
        min = low2;
    } else {
        min = low1;
    }

    printf("Наибольшее: %d\nНаименьшее: %d\n", max, min);
}
