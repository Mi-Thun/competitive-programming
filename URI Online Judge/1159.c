#include<stdio.h>
int main()
{
   int a,b,c=0,j,i,d;
   for(i=1;;i++){
      scanf("%d",&a);
      if(a==0){
        break;
      }
      if(a%2!=0){
      a++;
      }
      else{
        a=a;
      }
      for(j=1;j<=5;j++){
        c=c+a;
        a+=2;
      }
      printf("%d\n",c);
      c=0;
   }
}
