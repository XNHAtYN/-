#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k, i, x, count = 0;
        long long stock = 0;
        scanf("%d%d", &n, &k);
        for (i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x >= k) stock += x;
            else if (x == 0 && stock > 0) {
                stock--;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
