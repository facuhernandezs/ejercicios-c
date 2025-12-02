#include<stdio.h>
#include<conio.h>

int main()
{
    int cursoA[5], cursoB[5], promedio, nota, suma1=0, suma2=0, f, promedioA, promedioB;
    printf("curso A\n");
    for(f=0;f<5;f++)
        {
            printf("ingresar notas: ");
            scanf("%i", &cursoA[f]);
            suma1=suma1+cursoA[f];
        }
    printf("curso B\n");
    for(f=0;f<5;f++)
        {
            printf("ingresar notas: ");
            scanf("%i", &cursoB[f]);
            suma2=suma2+cursoB[f];
        }
    promedioA=suma1/5;
    promedioB=suma2/5;
    if(promedioA>promedioB)
    {
        printf("El curso A obtuvo un mayor promedio de notas");
    }
    else
    {
        printf("El curso B obtuvo un mayor promedio de notas");
    }
    getch();
    return 0;
}
