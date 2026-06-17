#include "stdio.h"

int main() {
    int grade;
    printf("Введите числовую оценку: ");
    scanf("%d", &grade);
    grade /= 10;
    switch (grade) {
        case 0: case 1: case 2: case 3: case 4:
        case 5: printf("F\n");
            break;
        case 6: printf("D\n");
            break;
        case 7: printf("C\n");
            break;
        case 8: printf("B\n");
            break;
        case 9: case 10: printf("A\n");
            break;
        default: printf("Ошибочная оценка");
            break;
    }
}
