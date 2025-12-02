#include<stdio.h>
#include<conio.h>

int main()
{
    float promedio, alturas[5],suma1=0;
    int f, may, men;

    for(f=0;f<5;f++)
    {
        printf("ingresar altura: ");
        scanf("%f", &alturas[f]);
        suma1=suma1+alturas[f];
    }

    //for(f=0;f<5;f++)
    //{
    //    suma1=suma1+alturas[f];
    //}
    promedio = suma1/5;
    printf("el promediode altura es: ");
    printf("%f", promedio);

    for(f=0;f<5;f++)
    {
        if(promedio>alturas[f])
        {
            men++;
        }
        else
        {
            may++;
        }
    }
    printf("cantidad de personas con una altura menor al promedio: ");
    printf("%i", men);
    printf("\n");
    printf("cantidad de personas con una altura mayor al promedio: ");
    printf("%i", may);

}
