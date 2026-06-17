#include "stdio.h"

int main() {
    int num, tens, ones;
    printf("Введите двузначеное число: ");
    scanf("%2d", &num);
    tens = num / 10;
    ones = num % 10;
    
    switch (num) {
        case 11: printf("Одинадцать\n");
            break;
        case 12: printf("Двенадцать\n");
            break;
        case 13: printf("Тринадцать\n");
            break;
        case 14: printf("Четырнадцать\n");
            break;
        case 15: printf("Пятнадцать\n");
            break;
        case 16: printf("Шестнадцать\n");
            break;
        case 17: printf("Семьнадцать\n");
            break;
        case 18: printf("Восемьнадцать\n");
            break;
        case 19: printf("Девятьнадцать\n");
            break;
        default: 
            switch (tens) {
                case 1: printf("Десять ");
                    break;
                case 2: printf("Двадцать ");
                    break;
                case 3: printf("Тридцать ");
                    break;
                case 4: printf("Сорок ");
                    break;
                case 5: printf("Пятьдесят ");
                    break;
                case 6: printf("Шестьдесят ");
                    break;
                case 7: printf("Семдесят ");
                    break;
                case 8: printf("Восемьдесят ");
                    break;
                case 9: printf("Девяносто ");
                    break;
        }
            switch (ones) {
                case 1: printf("один\n");
                    break;
                case 2: printf("два\n");
                    break;
                case 3: printf("три\n");
                    break;
                case 4: printf("четыре\n");
                    break;
                case 5: printf("пять\n");
                    break;
                case 6: printf("шесть\n");
                    break;
                case 7: printf("семь\n");
                    break;
                case 8: printf("восемь\n");
                    break;
                case 9: printf("девять\n");
                    break;
            }
            break;
     } 
}
