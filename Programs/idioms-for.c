#include <stdio.h>

int main() {
    int n;
    printf("Введите число итераций: ");
    scanf("%d", &n);

    printf("\nСчет от 0 до n - 1:\n");
    for (int i = 0; i < n; i++ ) {
        printf("%d ", i);
    }

    printf("\nСчет от 1 до n:\n");
    for (int i = 1; i <= n; i++ ) {
        printf("%d ", i);
    }

    printf("\nСчет от n - 1 до 0:\n");
    for (int i = n - 1; i >= 0; i-- ) {
        printf("%d ", i);
    }

    printf("\nСчет от n до 1:\n");
    for (int i = n; i > 0; i-- ) {
        printf("%d ", i);
    }
    printf("\n");
}
