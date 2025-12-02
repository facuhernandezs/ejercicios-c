#include<stdio.h>
#include<conio.h>

int main()
{
    int n, x=1;
    float promedio, suma=0.0;
    printf("ingresar numero de personas: ");
    scanf("%i", &n);

    while(x<=n)
    {
        float altura;
        printf("ingresar altura: ");
        scanf("%f", &altura);
        suma=suma + altura;
        x=x+1;
    }
    promedio = suma/n;
    printf("el promedio de altura es: ");
    printf("%f", promedio);
    getch();
    return 0;
}
