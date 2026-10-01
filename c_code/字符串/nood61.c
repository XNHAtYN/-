#include <stdio.h>

int main(void)
{
    int n, m, left, right, i;
    char s[500005], from, to;
    scanf("%d%d%500000s", &n, &m, s);
    while (m--) {
        scanf("%d%d %c %c", &left, &right, &from, &to);
        for (i = left - 1; i < right; i++) {
            if (s[i] == from) s[i] = to;
        }
    }
    printf("%s\n", s);
    return 0;
}
