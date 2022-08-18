#include<stdio.h>
int main()
{
    double n;
    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    int A,B,C,D,E,F,G,H,I,J,K,L;

    scanf("%lf",&n);

    A=n*100;
    b=A/10000;
    B=A%10000;
    c=B/5000;
    C=B%5000;
    d=C/2000;
    D=C%2000;
    e=D/1000;
    E=D%1000;
    f=E/500;
    F=E%500;
    g=F/200;
    G=F%200;
    h=G/100;
    H=G%100;
    i=H/50;
    I=H%50;
    j=I/25;
    J=I%25;
    k=J/10;
    K=J%10;
    l=K/5;
    L=K%5;
    m=L;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",b);
    printf("%d nota(s) de R$ 50.00\n",c);
    printf("%d nota(s) de R$ 20.00\n",d);
    printf("%d nota(s) de R$ 10.00\n",e);
    printf("%d nota(s) de R$ 5.00\n",f);
    printf("%d nota(s) de R$ 2.00\n",g);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",h);
    printf("%d moeda(s) de R$ 0.50\n",i);
    printf("%d moeda(s) de R$ 0.25\n",j);
    printf("%d moeda(s) de R$ 0.10\n",k);
    printf("%d moeda(s) de R$ 0.05\n",l);
    printf("%d moeda(s) de R$ 0.01\n",m);
    return 0;
}
