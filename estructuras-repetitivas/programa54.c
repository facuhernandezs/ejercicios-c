#include<stdio.h>
#include<conio.h>

int main()
{
    int suma=0, valor;

    do{
        printf("ingresar un valor: ");
        scanf("%i", &valor);
        if(valor!=9999)
        {
            suma=suma+valor;
        }


    }while(valor!=9999);
    //suma=suma-9999;
    printf("%i", suma);
    printf("\n");
    if(suma>0)
    {
        printf("el valor acumulado es positivo");
    }
    else
    {
        if(suma<0)
        {
            printf("el valor acumulado es negativo");
        }
        else
        {
            printf("el valor acumulado es 0");
        }
    }
    getch();
    return 0;
}
