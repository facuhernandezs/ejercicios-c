#include<stdio.h>
#include<conio.h>

void cargar(char productos[5][30], int precios[5])
{
    for(int f=0;f<5;f++)
    {
        printf("ingresar productos: ");
        gets(productos[f]);
        printf("ingresar el precio del producto: ");
        scanf("%i", &precios[f]);
    }
}
void mayor(char productos[5][30], int precios[5])
{
    int mayor=precios[0];
    int cont=0;
    for(int f=0;f<5;f++)
    {
        if(mayor<precios[f])
        {
            cont++;
        }
    }
    printf("el primero productos es: %s con un precio de %i y hay %i productos con un precio mayor\n", productos[0], precios[0], cont);
}
void imprimir(char productos[5][30], int precios[5])
{
     for(int f=0;f<5;f++)
    {
        printf(" %s", productos[f]);
        printf("%i\n", precios[f]);
    }
}


int main()
{
    char products[5][30];
    int value[5];
    cargar(products, value);
    mayor(products, value);
    imprimir(products, value);
    getch();
    return 0;
}

