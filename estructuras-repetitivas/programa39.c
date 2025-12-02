#include<stdio.h>
#include<conio.h>

int main()
{
    int suma=0, f, promedio;

    for(f=1; f<=10; f=f+1)
    {
        int valor;
        printf("ingresar un numero: ");
        scanf("%i", &valor);

        suma=suma+valor;
    }
    promedio = suma/10;
    printf("la suma de los valores es: ");
    printf("%i", suma);
    printf("\n");
    printf("y su promedio es: ");
    printf("%i", promedio);
    getch();
    return 0;
}
