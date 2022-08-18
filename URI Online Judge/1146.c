#include<stdio.h>
int main()
{
    int n,i,a,j;
    for(i=1;n!=0;i++){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        else{
            for(j=1;j<=n;j++){
                    if(j<n){
                printf("%d ",j);
                    }
                    else{
                        printf("%d\n",j);
                    }
            }
        }
    }
    return 0;
}
