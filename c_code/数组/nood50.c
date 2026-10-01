#include <stdio.h>

int main(void)
{
    int n, m, i, j;
    long long a[100][100];
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) scanf("%lld", &a[i][j]);
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) printf("%lld%c", a[i][j], i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
