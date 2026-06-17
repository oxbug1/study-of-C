#include "stdio.h"

int main() {
    float price, value, commission, count;

    printf("Введите стоимость акции: ");
    scanf("%f", &price);

    printf("Введите кол-во акций\n");
    scanf("%f", &count);

    value = price * count; //стоимость без комиссии

    if (value < 2500.00f) {
        commission = 30.00f + 0.017f * value;
    }
    else if (value < 6250.00f) {
        commission = 56.00f + 0.0066f * value;
    }
    else if (value < 20000.00f) {
        commission = 76.00f + 0.0034f * value;
    }
    else if (value < 50000.00f) {
        commission = 100.00f + 0.0022f * value;
    }
    else if (value < 500000.00f) {
        commission = 155.00f + 0.0011f * value;
    }
    else if (value >= 500000.00f) {
        commission = 255.00f + 0.0009f * value;
    }
    else if (commission < 39.00f) {
        commission = 39.00f;
    }
    printf("Комиссия первого брокера: $%.2f\n", commission);
    
    if (count < 2000) {    
        commission = 33.00f + 0.35f * count;
        printf("Комиссия конкурирующего брокера: $%.2f\n", commission);
    } else {
            commission = 33.00f + 0.02f * count;
            printf("Комиссия конкурирующего брокера: $%.2f\n", commission);
    }
}
