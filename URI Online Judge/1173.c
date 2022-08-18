#include<stdio.h>
int main()
{
    int a[10],i,j,k;
    scanf("%d",&k);
    for(i=0;i<10;i++,k=k*2){
        a[i]=k;
        printf("N[%d] = %d\n",i,a[i]);
    }
}
