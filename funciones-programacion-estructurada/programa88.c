#include<stdio.h>
#include<conio.h>

void tresnumeros()
{
    int valor1, valor2, valor3;

    printf("ingresar primer valor: ");
    scanf("%i", &valor1);
    printf("ingresar segundo valor: ");
    scanf("%i", &valor2);
    printf("ingresar tercer valor: ");
    scanf("%i", &valor3);

    if(valor1<valor2 && valor1<valor3)
    {
        printf("el numero mas chico de los 3 es %i\n", valor1);
    }
    else
    {
        if(valor2<valor3)
        {
            printf("el numero mas chico de los 3 es %i\n", valor2);
        }
        else
        {
            printf("el numero mas chico de los 3 es %i\n", valor3);
        }
    }
}

int main()
{
    tresnumeros();
    tresnumeros();
    tresnumeros();
    getch();
    return 0;
}
