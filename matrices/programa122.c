#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char personas[5][20])
{
    for(int f=0;f<5;f++)
    {
        printf("ingresar nombres de las personas: ");
        gets(personas[f]);
    }
}

void impresion(char personas[5][20])
{
    printf("nombres que contiene la matriz\n");
    for(int f=0;f<5;f++)
    {
        printf("%s\n", personas[f]);
    }
}
/*void agregar(char personas[6][20])
{
    printf("ingresar otro nombre: ");
    gets(personas[5]);
    }*/
void consultaPornombre(char personas[5][20])
{
    char nombre[41];
    int existe=0;
    printf("ingrese un nombre a buscar: ");
    gets(nombre);
    for(int f=0;f<5;f++)
    {
        if(strcmp(nombre,personas[f])==0)
        {
            existe=1;
        }
    }
    if(existe==1)
    {
        printf("el nombre ingresado existe en la matriz\n");
    }
    else
    {
        printf("el nombre ingresado no existe en la matriz\n");
    }

}

int main()
{
    char matriz[5][20];
    cargar(matriz);
    impresion(matriz);
    //agregar(matriz);
    //impresion(matriz);
    consultaPornombre(matriz);
    impresion(matriz);
}
