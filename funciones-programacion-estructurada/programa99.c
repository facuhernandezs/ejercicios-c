#include<stdio.h>
#include<conio.h>

float promedio(int n1, int n2, int n3)
{
    float promedio=float(n1+n2+n3)/3;
    return promedio;

}

int main()
{
    printf("el promedio de los valores ingresados es: %f", promedio(10, 11, 10));
    getch();
    return 0;

}
