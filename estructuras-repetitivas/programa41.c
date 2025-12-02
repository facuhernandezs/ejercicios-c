#include<stdio.h>
#include<conio.h>

int main()
{
    int mult5, mult3, f, suma, valor;
    mult5=0;
    mult3=0;
    suma=0;

    for(f=1; f<=10; f++)
    {
        printf("ingrese un valor: ");
        scanf("%i", &valor);

        if(valor%3==0)
        {
            mult3++;
        }
        if(valor%5==0)
        {
            mult5++;
        }
    }
    printf("cantidad de multiplos de 3: ");
    printf("%i", mult3);
    printf("\n");
    printf("cantidad de multiplos de 5: ");
    printf("%i", mult5);
}
