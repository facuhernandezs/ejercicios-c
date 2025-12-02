#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre[15];
    char contrasenia[7];
    int x=0;
    char contra[7];

    printf("ingresar nombre: ");
    gets(nombre);
    printf("ingresar contrasenia: ");
    gets(contrasenia);



    if(strcmp(contrasenia,"abc123")==0)
    {
        printf("correcto");
    }
    else
    {
        printf("contraseña incorrecta");
    }
    getch();
    return 0;
}
