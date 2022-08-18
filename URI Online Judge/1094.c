#include<stdio.h>
int main()
{
    float n,a,b,i,count=0,p=0,q=0,X,Y,Z;
    char d,ch;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        scanf("%f %c",&b,&ch);
        if(ch=='C'){
            count+=b;
        }
        else if(ch=='R'){
            p+=b;
        }
        else if(ch=='S'){
            q+=b;
        }
    }
    a=count+p+q;
    X=(count*100)/a;
    Y=(p*100)/a;
    Z=(q*100)/a;
    printf("Total: %.f cobaias\n",count+p+q);
    printf("Total de coelhos: %.f\n",count);
    printf("Total de ratos: %.f\n",p);
    printf("Total de sapos: %.f\n",q);
    printf("Percentual de coelhos: %.2f %%\n",X);
    printf("Percentual de ratos: %.2f %%\n",Y);
    printf("Percentual de sapos: %.2f %%\n",Z);
}
