#include <stdio.h>

int main(void)
{
    int n, m, i, j;
    long long value, sum = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%lld", &value);
            sum += value;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
