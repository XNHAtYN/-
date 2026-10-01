#include <stdio.h>

int main(void)
{
    int n, m, i, j, dx, dy;
    char map[1002][1003] = {{0}};
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++) scanf("%s", map[i] + 1);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            int count = 0;
            if (map[i][j] == '*') {
                putchar('*');
                continue;
            }
            for (dx = -1; dx <= 1; dx++) {
                for (dy = -1; dy <= 1; dy++) {
                    if (map[i + dx][j + dy] == '*') count++;
                }
            }
            printf("%d", count);
        }
        putchar('\n');
    }
    return 0;
}
