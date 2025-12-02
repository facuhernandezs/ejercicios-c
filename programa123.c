#include<conio.h>
#include<stdio.h>
#include<string.h>

void cargar(char nombres[5][20])
{
    for(int f=0;f<5;f++)
    {
        printf("ingresar nombre: ");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][20])
{
    for(int f=0;f<5;f++)
    {
        printf("%s\n", nombres[f]);
    }
}

void ordenar(char nombres[5][20])
{
    char aux[20];
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if(strcmp(nombres[f], nombres[f+1])>0)
            {
                strcpy(aux, nombres[f]);
                strcpy(nombres[f], nombres[f+1]);
                strcpy(nombres[f+1], aux);
            }
        }
    }
}

int main()
{
    char names[5][20];
    cargar(names);
    imprimir(names);
    ordenar(names);
    printf("la misma lista pero ordenada alfabeticamente\n");
    imprimir(names);
    getch();
    return 0;
}
