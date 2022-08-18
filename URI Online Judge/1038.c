#include<stdio.h>

int main()
{
    int A,B;
    float C;

    scanf("%d %d",&A,&B);

    if(1==A)
        C=B*4.0;

    else if(2==A)
        C=B*4.5;

    else if(3==A)
        C=B*5.0;

    else if(4==A)
        C=B*2.0;

    else if(5==A)
        C=B*1.5;

    printf("Total: R$ %.2f\n",C);

    return 0;
}
