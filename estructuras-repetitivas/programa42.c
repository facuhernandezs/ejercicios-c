#include<stdio.h>
#include<conio.h>

int main()
{
    int n, suma=0, valor, f;

    printf("ingresar la cantidad de numeros enteros: ");
    scanf("%i", &n);

    for(f=1; f<=n; f++)
    {
        printf("ingresar un valor: ");
        scanf("%i", &valor);

        if(valor>=1000)
        {
            suma++;
        }
    }
    printf("cantidad de valores mayores a 1000: ");
    printf("%i", suma);

    getch();
    return 0;
}
