#include<stdio.h>
int main()
{
    double a[100],k=0;
    int i;
    for(i=0;i<100;i++){
      scanf("%lf",&a[i]);
    }
    for(i=0;i<100;i++){
        if(a[i]<=10){
          k=a[i];
          printf("A[%d] = %.1lf\n",i,k);
          k=0;
       }
    }
    return 0;
}
