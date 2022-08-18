#include<stdio.h>
int main()
{
    int a,b,c=0,i,j;
    for(j=1;j<1000;j++){
      scanf("%d %d",&a,&b);
      if(a<=0||b<=0){
            break;
      }
      if(b<a){
      for(i=b;i<=a;i++){
        printf("%d ",i);
        c+=i;
      }
      printf("Sum=%d\n",c);
      c=0;
    }
    if(a<b){
    for(i=a;i<=b;i++){
        printf("%d ",i);
        c+=i;
      }
      printf("Sum=%d\n",c);
      c=0;
    }
    }
    return 0;
}
