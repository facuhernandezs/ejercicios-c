#include<stdio.h>
#include<conio.h>

void cargar(int mat[3][4])
{
    for(int f=0;f<3;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("ingresar elemento: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void mayor(int mat[3][4])
{
    int may=mat[0][0];
    for(int f=0;f<3;f++)
    {
        for(int c=0;c<4;c++)
           {
               if(may<mat[f][c])
               {
                  may=mat[f][c];
               }
           }
    }
    printf("el numero mas grande de la matriz es: %i", may);

}

int main()
{
    int matriz[3][4];
    cargar(matriz);
    mayor(matriz);
    getch;
    return 0;
}
