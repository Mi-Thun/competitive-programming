#include<stdio.h>
#include<math.h>
int main ()
{
    int a,i,b,n;
    scanf("%d",&a);
    for(i=1;i<=10000;i++){
        if(i%a==2){
            printf("%d\n",i);
        }
    }
    return 0;
}
