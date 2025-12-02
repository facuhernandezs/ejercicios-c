#include<stdio.h>
#include<conio.h>

void imprimirMayor(int v1, int v2)

{
    if(v1>v2)
    {
        printf("el mayor es %i", v1);

    }
    else
    {
        printf("el mayor es %i", v2);
    }
}

int main()
{
    int valor1, valor2;

    printf("ingresar primer valor: ");
    scanf("%i", &valor1);
    printf("ingresar segundo valor: ");
    scanf("%i", &valor2);
    imprimirMayor(valor1, valor2);
    getch();
    return 0;
}

