#include<stdio.h>
#include<conio.h>

int main()

{
    int num1, num2, num3, num4, suma, producto;
    printf("ingresar el primer numero:");
    scanf("%i", &num1);
    printf("ingresar el segundo numero:");
    scanf("%i", &num2);
    printf("ingresar el tercer numero:");
    scanf("%i", &num3);
    printf("ingresar el cuarto numero:");
    scanf("%i", &num4);
    suma = num1 + num2;
    producto = num3 * num4;
    printf("la suma de los 2 primeros numeros es: ");
    printf("%i", suma);
    printf("\n");
    printf("el producto de los ultimos 2 numeros es: ");
    printf("%i", producto);
    getchar();




}
