#include <stdio.h>

int main() {
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, control_sum, control_sum_calculate, first_sum, second_sum, total;
    printf("Введите код UPC вместе с контрольной суммой(12 знаков): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &control_sum);
    first_sum = i1 + i3 + i5 + i7 + i9 + i11;
    second_sum = i2 + i4 + i6 + i8 + i10;
    total = 3 * first_sum + second_sum;
   control_sum_calculate = 9 - ((total - 1) %10);
    printf("Контрольная сумма: %d\n", control_sum_calculate);
    if  (control_sum == control_sum_calculate) {
        printf("VALID\n");
    } else {
        printf("NOT_VALID");
    }
    return 0;
}
