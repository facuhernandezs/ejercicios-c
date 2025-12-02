#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;
    printf("ingresar primer numero: ");
    scanf("%i", &num1);
    printf("ingresar segundo numero: ");
    scanf("%i", &num2);
    printf("ingresar tercer numero: ");
    scanf("%i", &num3);

    if(num1 == num2 && num2 == num3)
    {
        int operacion;
        operacion = (num1 + num2) * num3;
        printf("%i", operacion);
    }
    getch();
    return 0;
}
