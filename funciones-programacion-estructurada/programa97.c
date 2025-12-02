#include<stdio.h>
#include<conio.h>

int retornarSuperficie(int lado)
{
    int superficie = lado*lado;
    return superficie;
}
int main()
{
    int valor, sup;
    printf("inrgese el valor del lado del cuadrado: ");
    scanf("%i", &valor);
    sup=retornarSuperficie(valor);
    printf("la superficie del cuadrado es: %i", sup);
    getch();
    return 0;
}
