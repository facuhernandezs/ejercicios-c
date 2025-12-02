#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char nombre1[15];
    char nombre2[15];
    printf("ingresar el primer nombre: ");
    gets(nombre1);
    printf("ingresar el segundo nombre: ");
    gets(nombre2);

    if(strcmp(nombre1, nombre2)== 0)
    {
        printf("los nombres son iguales");
    }
    else
    {
        if(strcmp(nombre1, nombre2)<0)
        {
            printf("%s\n%s", nombre1, nombre2);
        }
        else
            printf("%s\n%s", nombre2, nombre1);
    }
    getch();
    return 0;
}
