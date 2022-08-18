#include<stdio.h>
int main()
{
    int a[100],b[100],i,j;
    for(i=0,j=0;i<400;i++,j++){
        scanf("%d %d",&a[i],&b[i]);
            if(a[i]>b[j]){
                printf("Decrescente\n");
            }
            if(a[i]<b[j]) {
                printf("Crescente\n");
            }
            if(a[i]==b[j])
                break;
    }
    return 0;
}
