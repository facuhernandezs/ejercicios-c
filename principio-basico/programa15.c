#include<stdio.h>
#include<conio.h>

int main()
{
    int num;

    printf("ingresar un numero: ");
    scanf("%i", &num);

    if(num == 0)
    {
        printf("El numero es nulo");
    }
    else
    {
        if(num>0)
        {
            printf("El numero es positivo");
        }
        else
        {
            printf("El numero es negativo");
        }
    }
    getch();
    return 0;
}
