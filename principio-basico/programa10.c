#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, suma, diferencia, producto, division;

    printf("ingrese el primer numero:");
    scanf("%i", &num1);
    printf("ingrese el segundo numero:");
    scanf("%i", &num2);
    suma = num1 + num2;
    diferencia = num1 - num2;
    producto = num1 * num2;
    division = num1 / num2;
    if(num1>num2)
    {
        printf("la suma de de los 2 valores es: ");
        printf("%i", suma);
        printf("\n");
        printf("la diferencia de los 2 valores es: ");
        printf("%i", diferencia);
    }
    else
    {
        printf("el producto de los 2 valores es: ")
        printf("%i", producto);
        printf("\n");
        printf("la division de los 2 valores es: ")
        printf("%i", division);
    }
    getch();
    return 0;
}
