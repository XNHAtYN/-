#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[24];
    a[1]=0;
    a[2]=1;
    a[3]=1;
    int i;
    for(i=4;i<=n;i++){
        a[i]=a[i-3]+2*a[i-2]+a[i-1];
    }
    printf("%d",a[n]);
    return 0;
}