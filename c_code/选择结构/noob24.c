#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int fx;
    if(n%2!=0)
    fx=3*n+1;
    else
    fx=n/2;
    printf("%d",fx);
    return 0;
}