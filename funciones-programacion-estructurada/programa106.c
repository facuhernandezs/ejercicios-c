#include<stdio.h>
#include<conio.h>

void carga(float alturaPersonas[5])
{
    for(int x=0;x<5;x++)
    {
        printf("ingresar altura: ");
        scanf("%f", &alturaPersonas[x]);
    }

}
float promedioAlturas(float alturaPersonas[5])
{
    float suma=0;
    for(int x=0; x<5; x++)
    {
        suma = suma + alturaPersonas[x];
    }
    float promedio = suma/5;
    return promedio;
}

void altasBajas(float alturasPersonas[5], float promedio)
{
    int altas=0;
    int bajas=0;
    for(int x=0;x<5;x++)

    {
        if(promedio<alturasPersonas[x])
        {
            altas++;
        }
        else
        {
            bajas++;
        }
    }
    printf("la cantidad de personas mas altas que el promedio es: %i\n", altas);
    printf("la cantidad de personas mas bajas que el promedio es: %i", bajas);

}

int main()
{
    float alturas[5];
    carga(alturas);
    float promedio = promedioAlturas(alturas);
    printf("el promedio es: %f\n", promedio);
    altasBajas(alturas, promedio);


}
