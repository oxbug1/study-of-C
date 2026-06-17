#include "stdio.h"

int main() {
    int hour, minute;
    printf("Введите время в 24-часовом формате XX:XX\n");
    scanf("%2d:%2d", &hour, &minute);
    if (hour <= 12) {
        printf("%.2d:%.2dAM\n", hour, minute);
    } else {
        printf("%.2d:%.2dPM\n", hour-12, minute);
    }
    return 0;
}
