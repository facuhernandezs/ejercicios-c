#include<stdio.h>
#include<conio.h>

void cargaDelvector(int vec[8])
{
    for(int x=0;x<8;x++)
    {
        printf("ingresar los elementos del vector: ");
        scanf("%i", &vec[x]);
    }

}
int sumar(int vector[8])
{
    int suma=0;
    for(int x=0;x<8;x++)
    {
        suma=suma+vector[x];
    }
    return suma;
}
int sumaMayor36(int vector[8])
{
    int suma=0;
    for(int x=0;x<8;x++)
    {
        if(vector[x]>36)
        {
            suma=suma+vector[x];
        }
    }
    return suma;

}
int sumaMayor50(int vector[8])
{
    int suma=0;
    for(int x=0;x<8;x++)
    {
        if(vector[x]>50)
        {
            suma++;
        }
    }
    return suma;
}

int main()
{
    int vector8[8];
    cargaDelvector(vector8);
    int suma=sumar(vector8);
    printf("total de la suma de los elementos del vector: %i\n", suma);
    int mayor36=sumaMayor36(vector8);
    printf("total de la suma de los elementos mayores a 36: %i\n", mayor36);
    int mayor50=sumaMayor50(vector8);
    printf("cantidad de los elementos mayores a 50: %i", mayor50);
    getch();
    return 0;

}

