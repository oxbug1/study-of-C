#include "stdio.h"

int main() {
    int i = 0, n;
    printf("Введите колличество записей в таблице квадратов: ");
    scanf("%d", &n);
    while (i < n) {
        printf("%10d  %10d\n", i, i * i, i++);
    }

    return 0;
}
