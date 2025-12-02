#include<stdio.h>
#include<conio.h>

int main()
{
    int f, promediomaniana, promediotarde, promedionoche, edad, suma;
    suma=0;
    for(f=1;f<=5;f++)
    {
        printf("ingresar edad del alumno turno mañana: ");
        scanf("%i", &edad);
        suma=suma+edad;
    }
        promediomaniana = suma/5;

    for(f=1;f<=6;f++)
    {
        printf("ingresar edad del alumno turno tarde: ");
        scanf("%i", &edad);
        suma=suma+edad;
    }
        promediotarde = suma/6;

    for(f=1;f<=11;f++)
    {
        printf("ingresar edad del alumno turno noche: ");
        scanf("%i", &edad);
        suma=suma+edad;
    }
        promedionoche = suma/11;
    printf("\n");
    printf("el promedio de edades de los alumnos turno mañana es: ");
    printf("%i", promediomaniana);
    printf("\n");
    printf("el promedio de edades de los alumnos turno tarde es: ");
    printf("%i", promediotarde);
    printf("\n");
    printf("el promedio de edades de los alumnos turno noche es: ");
    printf("%i", promedionoche);
    printf("\n");
    if(promediomaniana<promedionoche && promediomaniana<promediotarde)
    {
        printf("el menor promedio de edades corresponde al turno mañana");
    }
    else
    {
        if(promediotarde<promedionoche)
        {
            printf("el menor promedio de edades corresponde al turno tarde");
        }
        else
        {
            printf("el menor promedio de edades corresponde al turno tarde");
        }
    }
    getch();
    return 0;


}

