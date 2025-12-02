#include<stdio.h>
#include<conio.h>

void funcionCuadrado()
{
    int valor, cuadrado;
    printf("ingresar un valor: ");
    scanf("%i", &valor);
    cuadrado = valor*valor;
    printf("el cuadrado del valor ingresado es %i\n", cuadrado);
}

void funcionMultiplicacion()
{
    int valor1, valor2, producto;
    printf("ingresar primer valor: ");
    scanf("%i", &valor1);
    printf("ingresar segundo valor: ");
    scanf("%i", &valor2);
    producto = valor1*valor2;
    printf("\nel producto de los valores ingresado es %i", producto);


}



int main()
{
    funcionCuadrado();
    funcionMultiplicacion();
    getch();
    return 0;
}
