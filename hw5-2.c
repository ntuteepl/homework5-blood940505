#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t;
    double m;
    scanf("%f",&t);
    if(t <= 800){
        m = t*0.9;
    }
    if(t >800 && t <1500){
        m = (t*0.9)*0.9;
    }
    if(t >= 1500){
        m = t*0.9*0.79;
    }
    printf("%.1f",m);
}

