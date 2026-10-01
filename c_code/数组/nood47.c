#include <stdio.h>

int main(void)
{
    int length, m, left, right, i, j, remaining = 0;
    int tree[10001] = {0};
    scanf("%d%d", &length, &m);
    for (i = 0; i < m; i++) {
        scanf("%d%d", &left, &right);
        for (j = left; j <= right; j++) tree[j] = 1;
    }
    for (i = 0; i <= length; i++) {
        if (!tree[i]) remaining++;
    }
    printf("%d\n", remaining);
    return 0;
}
