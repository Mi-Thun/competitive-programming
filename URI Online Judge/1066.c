#include <stdio.h>
int main()
{
    int a,i,count=0,p=0,q=0,s=0;
    for(i=0;i<5;i++){
      scanf("%d",&a);
        if(a%2==0||a%2==-0){
          count++;
        }
        if(a>0){
            p++;
        }
        if(a<0){
            q++;
        }
        if(a%2!=0||a%2!=-0){
            s++;
        }

    }
    printf("%d valor(es) par(es)\n",count);
    printf("%d valor(es) impar(es)\n",s);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",q);
   return 0;
}
