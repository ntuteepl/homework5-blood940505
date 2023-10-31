#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    float ha,ma,a;
    scanf("%d %d",&h,&m);
    ha = h*30 + m*0.5;
    ma = m*6;
    if(ha > ma){
        a = ha - ma;
    }
    if(ha < ma){
        a = ma - ha;
    }
    if(a > 180){
        a = a - 180;
    }
    printf("%.3f",a);
}

