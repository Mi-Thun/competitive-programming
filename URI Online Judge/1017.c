#include<stdio.h>
#include<math.h>

int main()
{
    double E,G;
    double A;

    scanf("%lf %lf",&E,&G);

    A=(E*G)/12;

    printf("%.3lf\n",A);

    return 0;
}
