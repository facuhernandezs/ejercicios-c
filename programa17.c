#include<stdio.h>
#include<conio.h>

int main()
{
    float prc, preguntas, rc;
    printf("ingrese el numero de preguntas: ");
    scanf("%f", &preguntas);
    printf("ingrese el numero de respuestas correctas: ");
    scanf("%f", &rc);
    prc = (rc/preguntas) * 100;
    printf("%f", prc);
    printf("\n");

    if(prc>=90)
    {
        printf("maximo nivel");
    }
    else
    {
        if(prc>=75)
        {
            printf("nivel medio");
        }
        else
        {
            if(prc>=50)
            {
                printf("nivel regular");
            }
            else
            {
                printf("fuera de nivel");
            }
        }
    }
    getch();
    return 0;

}
