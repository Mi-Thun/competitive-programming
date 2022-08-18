#include<stdio.h>
int main()
{
    float i,j;
    int k,l;
    for (i=0;i<=2.1;i=i+0.2){
        for(j=1;j<=3;j=j+1){
           if(i>0&& i<1){
                printf("I=%.1f J=%.1f\n",i,j+i);
           }
           else if(i>1&&i<2){
                printf("I=%.1f J=%.1f\n",i,j+i);
           }
    else{
        k=i;
        l=k+j;
        printf("I=%d J=%d\n",k,l);
           }
        }
    }
    return 0;
}
