#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0,i;
    printf("MUITO OBRIGADO\n");
    for(i=0;i<100;i++){
      scanf("%d",&n);
        if(n==1){
          a++;
        }
        if(n==2){
          b++;
        }
        if(n==3){
          c++;
        }
        if(n==4){
            break;
        }
    }
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",a,b,c);
    return 0;
}
