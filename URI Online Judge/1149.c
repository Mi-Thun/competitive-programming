#include<stdio.h>
int main()
{
    int a,b,i,j=0;
    scanf("%d %d",&a,&b);
    for(;;)
    {
        if(b<=0)
        {
            scanf("%d",&b);
        }
        else
        {
            for(i=0;i<b;i++)
            {

                j=j+a;
                a++;
            }

            printf("%d\n",j);
            break;
        }
    }
}
