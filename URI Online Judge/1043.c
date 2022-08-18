#include<stdio.h>
int main()
{
    float A,B,C,Area,Perimetro;

    scanf("%f %f %f",&A,&B,&C);

    if(A+B>C&&A+C>B&&B+C>A){
         Perimetro=A+B+C;
        printf("Perimetro = %.1f\n",Perimetro);
    }
    else
    {
        Area=((A+B)*C)/2;
       printf("Area = %.1f\n",Area);
    }

    return 0;
}
