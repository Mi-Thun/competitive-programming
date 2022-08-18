#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float a[n],i,b,c,d,p,q,j=0;
    for(i=0;i<n;i++){
        scanf("%f %f %f",&b,&c,&d);
        p=b*2+c*3+d*5;
        q=p/10;
        printf("%.1f\n",q);
    }
    return 0;
}
