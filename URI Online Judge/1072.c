#include <stdio.h>
int main ()
{
    int a[10000],i,p=0,q=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if (a[i]>=10&&a[i]<=20){
                p++;
        }
        else {
                q++;
        }
    }
    printf("%d in\n",p);
    printf("%d out\n",q);
    return 0;
}
