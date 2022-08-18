#include<stdio.h>

int main()
{
    int a, b, A, B;
    double c, C, D;

    scanf("%d %d %lf", &a, &b, &c);
    scanf("%d %d %lf", &a, &B, &C);

    D=(B*C)+(b*c);

    printf("VALOR A PAGAR: R$ %.2lf\n",D);

    return 0;
}
