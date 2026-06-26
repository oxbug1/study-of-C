#include "stdio.h"

int main() {
    int cmd;
    float balance = 0.0f, credit, debit;
    printf("***Программа для проверки банковского счета***\n");
    printf("Команды: 0 - Очистить, 1 - Кредит, 2 - Дебет\n 3 - Баланс, 4 - Выход\n");
    for (;;) {
        printf("Введите команду: ");
        scanf("%d", &cmd);
        switch (cmd) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Введите сумму зачисления: \n");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2: 
                printf("Введите сумму вывода: \n");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Ваш баланс: $%.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Команды: 0 - Очистить, 1 - Кредит, 2 - Дебет\n 3 - Баланс, 4 - Выход\n");
            break;
        }
    }
}
