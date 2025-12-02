#include<stdio.h>
#include<conio.h>

int main()
{
    int suma=0, cant=0, valor, promedio;

    do{
        printf("ingresa un valor: ");
        scanf("%i", &valor);

        if(valor!=0)
        {
            suma=suma+valor;
            cant++;
        }


    }while(valor!=0);

    if(cant!=0)
    {
        promedio = suma/cant;
        printf("el promedio de los numeros ingresados es: ");
        printf("%i", promedio);
    }
    else
    {
        printf("no se ingresaron valores");
    }
    getch();
    return 0;
}
