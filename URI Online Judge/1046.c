#include<stdio.h>
int main()
{
    int S,E,X,Y;

    scanf("%d %d",&S,&E);

    if(S==E){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(S<E){
        X=E-S;
        printf("O JOGO DUROU %d HORA(S)\n",X);
    }
    else if(S>E){
        Y=(E+24)-S;
        printf("O JOGO DUROU %d HORA(S)\n",Y);
    }
}
