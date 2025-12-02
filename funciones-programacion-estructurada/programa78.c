#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char palabra[21];
    printf("ingrese una palabra: ");
    gets(palabra);
    int cant = strlen(palabra);

    printf("la palabra %s tiene %i letras", palabra, cant);
}
