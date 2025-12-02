#include<stdio.h>
#include<conio.h>

void cargar(float sueldo[4])
{
    for(int x=0;x<4;x++)
    {
        printf("ingresar sueldo: ");
        scanf("%f", &sueldo[x]);
    }

}

float gastos(float sueldos[4])
{
    float suma=0;
    for(int x=0;x<4;x++)
    {
        suma = suma + sueldos[x];
    }
    return suma;
}

int main()
{
    float turnoman[4];
    float turnotar[4];
    printf("cargar sueldos del turno mañana\n");
    cargar(turnoman);
    printf("cargar sueldos del turno tarde\n");
    cargar(turnotar);
    float gastosman=gastos(turnoman);
    float gastostar=gastos(turnotar);
    printf("los gastos por sueldo del turno mañana es: %0.2f\n", gastosman);
    printf("los gastos por sueldo del turno tarde es: %0.2f\n", gastostar);
    getch();
    return 0;

}


