#include<stdio.h>
#include<conio.h>

int main()
{
    int f, sueldo;
    float maniana[4], tarde[4], suma1=0, suma2=0;

    for(f=0;f<4;f++)
    {

        printf("ingresar sueldos de empleados turno mañana: ");
        scanf("%f", &maniana[f]);
        suma1=suma1+maniana[f];
    }
    for(f=0;f<4;f++)
    {

        printf("ingresar sueldos de empleados turno tarde: ");
        scanf("%f", &tarde[f]);
        suma2=suma2+tarde[f];
    }
    printf("lista sueldos turno mañana:\n");
    for(f=0;f<4;f++)
    {
        printf("%0.2f", maniana[f]);
        printf("\n");
    }
    printf("gastos totales: \n");
    printf("%0.2f", suma1);
    printf("\n");
    printf("lista sueldos turno tarde:\n");
    for(f=0;f<4;f++)
    {
        printf("%0.2f", tarde[f]);
        printf("\n");
    }
        printf("gastos totales: \n");
        printf("%0.2f", suma1);
}
