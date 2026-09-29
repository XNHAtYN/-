#include <stdio.h>
#include <math.h>
int main() {
    int x1,y1,x2,y2;
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    int dx=abs(x1-x2);
    int dy=abs(y1-y2);
    double dm=dx+dy;
    double de=sqrt(dx*dx+dy*dy);
    double result=fabs(dm-de);
    printf("%lf",result);
    return 0;
}