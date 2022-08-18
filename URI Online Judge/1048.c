#include<stdio.h>
int main()
{
 float N,a,b,c,d,e,f,g,h,i,j;
 scanf("%f",&N);
 if(N<=400){
    a=N*1.15;
    b=N*0.15;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",a,b);
 }
 else if(N<=800){
    c=N*1.12;
    d=N*0.12;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",c,d);
 }
 else if(N<=1200){
    e=N*1.10;
    f=N*0.10;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",e,f);
 }
 else if(N<=2000){
    g=N*1.07;
    h=N*0.07;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",g,h);
 }

 else{
    i=N*1.04;
    j=N*0.04;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",i,j);
 }

 return 0;
}
