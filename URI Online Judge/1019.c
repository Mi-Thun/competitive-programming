#include<stdio.h>

int main()
{
    int N,A,B,C,D;

    scanf("%d",&N);

    A=N/3600;
    B=N%3600;

    C=B/60;
    D=B%60;

    printf("%d:%d:%d\n",A,C,D);

    return 0;
}
