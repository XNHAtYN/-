#include <stdio.h>

int main() {
    int a;
    long b;
    double c;
    char d;
    char e[10004];
    scanf("%d%ld%lf %c%s",&a,&b,&c,&d,e);
    printf("%d\n%ld\n%.1lf\n%c\n%s",a,b,c,d,e);
    return 0;
}