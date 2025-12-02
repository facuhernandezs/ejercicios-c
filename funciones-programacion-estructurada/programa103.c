#include<stdio.h>
#include<conio.h>

void cargarSueldo(float sueldo[6])
{
    for(int x=0;x<6;x++)
    {
        printf("ingresar los 6 sueldos: ");
        scanf("%f", &sueldo[x]);
    }
}

void imprimirSueldo(float sueldout[6])
{
    printf("sueldos:\n");
    for(int x=0;x<6;x++)
    {
        printf("%0.2f\n", sueldout[x]);
    }
}
void gastoTotalenSueldos(float total[6])
{
    float suma=0;
    for(int x=0;x<6;x++)
    {
        suma = suma + total[x];
    }
    printf("el total de gastos por sueldos es: %0.2f", suma);
}

int main()
{
    float sueldou[6];
    cargarSueldo(sueldou);
    imprimirSueldo(sueldou);
    gastoTotalenSueldos(sueldou);
    getch();
    return 0;
}
