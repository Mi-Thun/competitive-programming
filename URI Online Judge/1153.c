#include<stdio.h>
int main()
{
    int n,p=1,i;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        p*=i;
    }
    printf("%d\n",p);
    return 0;
}
