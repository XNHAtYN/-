#include <stdio.h>

int main() {
    float sum=0;
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("%f",sum);
    return 0;
}