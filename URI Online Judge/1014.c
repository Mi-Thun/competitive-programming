#include<stdio.h>

int main()
{
    int X;
    double A,Y;

    scanf("%d %lf",&X,&Y);

    A=X/Y;

    printf("%.3lf km/l\n",A);

    return 0;
}
