#include <stdio.h>

int main(void)
{
    long long numbers[100];
    long long input;
    int count = 0;

    while (scanf("%lld", &input) == 1 && input != 0) {
        numbers[count++] = input;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%lld%s", numbers[i], i == 0 ? "\n" : " ");
    }

    return 0;
}
