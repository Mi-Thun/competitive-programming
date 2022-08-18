#include<stdio.h>
 int main()
 {
     int a,b,c=0,i,d=0,e=0,f=0,g;
     for(i=1;i<100;i++){
        scanf("%d %d",&a,&b);
        scanf("%d",&g);
        printf("Novo grenal (1-sim 2-nao)\n");
        c++;
        if(a>b){
            d++;
            if(g!=1)
                break;
        }
        else if(a<b){
            e++;
             if(g!=1)
                break;
        }
        else if(a==b){
            f++;
             if(g!=1)
                break;
        }
     }
     printf("%d grenais\n",c);
     printf("Inter:%d\n",d);
     printf("Gremio:%d\n",e);
     printf("Empates:%d\n",f);
     if(d>e){
        printf("Inter venceu mais\n");
     }

     else{
        printf("Nao houve vencedor\n");

     }
      return 0;
 }
