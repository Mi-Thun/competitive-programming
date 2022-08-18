#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d %d",&a,&b,&c);

    e=a;
    f=b;
    g=c;

    if(a>b){
        d=a;
        a=b;
        b=d;
    }
    if(a>c){
        d=a;
        a=c;
        c=d;
    }
    if(b>c){
        d=b;
        b=c;
        c=d;
    }
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",e,f,g);

    return 0;

}
