#include<stdio.h>
int main()
{
    int n,i,j=0,a,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
       scanf("%d",&a);
         for(i=2;i<a;i++){
            if(a%i==0){
               j++;
            }
         }
         if(j==0){
            printf("%d eh primo\n",a);
            j=0;
        }
        else if(j!=0){
        printf("%d nao eh primo\n",a);
        j=0;
       }
    }
}
