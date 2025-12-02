#include<stdio.h>
#include<conio.h>

int main()
{
    int lado, perimetro;
    printf("Ingrese el valor del lado:");
    scanf("%i", &lado);
    perimetro = lado * 4;
    printf("el valor del perimetro es:");
    printf("%i", perimetro);
    getch();
    return 0;
}
