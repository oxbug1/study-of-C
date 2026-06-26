#include <stdio.h>

int main() {
    int t;
    printf("Введите число с которого следует вести обратный отсчет: ");
    scanf("%d", &t);

    do {
        printf("%10d\n", t);
        t--;
    } while (t >= 0);

}
