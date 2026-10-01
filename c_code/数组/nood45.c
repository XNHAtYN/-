#include <stdio.h>

int main(void)
{
    int n, digit, number, count = 0;
    scanf("%d%d", &n, &digit);
    for (number = 1; number <= n; number++) {
        int x = number;
        while (x > 0) {
            if (x % 10 == digit) count++;
            x /= 10;
        }
    }
    printf("%d\n", count);
    return 0;
}
