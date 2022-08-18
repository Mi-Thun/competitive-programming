#include<stdio.h>
int main()
{
   int a,b,c=0,j,i,d;
   scanf("%d",&d);
   for(i=1;i<=d;i++){
      scanf("%d %d",&a,&b);
      if(a%2==0){
      a++;
      }
      for(j=1;j<=b;j++){
        c=c+a;
        a+=2;
      }
      printf("%d\n",c);
      c=0;
   }
}
