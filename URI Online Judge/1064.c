#include<stdio.h>
int main()
{
    double a,i,p=0,q,s;
    for(i=0;i<6;i++){
      scanf("%lf",&a);
        if(a>0){
            p++;
            q=q+a;
        }
    }
    s=q/p;
    printf("%.lf valores positivos\n",p);
    printf("%.1lf\n",s);
    return 0;
}
