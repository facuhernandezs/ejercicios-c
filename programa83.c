#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre1[15];
    char nombre2[15];

    printf("ingresar primer nombre: ");
    gets(nombre1);
    printf("ingresar segundo nombre: ");
    gets(nombre2);

    if(strlen(nombre1)>strlen(nombre2))
    {
        printf("el nombre %s es mas largo que el nombre %s", nombre1, nombre2);

    }
    else
    {
        printf("el nombre %s es mas largo que el nombre %s", nombre2, nombre1);
    }
    getch();
    return 0;
}
