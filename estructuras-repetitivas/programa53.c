#include<stdio.h>
#include<conio.h>

int main()
{
    int cant1=0, cant2=0, cant3=0, peso, total;

    do{
    printf("ingresar el peso en kilogramos: ");
    scanf("%i", &peso);

    if(peso>=10.2)
    {
        cant1++;
    }
    else
    {
        if(peso<=9.8)
        {
            cant2++;
        }
        else
        {
            cant3++;
        }
    }


    }while(peso!=0);
    total = cant1+cant2+cant3;
    printf("\n");
    printf("piezas con mas de 10.2kg de peso");
    printf("%i", cant1);
    printf("\n");
    printf("piezas con menos de 9.8kg de peso: ");
    printf("%i", cant2);
    printf("\n");
    printf("piezas entre 9.8kg y 10.2kg de peso: ");
    printf("%i", cant3);
    printf("\n");
    printf("cantidad de piezas: ");
    printf("%i", total);

    getch();
    return 0;


}
