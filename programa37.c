#include<stdio.h>
#include<conio.h>

int main()
{
    int par, impar, n, x, valor;

    par=0;
    impar=0;
    x=1;

    printf("ingresar cantidad de numeros: ");
    scanf("%i", &n);

    while(x<=n)
    {
        printf("ingresar el numero: ");
        scanf("%i", &valor);

        if(valor%2==0)
        {
            par = par+1;
        }
        else
        {
            impar = impar+1;
        }
        x=x+1;
    }
    printf("cantidad de numeros pares: ");
    printf("%i", par);
    printf("\n");
    printf("cantidad de numeros impares: ");
    printf("%i", impar);

    getch();
    return 0;

}
