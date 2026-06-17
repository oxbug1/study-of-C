#include "stdio.h"

int main() {
    unsigned int num;
    printf("Введите любое целое положительное число: \n");
    scanf("%d", &num);

    if (num >= 0 && num <= 9) {
        printf("1 \n");
    }
    else if (num > 9 && num <= 99) {
        printf("2\n");
    }
    else if (num > 99 && num <= 999) {
        printf("3\n");
    }
    else if (num > 999 && num <= 9999) {
        printf("4\n");
    }
    else if (num > 9999 && num <= 99999) {
        printf("5\n");
    }
    else if (num > 99999 && num <= 999999) {
        printf("6\n");
    }
    else if (num > 999999 && num <= 9999999) {
        printf("7\n");
    }
    else if (num > 9999999 && num <= 99999999) {
        printf("8\n");
    }
    else if (num > 99999999 && num <= 999999999) {
        printf("9\n");
    }
    else if (num > 999999999 && num <= 4294967295) {
        printf("10\n");
    }
    else {
        printf("Некорректное значение\n");
    }
}
