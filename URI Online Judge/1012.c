#include<stdio.h>

int main()
{
    double A,B,C,D,pi=3.14159,T,c,t,Q,R;

    scanf("%lf %lf %lf",&A,&B,&C);

   T=(A*C)/2;
   c=pi*C*C;
   t=((A+B)*C)/2;
   Q=B*B;
   R=A*B;

    printf("TRIANGULO: %.3lf\n",T);
    printf("CIRCULO: %.3lf\n",c);
    printf("TRAPEZIO: %.3lf\n",t);
    printf("QUADRADO: %.3lf\n",Q);
    printf("RETANGULO: %.3lf\n",R);


    return 0;
}
