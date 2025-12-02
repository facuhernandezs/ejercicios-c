#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, suma, producto;
    printf("ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("ingrese el segundo valor: ");
    scanf("%i", &num2);
    suma = num1 + num2;
    producto = num1 * num2;
    printf("suma de los 2 valores: ");
    printf("%i", suma);
    printf("\n");
    printf("producto de los 2 valores: ");
    printf("%i", producto);
    getch();
    return 0;


}
