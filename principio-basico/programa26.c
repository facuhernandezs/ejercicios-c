#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, num3;

    printf("Ingresar el primer valor: ");
    scanf("%i", &num1);
    printf("Ingresar el segundo valor: ");
    scanf("%i", &num2);
    printf("Ingresar el tercer valor: ");
    scanf("%i", &num3);

    printf("\nLa variacion es entre: ");

    if(num1<num2 && num1<num3)
    {
        printf("%i", num1);
    }
    else
    {
        if(num2<num3)
        {
            printf("%i", num2);
        }
        else
        {
            printf("%i", num3);
        }
    }
    printf("-");

    if(num1>num2 && num1>num2)
    {
        printf("%i", num1);
    }
    else
    {
        if(num2>num3)
        {
            printf("%i", num2);

        }
        else
            printf("%i", num3);
    }
    getch();
    return 0;
}

