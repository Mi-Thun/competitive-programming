#include<stdio.h>
int main()
{
    int X,l,m,j;
    float n,i,a,b,c,d,o,avg,s;
    while(1){
            s=0;
            j=0;
            for(i=0;i<100;i++){
                scanf("%f",&n);
                if (n >= 0 && n <= 10){
                    s=s+n;
                    j++;
                }
                else
                    printf("nota invalida\n");
                if(j==2){
                    avg = s/2;
                    printf("media = %.2f\n",avg);
                    break;
                }
            }
            for(l=0;l<100;l++){
                scanf("%d",&X);
                printf("novo calculo (1-sim 2-nao)\n");
                if(X==1||X==2)
                    break;
            }
            if(X==1)
                continue;
            else if(X==2)
                break;
        }
    return 0;
}
