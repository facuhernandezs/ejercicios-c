#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre1[25], nombre2[25], nombre3[25];

    printf("ingresar el primer nombre: ");
    gets(nombre1);
    printf("ingresar el segundo nombre: ");
    gets(nombre2);
    if(strlen(nombre1)> strlen(nombre2))
    {
        strcpy(nombre3, nombre1);
    }
    else
    {
        strcpy(nombre3, nombre2);
    }
    printf("el nombre mas largo es %s", nombre3);
    getch();
    return 0;

}
