#include<stdio.h>
int main()
{
    int Num;
    scanf("%d",&Num);
    int A[Num],i,j;
    for(i=0;i<Num;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<Num;i++){
        if(A[i]>0&&A[i]%2==0){
            printf("EVEN POSITIVE\n");
        }
        if(A[i]==0){
            printf("NULL\n");
        }
        if(A[i]>0&&A[i]%2!=0){
            printf("ODD POSITIVE\n");
        }
        if(A[i]<0&&A[i]%2==-0){
            printf("EVEN NEGATIVE\n");
        }
        if(A[i]<0&&A[i]%2!=-0){
            printf("ODD NEGATIVE\n");
       }
    }
}
