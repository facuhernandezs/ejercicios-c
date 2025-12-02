#include<stdio.h>
#include<conio.h>

int main()
{
    int sueldos[5];
    int f;

    for(f=0;f<5;f++)
    {
        printf("ingrese el valor del sueldo: ");
        scanf("%i", &sueldos[f]);
    }
    printf("listado de sueldos\n");
    // impresion del vector

    for(f=0;f<5;f++)
    {
        printf("%i", sueldos[f]);
        printf("\n");

    }
    getch();
    return 0;
}
