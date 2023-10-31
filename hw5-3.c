#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,tm;
    double m;
    scanf("%d %d",&t,&tm);
    if(t <= 60){
        m = t*tm;
    }
    if(t >60 && t <= 120){
        m = (t-60)*tm*1.33 + tm*60;
    }
    if(t > 120){
        m = (t-120)*tm*1.66 + tm*60 + tm*60*1.33;
    }
    printf("%.1f",m);
}

