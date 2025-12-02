#include<stdio.h>
#include<conio.h>

int main()
{
    int vector[8], f, suma=0, suma1=0, cant=0;


    for(f=0;f<8;f++)
    {
        printf("ingresar valores: ");
        scanf("%i", &vector[f]);
        suma=suma+vector[f];
        if(vector[f]>36)
        {
            suma1=suma1+vector[f];
        }
        if(vector[f]>50)
        {
            cant=cant+1;
        }
    }
    printf("valor acumulado del vector: ");
    printf("%i", suma);
    printf("\n");
    printf("valor acumulado de los elementos mayores a 36: ");
    printf("%i", suma1);
    printf("\n");
    printf("cantidad de elementos mayores a 50: ");
    printf("%i", cant);
}
