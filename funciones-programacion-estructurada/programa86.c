#include<stdio.h>
#include<conio.h>

void cargarSumar()
{
    int valor1, valor2, suma;
    printf("ingresar el primer valor: ");
    scanf("%i", &valor1);
    printf("ingresar el segundo valor: ");
    scanf("%i", &valor2);
    suma=valor1 + valor2;
    printf("la suma de %i y %i es %i\n", valor1, valor2, suma);
}

void separacion()
{
    printf("________________________________\n");


}
int main()
{
    cargarSumar();
    separacion();
    cargarSumar();
    separacion();
    getch();
    return 0;

}
