#include "stdio.h"

int main() {
    int decimal, octal = 0, result = 0;
    printf("Введите число от 0 до 32767: ");
    scanf("%d", &decimal);
    octal += decimal % 8;
    decimal /= 8;
    octal *= 10;
    octal += decimal % 8;
    decimal /= 8;
    octal *= 10;
    octal += decimal % 8;
    decimal /= 8;
    octal *= 10;
    octal += decimal % 8;
    decimal /= 8;
    octal *= 10;
    octal += decimal % 8;
    decimal /= 8;
    octal *= 10;
    
    //result += octal % 10;
    octal /= 10;
    result *= 10;
    result += octal % 10;
    octal /= 10;
    result *= 10;
    result += octal % 10;
    octal /= 10;
    result *= 10;
    result += octal % 10;
    octal /= 10;
    result *= 10;
    result += octal % 10;
    octal /= 10;
    result *= 10;
    result += octal % 10;
    printf("Число в восьмиричной системе счисления: %5.5d\n", result);
}
