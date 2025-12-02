#include<stdio.h>
#include<conio.h>

int main()
{
    int suma=0, x=1, n, alto=0, bajo=0, sueldo;

    printf("ingresar cantidad de empleados: ");
    scanf("%i", &n);

    while(x<=n)
    {
        printf("ingresar el sueldo: ");
        scanf("%i", &sueldo);
        if(sueldo>=300)
        {
            alto=alto + 1;
        }
        else
        {
            bajo=bajo+1;
        }
        suma = sueldo + suma;
        x=x+1;
    }
    printf("la cantidad de sueldos altos es: ");
    printf("%i", alto);
    printf("\n");
    printf("la cantidad de sueldos bajos es: ");
    printf("%i", bajo);
    printf("\n");
    printf("el total de gastos en personal es: ");
    printf("%i", suma);
}
