#include <stdio.h>

int main() {
    int c,d;
    scanf("%d%d",&c,&d);
    double rate=1.0*d/c*100;
    printf("%.3f%%",rate);
    return 0;
}