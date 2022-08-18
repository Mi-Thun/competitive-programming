#include<stdio.h>
int main()
{
    int a,i,j,b=0,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<4;j++)
        {
            b++;
            printf("%d ",b);
        }
        for(k=i;k<=i;k++)
        {
            printf("PUM\n");
            b++;
        }
    }
}
