#include <stdio.h>

int main() {
    int n = 1, sum = 0;
    printf("Программа вычисляет сумму ряда целых чисел (0 для завершения)\n");
    while (n != 0) {
        printf("Введите числа для суммирования: ");
        scanf("%d", &n);
        sum += n;
    } 
    printf("Сумма равна: %d\n", sum);
}
