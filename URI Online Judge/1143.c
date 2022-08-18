#include<stdio.h>
int main()
{
    int x,y,z,a,b,c,d,e,f,i,j,k,l;
    scanf("%d",&x);
    if(x>1&&x<1000)
    {
        for(i=1;i<=x;i++)
        {
            for(j=i;j<3+i;j++)
            {
                if(j==i)
                {
                    y=j;
                    printf("%d ",y);
                }
                else if(j==i+1)
                {
                    y=i*i;
                    printf("%d ",y);
                }
                else if(j=i+2)
                {
                    y=i*i*i;
                    printf("%d",y);
                }
            }
            printf("\n");
        }
    }
}
