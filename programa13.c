#include<stdio.h>
#include<conio.h>

int main()
{
    int nota1, nota2, nota3, promedio;
    printf("ingresar primer nota:");
    scanf("%i", &nota1);
    printf("ingresar segunda nota:");
    scanf("%i", &nota2);
    printf("ingresar tercer nota:");
    scanf("%i", &nota3);

    promedio = (nota1 + nota2+ nota3)/3;


    if(promedio >= 7)
    {
        printf("promociodado");
    }
    else
    {
        if(promedio>=4)
        {
            printf("regular");
        }
        else
        {
            printf("desaprobado");
        }
    }
    getch();
    return 0;
}
