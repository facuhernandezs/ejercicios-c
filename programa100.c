#include<stdio.h>
#include<conio.h>

int retornarPerimetro(int n)
{
    return n*4;
}

int main()
{
    int lado;
    printf("ingrese el valor del lado del cuadrado: ");
    scanf("%i", &lado);
    printf("el valor del perimetro es: %i", perimetro(lado));
    getch();
    return 0;
}



