#include<stdio.h>
int main()
{
    float a,b,c,d,i;
    for(i=0;i<10;i++){
      scanf("%f",&a);
      if(a<0||a>10){
          printf("nota invalida\n");
      }
      else{
          c=a;
          break;
    }
  }
    for(i=0;i<10;i++){
        scanf("%f",&b);
        if(b<0||b>10){
        printf("nota invalida\n");
    }
    else{
         d=b;
         break;
         }
    }
    printf("media = %.2f\n",(c+d)/2);
    return 0;
}
