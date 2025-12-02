#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;
    printf("ingresar el primer numero: ");
    scanf("%i", &num1);
    printf("ingresar el segundo numero: ");
    scanf("%i", &num2);
    printf("ingresar el tercer numero: ");
    scanf("%i", &num3);

    if(num1<10 || num2<10 || num3<10)
    {
        printf("al menos un numero es menor a 10");
    }
    getch();
    return 0;
}
