#include<stdio.h>
#include<conio.h>

int main()
{
    int valor1, valor2;
    char operacion;
    printf("ingresar primer valor: ");
    scanf("%i", &valor1);
    printf("ingresar segundo valor: ");
    scanf("%i", &valor2);
    printf("ingresar simbolo de operacion [+, -, /, *]");
    scanf(" %c", &operacion);

    if(operacion=='+')
    {
        int suma=valor1 + valor2;
        printf("la suma de los valores ingresados es %i", suma);
    }
    else
    {
        if(operacion=='-')
        {
            int resta;
            resta=valor1-valor2;
            printf("la diferencia de los 2 valores ingresados es %i", resta);
        }
        else
        {
            if(operacion=='*')
            {
                int producto;
                producto = valor1*valor2;
                printf("eñ producto de los 2 valores es %i", producto);
            }
            else
            {
                if(operacion == '/')
                {
                    int division;
                    division= valor1/valor2;
                    printf("la division de los 2 valores enteros es %i", division);
                }
            }
        }
    }


}
