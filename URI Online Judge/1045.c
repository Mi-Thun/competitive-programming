#include<stdio.h>
int main()
{
    double A,B,C,D,E,F,G;
    scanf("%lf %lf %lf",&A,&B,&C);

    if(A<B){
        D=A;
        A=B;
        B=D;
    }
    if(A<C){
        D=A;
        A=C;
        C=D;
    }
    if(B<C){
        D=B;
        B=C;
        C=D;
    }

    E=A*A;
    F=B*B;
    G=C*C;

    if( A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(E == F + G){
         printf("TRIANGULO RETANGULO\n");
    }
    else if(E > F + G){
         printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(E < F + G){
         printf("TRIANGULO ACUTANGULO\n");
    }
    if(A==B&&B==C&&C==A){
         printf("TRIANGULO EQUILATERO\n");
    }
    else if(A==B||B==C||C==A){
         printf("TRIANGULO ISOSCELES\n");
    }
    return 0;

}
