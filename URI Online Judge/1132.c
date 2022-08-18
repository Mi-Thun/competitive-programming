#include<stdio.h>
int main()
{
    int a,b,c=0,i,j;
      scanf("%d %d",&a,&b);
      if(b<a){
      for(i=b;i<=a;i++){
        if(i%13!=0){
            c+=i;
        }
      }
      printf("%d\n",c);
    }
    if(a<b){
    for(i=a;i<=b;i++){
            if(i%13!=0){
               c+=i;
            }
      }
      printf("%d\n",c);
    }
    return 0;
}
