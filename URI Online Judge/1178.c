#include<stdio.h>
int main()
{
   double a,i,j,k,b[100];
   scanf("%lf",&a);
   for(i=0;i<100;i++){
     printf("N[%.lf] = %.4lf\n",i,a);
        a=a/2;
   }
}
