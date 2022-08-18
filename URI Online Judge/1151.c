#include<stdio.h>
int main()
{
    int a[100],i,j,b;
    scanf("%d",&b);
    for(i=0;i<2;i++){
        a[i]=i;
        printf("%d ",a[i]);
    }
    for(j=1,i=2;j<=b-2;j++,i++){
        a[i]=a[i-1]+a[i-2];
        if(j<b-2){
            printf("%d ",a[i]);
        }
       else{
            printf("%d\n",a[i]);
       }
    }
}
