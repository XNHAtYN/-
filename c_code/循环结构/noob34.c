#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x;
    scanf("%d",&x);
    int max,min;
    max=x;
    min=x;
    while(--n){
        scanf("%d",&x);
        if(x>max)
        max=x;
        if(x<min)
        min=x;
    }
    int diff;
    diff=max-min;
    printf("%d",diff);
    return 0;
}