#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()

{
    char nombre1[31];
    char nombre2[32];

    printf("ingresa el primer nombre: ");
    gets(nombre1);
    printf("ingresa el segundo nombre: ");
    gets(nombre2);
    if(strcmp(nombre1, nombre2)==0)
    {
        printf("los 2 nombres son iguales");
    }
    else
    {
        if(strcmp(nombre1, nombre2)>0)
        {
            printf("%s es mayor alfabeticamente que %s", nombre1, nombre2);
        }
        else
        {
            printf("%s es mayor alfabeticamente que %s", nombre2, nombre1);
        }
    }
    getch();
    return 0;

}
