#include<stdio.h>
#include<conio.h>

void mayorDelosTres(int n1, int n2, int n3)
{
    if(num1>num2 && num1>num3)
    {
        printf("el mayor es %i", num1);
    }

    else
    {
        if(num2>num3)
        {
            printf("el mayor es %i", num2);
        }
        else
        {
            printf("el mayor es %i", num3);
        }
    }
}

int main()
{
    int num1, num2, num3;
    printf("ingresar el primer numero: ");
    scanf("%i", &num1);
    printf("ingresar el segundo numero: ");
    scanf("%i", &num2);
    printf("ingresar el tercer numero: ");
    scanf("%i", &num3);

    mayorDelosTres(num1, num2, num3);
    getch();
    return 0;
}
