#include<stdio.h>
#include<math.h>

int main()
{
    double X1,X2,Y1,Y2,D;

    scanf("%lf %lf %lf %lf",&X1,&Y1,&X2,&Y2);

    D=sqrt((pow((X2-X1),2)+pow((Y2-Y1),2)));

    printf("%.4lf\n",D);

    return 0;
}
