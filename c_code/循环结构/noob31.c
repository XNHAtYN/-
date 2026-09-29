#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i=0;
    int j;
    int flag=1;
    for(i=0;i<n;i++){
        int b;
        scanf("%d",&b);
        if(b>2){
            for(j=2;j<b;j++){
                if(b%j==0){
                    flag=0;
                    break;
                }
                else {
                flag=1;
                }

            }
        }
        else{
            if(b==2)
            flag=1;
            else
            flag=0;
        }
        if(flag)
        printf("Yes\n");
        else
         printf("No\n");
    }
    return 0;
}