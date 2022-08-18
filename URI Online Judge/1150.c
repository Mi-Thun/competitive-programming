#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=0,i;
    scanf("%d",&a);
    for(;;)
    {
    scanf("%d",&c);
    if(c>a)
    {

        for(i=a;;i++)
        {
            d=d+i;
            e++;
            if(d>c)
            {
                break;
            }
        }
        printf("%d\n",e);
    }
    if(d>c)
            {
                break;
            }
    }
}
