#include<stdio.h>
#include<conio.h>

void cargar(int sueldos[5])
{
    for(int x=0;x<5;x++)
    {
        printf("ingresar sueldos: ");
        scanf("%i", &sueldos[x]);
    }
}

void ordenar(int sueldos[5])
{
    for(int k=0;k<4;k++)
    {
        for(int x=0;x<4;x++)
        {
            if(sueldos[x]>sueldos[x+1])
            {
                int aux=sueldos[x];
                sueldos[x]=sueldos[x+1];
                sueldos[x+1]=aux;
            }
        }
    }
}
void imprimir(int sueldos[5])
{
    for(int x=0;x<5;x++)
    {
        printf("%i\n", sueldos[x]);
    }
}

int main()
{
    int sueldos[5];
    cargar(sueldos);
    ordenar(sueldos);
    imprimir(sueldos);
}
