#include<stdio.h>
int main()
{
    double a[12][12],sum=0,l;
    int i,j,k=0;
    char b;
    scanf("%s",&b);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
            sum=sum+a[i][j];
            k++;
        }
    }
    if(b=='S'){
       printf("%.1lf\n",sum);
    }
    else if(b=='M'){
        l=sum/k;
        printf("%.1lf\n",l);
    }
}
