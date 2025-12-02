#include<stdio.h>
#include<conio.h>

int main()
{
    int edad, edad2, f;
    char sexo1, sexo2;

    printf("ingresar edad de la primera persona: ");
    scanf("%i", &edad);

    printf("ingresar sexo de la primera persona[m/f] ");
    scanf(" %c", &sexo1);

    printf("ingresar edad de la segunda persona: ");
    scanf("%i", &edad2);

    printf("ingresar sexo de la segunda persona[m/f] ");
    scanf(" %c", &sexo2);

    if(edad>edad2)
    {
        printf("la edad es %i\n", edad);
        if(sexo1=='m')
        {
            printf("masculino");
        }
        else
        {
            printf("femenino");
        }

    }
    else
    {
        printf("la edad es %i\n", edad2);
        if(sexo2=='m')
        {
            printf("masculino");
        }
        else
        {
            printf("femenino");
        }
    }


}
