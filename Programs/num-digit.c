#include <stdio.h>

int main() {
    int n, len = 0;
    printf("Программа вычисляет длину положительного числа (В символах)\nНапишите число: ");
    scanf("%d", &n);
    do {
        n /= 10;
        len ++;
    } while (n > 0);
    printf("Длина числа: %d\n", len);
}
