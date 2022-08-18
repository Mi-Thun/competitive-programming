#include<stdio.h>

int main()
{
    int N,A,B,C,D,E,F,P,Q,R,S,T,U;

    scanf("%d",&N);

    printf("%d\n",N);

    A=N/100;
        printf("%d nota(s) de R$ 100,00\n",A);

    P=(N%100);
    B=P/50;
        printf("%d nota(s) de R$ 50,00\n",B);

    Q=(P%50);
    C=Q/20;
        printf("%d nota(s) de R$ 20,00\n",C);

    R=(Q%20);
    D=R/10;
        printf("%d nota(s) de R$ 10,00\n",D);

    S=(R%10);
    E=S/5;
        printf("%d nota(s) de R$ 5,00\n",E);

    T=(S%5);
    F=T/2;
        printf("%d nota(s) de R$ 2,00\n",F);

    U=(T%2);
    printf("%d nota(s) de R$ 1,00\n",U);

    return 0;
}
