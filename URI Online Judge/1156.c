#include<stdio.h>
int main()
{
    double a=0,j,i;
    for(i=1,j=1;i<=39;i+=2,j=j*2){
         a=a+(i/j);
    }
    printf("%.2lf\n",a);
    return 0;
}
