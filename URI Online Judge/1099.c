#include<stdio.h>
int main()
{
    int a,b,c=0,i,n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
            c=0;
      scanf("%d %d",&a,&b);
        if(a<b){
            a++;
          for(i=a;i<b;i++){
            if(i%2!=0)
              c+=i;
        }
         printf("%d\n",c);
      }
      else{
        b++;
        for(i=b;i<a;i++){
            if(i%2!=0)
                c+=i;
        }
         printf("%d\n",c);
    }
    }
    return 0;
}
