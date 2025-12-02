#include<stdio.h>
#include<conio.h>


#define TAMANO 3
#define FINPROGRAMA "gracias por utilizar nuestro programa"


void cargar(int sueldos[TAMANO])
{
    for(int f=0;f<TAMANO;f++)
    {
        printf("ingrese el sueldo: ");
        scanf("%i", &sueldos[f]);
    }
}

void imprimir(int sueldos[TAMANO])
{
    printf("listado de sueldos de empleados\n");
    for(int f=0;f<TAMANO;f++)
    {
        printf("%i\n", sueldos[f]);
    }

}





int main()
{
    int sueldos[TAMANO];
    cargar(sueldos);
    imprimir(sueldos);
    printf(FINPROGRAMA);
    getch();
    return 0;
}
