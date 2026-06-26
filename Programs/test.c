#include "stdio.h"

int main() {
    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }

    for (int n = 1; n <= 128; n *= 2) {
        printf("%d ", n);
    }
}

