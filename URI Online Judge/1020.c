#include<stdio.h>

int main()
{
    int N,A,B,C,D;

    scanf("%d",&N);

    A=N/365;

    printf("%d ano(s)\n",A);

    B=N%365;
    C=B/30;

    printf("%d mes(es)\n",C);

    D=B%30;

    printf("%d dia(s)\n",D);

    return 0;
}
