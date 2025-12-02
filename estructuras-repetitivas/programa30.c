#include<stdio.h>
#include<conio.h>

int main()
{
    int piezas, cantidad = 0, x = 1;
    printf("ingrese el numero de piezas a procesar: ");
    scanf("%i", &piezas);

    while(x<=piezas)
        {

        float longitud;
        printf("ingrese la longitud de la pieza");
        scanf("%f", &longitud);

        if(longitud>1.20 && longitud<1.30)
        {
            cantidad = cantidad + 1;
        }
        x=x+1;
        }
    printf("%i", cantidad);

}
