#include<stdio.h>
#include<conio.h>

void valorCantidad(int c, float v)
{
    float total = c*v;
    printf("el total a pagar es: %0.2f", total);
}

int main()
{
    int cantHora;
    float valorHora;
    char opcion;
    do{
        printf("ingresar cantidad de horas: ");
        scanf("%i", &cantHora);
        printf("ingresar el valor por hora: ");
        scanf("%f", &valorHora);
        valorCantidad(cantHora, valorHora);
        printf("\nquiere ingresar mas datos de otro empleado?[s/n]");
        scanf(" %c", &opcion);


    }while(opcion=='s');

}


