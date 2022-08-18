#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    if(a%2==0)
        a=a-1;
    for(i=1;i<=6;i++){
        a+=2;
        printf("%d\n",a);
    }
    return 0;
}
