#include<stdio.h>
int main()
{
    int i,j;
    double a[100][100],c,sum=0,d=0;
    char b;
    scanf("%s",&b);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0;i<12;i++){
        for(j=0;j<11-i;j++){
            sum=sum+a[i][j];
            d++;
        }
    }
    if(b=='S'){
        printf("%.1lf\n",sum);
    }
    else if(b=='M'){
        c=sum/d;
        printf("%.1lf\n",c);
    }
    return 0;
}
