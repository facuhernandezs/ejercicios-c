#include<stdio.h>
#include<conio.h>

int rectanguloSup(int b, int a)
{
    int superficie=b*a;
    return superficie;
}

int main()
{
    //int base1, altura1, base2, altura2;
    //printf("ingresar base del rectangulo: ");
    //scanf("%i", &base1);
    //printf("ingresar altura del rectangulo: ");
    //scanf("%i", &altura1);
    //printf("segundo rectangulo\n");
    //printf("ingresar base del segundo rectangulo: ");
    //scanf("%i", &base2);
    //printf("ingresar altura del segundo rectangulo: ");
    //scanf("%i", &altura2);

    //int sup1 = rectanguloSup(10, 12);
    //int sup2 = rectanguloSup(8, 14);

    if(rectanguloSup(10, 12)>rectanguloSup(8, 14))
    {
        printf("la superficie del primer rectangulo es mayor con %i m2 frente a los %i m2 del segundo rectangulo", rectanguloSup(10, 12), rectanguloSup(8, 14));
    }
    else
    {
        printf("la superficie del segundo rectangulo es mayor con %i m2 frente a los %i m2 del primer rectangulo", rectanguloSup(8, 14), rectanguloSup(10, 12));
    }
    getch();
    return 0;


}
