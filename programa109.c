#include<stdio.h>
#include<conio.h>

void cargarNotas(int notas[5])
{

    for(int x=0;x<5;x++)
    {
        printf("cargar las notas del curso: ");
        scanf("%i", &notas[x]);
    }
}
void mayorPromedio(int cursoA[5], int cursoB[5])
{
    int sumaA=0;
    int sumaB=0;
    for(int x=0;x<5;x++)
    {
        sumaA=sumaA + cursoA[x];
    }
    for(int x=0;x<5;x++)
    {
        sumaB=sumaB + cursoB[x];
    }

    int promedioA;
    int promedioB;
    promedioA = sumaA/5;
    promedioB = sumaB/5;
    if(promedioA>promedioB)
    {
        printf("curso A tiene mayor promedio");
    }
    else
    {
        printf("curso B tiene mayor promedio");
    }
}







int main()
{
    int notasA[5];
    int notasB[5];
    printf("curso A\n");
    cargarNotas(notasA);
    printf("curso B\n");
    cargarNotas(notasB);
    mayorPromedio(notasA, notasB);
    getch();
    return 0;
 }


