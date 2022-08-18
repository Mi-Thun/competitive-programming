#include<stdio.h>

int main()
{
    float A,B,C,D,E;
    double a1,a2;

    scanf("%f %f %f %f",&A,&B,&C,&D);

    a1=((A*2)+(B*3)+(C*4)+D)/10;

    printf("Media: %.1lf\n",a1);

    if(a1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(a1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");

        scanf("%f",&E);

        printf("Nota do exame: %.1lf\n",E);

        a2=(a1+E)/2;

        if(a2>=5.0)
        {
             printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno repovado.\n");
        }
            printf("Media final: %.1lf\n",a2);
    }
    return 0;
}
