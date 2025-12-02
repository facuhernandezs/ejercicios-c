#include<conio.h>
#include<stdio.h>

void cargar(int mat[2][5])
{
    for(int f=0;f<2;f++)
    {
        for(int c=0;c<5;c++)
        {
             printf("ingresar elemento");
             scanf("%i", &mat[f][c]);
        }
    }
}

void fila1Xfila2(int mat[2][5])
{
    int aux;
    for(int c=0;c<5;c++)
    {
        aux=mat[0][c];
        mat[0][c]=mat[1][c];
        mat[1][c]=aux;
    }


}

void imprimir(int mat[2][5])
{
     for(int f=0;f<2;f++)
    {
        for(int c=0;c<5;c++)
        {
             printf("%i", mat[f][c]);
        }
        printf("\n");
    }


}

int main()
{
    int matriz[2][5];
    cargar(matriz);
    imprimir(matriz);
    fila1Xfila2(matriz);
    imprimir(matriz);
    getch();
    return 0;
}
