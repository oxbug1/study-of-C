#include "stdio.h"

int main() {
    int hour, minute, min_past_mid, departure_time;
    printf("Введите время в 24-часовом формате (XX:XX): \n");
    scanf("%2d:%2d", &hour, &minute);
    min_past_mid = hour * 60 + minute;
    if (min_past_mid < 8*60+0) {
        printf("Время вылета: 8:00, Время прибытия: 10:16\n");
    } else if (min_past_mid < 9*60+43) {
        printf("Время вылета: 9:43, Время прибытия: 11:52\n");
    } else if (min_past_mid < 11*60+19) {
        printf("Время вылета: 11:19, Время прибытия: 13:31\n");
    } else if (min_past_mid < 12*60+47) {
        printf("Время вылета: 12:47, Время прибытия: 15:00\n");
    } else if (min_past_mid < 14*60+0) {
        printf("Время вылета: 14:00, Время прибытия: 16:08\n");
    } else if (min_past_mid < 15*60+45) {
        printf("Время вылета: 15:45, Время прибытия: 17:55\n");
    } else if (min_past_mid < 19*60+0) {
        printf("Время вылета: 19:00, Время прибытия: 21:20\n");
    } else if (min_past_mid < 21*60+45) {
        printf("Время вылета: 21:45, Время прибытия: 23:58\n");
    } else printf("На сегодня вылетов не планируется\n"); 
    return 0;
   }
