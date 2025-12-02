#include<stdio.h>
#include<conio.h>
#include<string.h>


void cargar(char personas[5][20])
{
    for(int f=0;f<5;f++)
    {
        printf("ingresar nombres: ");
        gets(personas[f]);
    }
}

void imprimir(char personas[5][20])
{
     for(int f=0;f<5;f++)
    {
        printf("%s\n", personas[f]);

    }
}

void menor(char personas[5][20])
{
    char men[20];
    strcpy(men, personas[0]);

    for(int f=1;f<5;f++)
    {
        if(strcmp(men, personas[f])>0)
        {
            strcpy(men, personas[f]);
        }
    }
    printf("el nombre alfabeticamente mas chico de la lista es %s", men);
}

int main()
{
    char nombres[5][20];
    cargar(nombres);
    imprimir(nombres);
    menor(nombres);
    getch();
    return 0;
}

