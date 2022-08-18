#include<stdio.h>
int main()
{
    int n,i,a,j;
    scanf("%d",&n);
    for(i=1;i<1000;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }

    return 0;
}
