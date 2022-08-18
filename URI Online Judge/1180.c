#include<stdio.h>
int main()
{
    int a[1000],b,i,c=0,j,k,min;
    scanf("%d",&b);
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(j=1;j<b;j++){
        if(min>a[j]){
            min=a[j];
            c=j;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",c);
}
