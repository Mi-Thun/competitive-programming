#include <stdio.h>
int main()
{
    double a,i,count=0;
    for(i=0;i<6;i++){
      scanf("%lf",&a);
        if(a>0){
          count++;
        }
    }
   printf("%.lf valores positivos\n",count);
   return 0;
}
