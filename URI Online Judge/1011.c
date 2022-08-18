#include<stdio.h>

int main()
{
    double pi=3.14159,R,V;

    scanf("%lf",&R);

    V=(4*pi*R*R*R)/3;

    printf("VOLUME = %.3lf\n",V);

    return 0;
}
