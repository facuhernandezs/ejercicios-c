#include<stdio.h>
#include<conio.h>

int main()
{
    int x=1, suma=0, promedio;

    while(x <= 10)
    {
        int valor;
        printf("ingresar un valor numerico: ");
        scanf("%i", &valor);
        suma = suma + valor;
        x=x+1;
    }
    printf("la suma es: ");
    printf("%i", suma);
    printf("\n");
    promedio = suma/10;
    printf("el promedio es: ");
    printf("%i", promedio);

}
