#include <stdio.h>

int main() {
    double K;
    scanf("%lf",&K);
    double F=(K-273.15)*1.8+32;
    printf("%f",F);
    return 0;
}