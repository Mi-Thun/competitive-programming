#include<stdio.h>
int main()
{
    int i,j,k,l,e=0;
    double a[12][12],c,d=0,sum=0;
    char b;
    scanf("%s",&b);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0;i<12-e;i++){
        e++;
        for(j=0;j<i;j++){
            sum=sum+a[i][j];
            d++;
        }
    }
    for(k=6;k<12;k++){
        for(l=0;l<11-k;l++){
          sum=sum+a[k][l];
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
