#include<stdio.h>
#include<conio.h>

int main()
{
    float num1, num2, num3, num4, suma;
    float promedio;
    printf("ingresar el primer valor: ");
    scanf("%f", &num1);
    printf("ingresar el segundo valor: ");
    scanf("%f", &num2);
    printf("ingresar el tercer valor: ");
    scanf("%f", &num3);
    printf("ingresar el cuarto valor: ");
    scanf("%f", &num4);
    suma = num1 + num2 + num3+ num4;
    promedio = suma/4;
    printf("el total de la suma es: ");
    printf("%f", suma);
    printf("\n");
    printf("el total del promedio es: ");
    printf("%f", promedio);
    getchar();
    return 0;


}
