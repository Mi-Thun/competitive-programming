#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d",&b,&f,&d,&e);
    a=d-b;
    if(a<0){
      a=24+(d-b);
    }
    c=e-f;
    if(c<0){
        c=60+(e-f);
        a--;
    }
    if(d==b&&e==f){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,c);
    return 0;
}
