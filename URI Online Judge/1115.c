#include<stdio.h>
int main()
{
    int a[100],b[100],i,j;
    for(i=0,j=0;i<400;i++,j++){
        scanf("%d %d",&a[i],&b[j]);
            if(a[i]>0&&b[j]>0){
                printf("primeiro\n");
            }
            else if(a[i]<0&&b[j]>0) {
                printf("segundo\n");
            }
            else if(a[i]<0&&b[j]<0){
                printf("terceiro\n");
            }
            else if(a[i]>0&&b[j]<0){
                printf("quarto\n");
            }
            else if(a[i]==b[j]){
                break;
            }
    }
    return 0;
}
