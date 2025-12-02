#include<stdio.h>
#include<conio.h>

void cargar(int vector[5])
{
    printf("carga de un vector\n");
    for(int x=0;x<5;x++)
    {
        printf("ingresar elementos del vector: ");
        scanf("%i", &vector[x]);
    }
}
void sumaDevectores(int vector1[5], int vector2[5], int vector3[5])
{
    for(int x=0;x<5;x++)
    {
        vector3[x]=vector1[x]+vector2[x];
    }

}

void imprimir(int vectorsuma[5])
{
    printf("impresion del vector\n");
    for(int x=0;x<5;x++)
    {
        printf("%i ", vectorsuma[x]);
    }
    printf("\n");

}

int main()
{
    int vector1[5], vector2[5], vector3[5];
    cargar(vector1);
    cargar(vector2);
    sumaDevectores(vector1, vector2, vector3);
    imprimir(vector1);
    imprimir(vector2);
    imprimir(vector3);
    getch();
    return 0;
}
