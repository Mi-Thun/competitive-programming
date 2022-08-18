#include<stdio.h>
#include<string.h>
int main()
{
    double m[12][12],k,a;
    int i,j,c=0;
    char b;
    scanf("%lf",&a);
    scanf("%s",&b);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[i][j]);
        }
    }
    for(j=0;j<12;j++){
        i=a;
        k=k+m[i][j];
        c++;
    }
    if(b=='S'){
        printf("%.lf\n",k);
    }
    else if(b=='M'){
        printf("%.1lf\n",k/c);
    }

}
