#include<stdio.h>
int main()
{
    int a[1000],b,i,c=0;
    scanf("%d",&b);
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,c);
        c++;
        if(c==b){
            c=0;
        }
    }
    return 0;
}
