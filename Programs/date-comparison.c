#include "stdio.h"

int main() {
    int day1, day2, mounth1, mounth2, year1, year2;
    printf("Введите первую дату (ДД/ММ/ГГ)\n");
    scanf("%2d/%2d/%2d", &day1, &mounth1, &year1);
    printf("Введите вторую дату (ДД/ММ/ГГ)\n");
    scanf("%2d/%2d/%2d", &day2, &mounth2, &year2);

    if ((year1*100+mounth1*10+day1) > (year2*100+mounth2*10+day2)) {
        printf("%.2d/%.2d/%.2d раньше, чем %.2d/%.2d/%.2d", day2, mounth2, year2, day1, mounth1, year1);
    } else { printf("%.2d/%.2d/%.2d раньше, чем %.2d/%.2d/%.2d", day1, mounth1, year1, day2, mounth2, year2);
    }
}
