#include<stdio.h>
#include<conio.h>



void cargar(char nombre[5][41], int edades[5])
{
    for(int f=0;f<5;f++)
    {
        printf("ingrese el nombre: ");
        gets(nombre[f]);
        printf("ingrese la edad: ");
        scanf("%i", &edades[f]);
        fflush(stdin);
    }
}

void mayorEdad(char nombres[5][41], int edades[5])
{
    printf("personas mayores de edad");
    for(int f=0;f<5;f++)
    {
        if(edades<=18)
        {
            printf("%s\n", nombres[f]);
        }
    }
}



int main()
{
    char nombres[5][41];
    int edades[5];
    cargar(nombres, edades);
    mayorEdad(nombres, edades);
    getch();
    return 0;

}
