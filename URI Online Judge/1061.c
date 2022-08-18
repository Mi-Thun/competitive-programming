#include<stdio.h>

int main()
{
    int da1,h1,m1,s1,da2,h2,m2,s2,da3,h3,m3,s3;
    scanf("Dia %d", &da1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&da2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    s3=s2-s1;
    m3=m2-m1;
    h3=h2-h1;
    da3=da2-da1;
    if(s3<0){
        s3+=60;
        m3--;
    }
    if(m3<0){
        m3+=60;
        h3--;
    }
    if(h3<0){
        h3+=24;
        da3--;
    }
    printf("%d dia(s)\n",da3);
    printf("%d hora(s)\n",h3);
    printf("%d minuto(s)\n",m3);
    printf("%d segundo(s)\n",s3);
    return 0;

}
