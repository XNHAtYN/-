#include <stdio.h>
#define MOD 1000000007
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    long long a[1004][1004];
    a[1][1]=1;
    int i,j;
    for(i=2;i<=n;i++){
        a[i][1]=a[i-1][1];
    }
    for(j=2;j<=m;j++){
        a[1][j]=a[1][j-1];
    }
    for(i=2;i<=n;i++){
        for(j=2;j<=m;j++){
            a[i][j]=(a[i-1][j]+a[i][j-1])%MOD;
        }
    }
    long long result=a[n][m]%MOD;
    printf("%lld",result);
    return 0;
}