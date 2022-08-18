#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,g,G;
    scanf("%lf",&a);
    if(a>=0&&a<=2000){
        printf("Isento\n");
    }
    else if(a>2000&&a<=3000){
        b=a-2000;
        c=0.08*b;
        printf("R$ %.2lf\n",c);
    }
    else if(a>3000&&a<=4500){
        f=a-3000;
        e=(0.18*f)+80;
        printf("R$ %.2lf\n",e);
    }
    else if(a>4500){
        g=a-4500;
        G=0.28*g+350;
        printf("R$ %.2lf\n",G);
    }

    return 0;
}
