#include<stdio.h>
#include<conio.h>

int main()
{
    int cantidad;
    float precio, total;
    printf("ingresar el precio del producto: ");
    scanf("%f", &precio);
    printf("ingresar la cantidad de productos: ");
    scanf("%i", &cantidad);
    total = precio * cantidad;
    printf("el total a pagar es: ");
    printf("%f", total);
    getch();
    return 0;



}
