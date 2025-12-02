#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("ingresar un numero positivo:");
    scanf("%i", &num);
    if(num >= 10)
    {
        printf("tiene 2 digitos ");

    }
    else
    {
        printf("tiene 1 digito");
    }
    getch();
    return (0);
}
