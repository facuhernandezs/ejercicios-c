#include<stdio.h>
#include<conio.h>

void cargar(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("ingrese elementos: ");
        scanf("%i", &vector[x]);
    }
}
void imprimir(int vector[5])
{
    printf("contenido completo del vector\n");
    for(int x=0;x<5;x++)
    {
        printf("%i ", vector[x]);

    }
}
int main()
{
    int vector[5];
    cargar(vector);
    imprimir(vector);
    getch();
    return 0;
}
