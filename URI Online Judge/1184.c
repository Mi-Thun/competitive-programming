#include<stdio.h>
int main()
{
    double a[12][12],c,sum=0,k=0,d;
    int i,j,x;
    char b;
    scanf("%s",&b);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0;i<12;i++){
        for(j=0;j<i;j++){
            sum=sum+a[i][j];
            k++;
        }
    }
    if(b=='S'){
        printf("%.1lf\n",sum);
    }
    else if(b=='M'){
        c=sum/k;
        printf("%.1lf\n",c);
    }
}
