#include<stdio.h>
#include<conio.h>

int main()
{
    int f, positivos=0, negativos=0, par=0, mult15=0, valor;

    for(f=1;f<=10;f++)
    {
        printf("ingresar los 10 valores: ");
        scanf("%i", &valor);

        if(valor<0)
        {
            negativos++;
        }
        else
        {
            positivos++;
        }
        if(valor%15==0)
        {
            mult15++;
        }
        if(valor%2==0)
        {
            par++;
        }
    }
    printf("la cantidad de valores negativos es: ");
    printf("%i", negativos);
    printf("\n");
    printf("la cantidad de valores positivos es: ");
    printf("%i", positivos);
    printf("\n");
    printf("la cantidad de valores par es: ");
    printf("%i", par);
    printf("\n");
    printf("la cantidad de valores multiplos de 15 es: ");
    printf("%i", mult15);
    printf("\n");

    getch();
    return 0;
}
