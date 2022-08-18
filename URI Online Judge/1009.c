#include<stdio.h>

int main()
{
    double C,D,F;
    char E;

    scanf("%s",&E);

    scanf("%lf %lf",&C,&D);

    F=(D*0.15)+C;

    printf("TOTAL = R$ %.2lf\n",F);

    return 0;
}
