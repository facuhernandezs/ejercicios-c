#include<stdio.h>
#include<conio.h>

int main()
{
    int x=1, y=1, suma1=0, suma2=0;

    while(x<=15)
    {
        int lista;
        printf("ingresar valores para lista 1: ");
        scanf("%i", &lista);

        suma1=suma1+lista;
        x=x+1;
    }
    while(y<=15)
    {
        int lista;
        printf("ingresar valores para lista 2: ");
        scanf("%i", &lista);

        suma2=suma2+lista;
        y=y+1;
    }
    if(suma1>suma2)
    {
        printf("lista 1 mayor");
    }
    else
    {
        if(suma2>suma1)
        {
            printf("lista 2 mayor");
        }
        else
        {
            printf("listas iguales");
        }
    }
    getch();
    return 0;
}
