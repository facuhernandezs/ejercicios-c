#include<stdio.h>
#include<conio.h>

void cargar(int vector5[5])
{
    for(int x=0;x<5;x++)
    {
        printf("ingresar elementos del vector: ");
        scanf("%i", &vector5[x]);
    }
}

void menor(int vector5[5])
{
    int men=vector5[0];
    int rep=1;
    for(int x=1;x<5;x++)
    {
        if(men>vector5[x])
        {
            men=vector5[x];
        }
        else
        {
            if(men==vector5[x])
            {
                rep++;
            }
        }
    }
    printf("el menor elemento del vector es: %i\n", men);
    printf("la cantidad de veces que aparece dentro del vector es: %i", rep);
}
int main()
{
    int vector[5];
    cargar(vector);
    menor(vector);
}
