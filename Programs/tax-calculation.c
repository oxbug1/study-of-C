#include "stdio.h"

int main() {
    float income, tax;

    printf("Введите сумму налогооблагаемого дохода: ");
    scanf("%f", &income);

    if (income <= 750.00f) {
        tax = income * 0.01f;
    }
    else if (income <= 2250.00f) {
        tax = 7.50f + (income - 750.00f) * 0.02;
    }
    else if (income <= 3750.00f) {
        tax = 37.50f + (income - 2250.00f) * 0.03;
    }
    else if (income <= 5250.00f) {
        tax = 82.50f + (income - 3750.00f) * 0.04;
    }
    else if (income <= 7000.00f) {
        tax = 142.50f + (income - 5250.00f) * 0.05;
    }
    else if (income > 7000.00f) {
        tax = 230.00f + (income - 7000.00f) * 0.06;
    }

    printf("Сумма налога: %.2f", tax);
}
