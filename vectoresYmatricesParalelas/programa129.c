#include<conio.h>
#include<stdio.h>
#include<string.h>


void cargar(char paises[5][20], int habitantes[5])
{
    int c;
    for(int f=0;f<5;f++)
    {
        printf("ingresar pais: ");
        gets(paises[f]);
        printf("ingresar cantidad de habitantes: ");
        scanf("%i", &habitantes[f]);
        while ((c = getchar()) != '\n' && c != EOF);
    }
}

void ordenAlfabetico(char paises[5][20], int habitantes[5])
{
    char abc[20];
    int hab;
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if (strcmp(paises[f],paises[f+1])>0)
            {
               strcpy(abc, paises[f]);
               strcpy(paises[f], paises[f+1]);
               strcpy(paises[f+1], abc);
               hab=habitantes[f];
               habitantes[f]=habitantes[f+1];
               habitantes[f+1]=hab;
            }
        }
    }
}
void imprimir(char paises[5][20], int habitantes[5])
{
    //printf("paises ordenados alfabeticamente\n");
    for(int f=0;f<5;f++)
    {
        printf(" %s ", paises[f]);
        printf("%i\n", habitantes[f]);

    }
}
void ordenMayormenorHabitantes(char paises[5][20], int habitantes[5])
{
    char abc[20];
    int hab;
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if (habitantes[f+1]>habitantes[f])
            {
               hab=habitantes[f];
               habitantes[f]=habitantes[f+1];
               habitantes[f+1]=hab;
               strcpy(abc, paises[f]);
               strcpy(paises[f], paises[f+1]);
               strcpy(paises[f+1], abc);
            }
        }
    }
}



int main()
{
    char pais[5][20];
    int personas[5];
    cargar(pais, personas);
    ordenAlfabetico(pais, personas);
    printf("listado de paises ordenados alfabeticamente\n");
    imprimir(pais, personas);
    ordenMayormenorHabitantes(pais, personas);
    printf("listado de paises ordenados por cantidad de habitantes\n");
    imprimir(pais, personas);
    getch();
    return 0;
}
