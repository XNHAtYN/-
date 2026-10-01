#include <stdio.h>

int main(void)
{
    int n, k, m, answer = 0, i;
    scanf("%d%d%d", &n, &k, &m);
    for (i = 2; i <= n; i++) {
        answer = (answer + m) % i;
    }
    printf("%d\n", (answer + k) % n);
    return 0;
}
