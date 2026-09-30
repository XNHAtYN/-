#include <stdio.h>

int main(void)
{
    int n;
    int a[100];
    int b[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        b[i] = 0;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                b[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d%s", b[i], i == n - 1 ? "\n" : " ");
    }

    return 0;
}
