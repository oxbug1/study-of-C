#include "stdio.h"

int main() {
    int day, mounth, year;
    printf("Введите дату в форме (день/месяц/год): ");
    scanf("%2d/%2d/%4d", &day, &mounth, &year);
    printf("Подписано %d-го ", day);
    switch (mounth) {
        case 1: printf("Января"); break;
        case 2: printf("Февраля"); break;
        case 3: printf("Марта"); break;
        case 4: printf("Апреля"); break;
        case 5: printf("Мая"); break;
        case 6: printf("Июня"); break;
        case 7: printf("Июля"); break;
        case 8: printf("Августа"); break;
        case 9: printf("Сентября"); break;
        case 10: printf("Октября"); break;
        case 11: printf("Ноября"); break;
        case 12: printf("Декабря"); break;
    }
    printf(", %d года\n", year);
    return 0;
}
