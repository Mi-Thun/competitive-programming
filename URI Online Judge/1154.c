#include<stdio.h>
int main()
{
    double n,a,i,j,p=0,q=0;
    for(i=1;i<1000;i++){
       scanf("%lf",&n);
        if(n<0){
          break;
        }
        else{
          p=p+n;
          q++;
        }
    }
      a=p/q;
    printf("%.2f\n",a);
}
