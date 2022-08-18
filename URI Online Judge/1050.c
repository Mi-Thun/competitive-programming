#include <stdio.h>
#include<string.h>
int main()
{
    char a[2];
    scanf("%s",&a);

    if(a[0]=='6'&&a[1]=='1'){
        printf("Brasilia\n");
    }
    else if(a[0]=='7'&&a[1]=='1'){
        printf("Salvador\n");
    }
    else if(a[0]=='1'&&a[1]=='1'){
        printf("Sao Paulo\n");
    }
     else if(a[0]=='2'&&a[1]=='1'){
        printf("Rio de Janeiro\n");
    }
     else if(a[0]=='3'&&a[1]=='2'){
        printf("Juiz de Fora\n");
    }
     else if(a[0]=='1'&&a[1]=='9'){
        printf("Campinas\n");
    }
     else if(a[0]=='2'&&a[1]=='7'){
        printf("Vitoria\n");
    }
     else if(a[0]=='3'&&a[1]=='1'){
        printf("Belo Horizonte\n");
    }
    else{
        printf("DDD nao cadastrado\n");
    }
    return 0;
}
