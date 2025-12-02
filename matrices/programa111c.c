#include<stdio.h>
#include<conio.h>

void cargar(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("ingrese el elemento: ");
        scanf("%i", &vector[x]);

    }
}

void mayor(int vector[5])
{
    int may=vector[0];
    int pos=0;
    for(int x=1;x<5;x++)
    {
        if(vector[x]>may)
        {
            may=vector[x];
            pos=x;
        }
    }
    printf("el mayor elemento del vector es %i\n", may);
    printf("se encuentra en la posicion %i", pos);
}



int main()
{
    int vector[5];
    cargar(vector);
    mayor(vector);
    getch();
    return 0;
}
