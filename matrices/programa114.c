#include<stdio.h>
#include<conio.h>

void cargar(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("ingresar elementos del vector: ");
        scanf("%i", &vector[x]);
    }
}


void mayorMenor(int vector[5])
{
    for(int k=0;k<4;k++)
    {
        for(int x=0;x<4;x++)
        {
            if(vector[x]<vector[x+1])
            {
                int aux=vector[x];
                vector[x]=vector[x+1];
                vector[x+1]=aux;
            }
        }
    }
}
void imprimir(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("%i\n", vector[x]);
    }
}
void menorMayor(int vector[5])
{
    for(int k=0;k<4;k++)
    {
        for(int x=0;x<4-k;x++)
        {
            if(vector[x]>vector[x+1])
            {
                int aux=vector[x];
                vector[x]=vector[x+1];
                vector[x+1]=aux;
            }
        }
    }
}


int main()
{
    int vector[5];
    cargar(vector);
    mayorMenor(vector);
    printf("el vector ordenado de mayor a menor\n");
    imprimir(vector);
    menorMayor(vector);
    printf("el vector ordenado de menor a mayor\n");
    imprimir(vector);
    getch();
    return 0;

}
