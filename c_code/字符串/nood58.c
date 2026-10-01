#include <stdio.h>

int main(void)
{
    long long n, number = 1, digits = 1, block = 9;
    scanf("%lld", &n);
    while (n > digits * block) {
        n -= digits * block;
        digits++;
        block *= 10;
        number *= 10;
    }
    number += (n - 1) / digits;
    {
        long long divisor = 1;
        int i;
        for (i = 0; i < digits - 1 - (n - 1) % digits; i++) divisor *= 10;
        printf("%lld\n", (number / divisor) % 10);
    }
    return 0;
}
