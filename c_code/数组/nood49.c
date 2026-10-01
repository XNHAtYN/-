#include <stdio.h>

int main(void)
{
    int n, i, j, value, ok = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &value);
            if (i > j && value != 0) ok = 0;
        }
    }
    printf(ok ? "YES\n" : "NO\n");
    return 0;
}
