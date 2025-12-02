#include<stdio.h>
#include<conio.h>

void superficie(int l)
{
    int superfic = l*l;
    printf("la superficie del cuadrado es: %i\n", superfic);
}

void perimetro(int l)
{
    int perim = l*4;
    printf("el perimetro del cuadrado es: %i\n", perim);
}

int main()
{
    int x;
    for(x=10; x<=20; x++)
    {
        superficie(x);
        perimetro(x);
    }
    getch();
    return 0;
}
