#include <stdio.h>

int main(void)
{
    int n, i, j;
    long long a[51][51] = {0};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        a[i][0] = a[i][i] = 1;
        for (j = 1; j < i; j++) a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) printf("%lld%c", a[i][j], j == i ? '\n' : ' ');
    }
    return 0;
}
