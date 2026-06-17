#include "stdio.h"

int main() {
    int wind_force;

    printf("Введите скорость ветра в узлах: ");
    scanf("%d", &wind_force);

    if (wind_force < 1) {
        printf("Штиль\n");
    } 
    else if (wind_force <= 3) {
        printf("Легкий бриз\n");
    }
    else if (wind_force <= 27) {
        printf("Бриз\n");
    }
    else if (wind_force <= 47) {
        printf("Сильный ветер\n");
    }
    else if (wind_force <= 63) {
        printf("Шторм\n");
    }
    else {
        printf("Ураган\n");
    }
}
