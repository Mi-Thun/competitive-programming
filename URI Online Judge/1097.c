#include<stdio.h>
int main()
{
    int a,i,c=3,j=5,k;
    for(i=1;i<=9;i+=2){
        c+=2;
        j+=2;
        for(k=j;k>=c;k--){
            printf("I=%d J=%d\n",i,k);

        }
    }
    return 0;
}
