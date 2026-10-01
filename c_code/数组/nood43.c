#include <stdio.h>

int main(void)
{
    int t, n, i;
    scanf("%d", &t);
    while (t--) {
        long long value, minimum = 0, maximum = 0, sum = 0;
        double average, variance = 0.0;
        long long a[1000];

        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            if (i == 0 || a[i] < minimum) minimum = a[i];
            if (i == 0 || a[i] > maximum) maximum = a[i];
            sum += a[i];
        }
        average = (double)sum / n;
        for (i = 0; i < n; i++) {
            value = a[i];
            variance += (value - average) * (value - average);
        }
        printf("%lld %.3f\n", maximum - minimum, variance / n);
    }
    return 0;
}
