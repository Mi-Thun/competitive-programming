#include<stdio.h>
int main()
{
    float n,c,a,b,i,j,s;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        scanf("%f %f",&a,&b);
        if(b==0){
             printf("divisao impossivel\n");
        }
        else{
                s=a/b;
            printf("%.1f\n",s);
        }
    }
    return 0;
}
