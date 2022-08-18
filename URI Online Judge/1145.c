#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
        for(j=1;j<=a;j++){
            if(j!=a){
                printf("%d ", i);
            }
            else if(j==a){
                printf("%d\n", i);
            }
        i++;
        }
    i--;
    }
    return 0;
}
