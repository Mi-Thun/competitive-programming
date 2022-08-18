#include<stdio.h>
int main()
{
    int a[100],i,c,j=0;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(a[i]>j){
           j=a[i];
           c=i+1;
        }

    }
    printf("%d\n%d\n",j,c);
    return 0;
}
