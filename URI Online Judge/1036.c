#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C,D,E,F;

     scanf("%f %f %f",&A,&B,&C);

     D=pow(B,2)-(4*A*C);

     if(D<0)
     {
         printf("Impossivel calcular\n");
     }
     else if (A==0)
     {
         printf("Impossivel calcular\n");
     }
     else
     {
         E=(-B+sqrt(D))/(A+A);
         F=(-B-sqrt(D))/(A+A);

         printf("R1 = %.5f\n",E);
         printf("R2 = %.5f\n",F);
     }

   return 0;

}
