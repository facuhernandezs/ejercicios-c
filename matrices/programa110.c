#include<stdio.h>
#include<conio.h>

void cargar(int vector10[10])
{
    for(int x=0;x<10;x++)
    {
        printf("cargar elementos del vector: ");
        scanf("%i", &vector10[x]);
    }

}

void menorOmayor(int vector10[10])
{
    int ordenado=1;
    for(int x=0;x<9;x++)
    {
        if(vector10[x+1]<vector10[x])
        {
            ordenado=0;
            break;
        }
    }
    if(ordenado==1)
    {
        printf("el vector esta ordenado de menor a mayor");
    }
    else
    {
        printf("el vector no esta ordenado de menor a mayor");
    }

}

int main()
{
    int vector[10];
    cargar(vector);
    menorOmayor(vector);
    getch();
    return 0;
}

