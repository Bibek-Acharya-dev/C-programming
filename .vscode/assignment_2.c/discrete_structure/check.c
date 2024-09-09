#include <stdio.h>

int binaryproduct(int, int);

int main() {
    long bin1, bin2, multiply = 0;
    int digit, factor = 1;

    printf("Enter the binary numbers: ");
    scanf("%ld %ld", &bin1, &bin2);

    while (bin2 != 0) {
        digit = bin2 % 10;
        if (digit == 1) {
            multiply = binaryproduct(bin1 * factor, multiply);
        }
        factor *= 10;  
        bin2 = bin2 / 10;
    }

    printf("Product of two binary numbers: %ld\n", multiply);
    return 0;
}

int binaryproduct(int bin1, int bin2) {
    int i = 0, remainder = 0, sum[20];
    int binprod = 0;

    while (bin1 != 0 || bin2 != 0) {
        sum[i++] = (bin1 % 10 + bin2 % 10 + remainder) % 2;
        remainder = (bin1 % 10 + bin2 % 10 + remainder) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }

    if (remainder != 0) {
        sum[i++] = remainder;
    }

    --i;
    while (i >= 0) {
        binprod = binprod * 10 + sum[i--];
    }

    return binprod;
}
