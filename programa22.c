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

    if(num1<10 && num2<10 && num3<10)
    {
        printf("todos los numeros son menores a 10");
    }
    getch();
    return 0;
}
