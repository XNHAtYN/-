#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i;
    int sum=0;
    for(i=1;i<=n;i++){
        if(i%2==1)
        sum+=i;
        else
         sum-=i;
    }
    printf("%d",sum);
    return 0;
}