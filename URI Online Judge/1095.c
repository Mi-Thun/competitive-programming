#include<stdio.h>
int main()
{
    int a,i,c=1,j;
    for(j=60;j>=0;j-=5){
        printf("I=%d J=%d\n",c,j);
        c=c+3;
    }
    return 0;
}
