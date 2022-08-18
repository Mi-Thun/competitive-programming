#include<stdio.h>
int main()
{
    int a[400000],b,i,j;
    for(i=0;i<400000;i++){
        scanf("%d",&a[i]);
            if(a[i]==2002){
                printf("Acesso Permitido\n");
                break;
            }
            else {
                printf("Senha Invalida\n");
            }
    }
    return 0;
}
