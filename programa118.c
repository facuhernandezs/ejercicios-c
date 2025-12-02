#include<stdio.h>
#include<conio.h>

void cargar(int mat[2][5])
{
    for(int c=0;c<5;c++)
    {
        for(int f=0;f<2;f++)
        {
            printf("ingresar componenete de la fila %i y la columna %i: ", f, c);
            scanf("%i", &mat[f][c]);
        }
    }
    printf("\n");
}

void imprimir(int mat[2][5])
{
    {
    for(int f=0;f<2;f++)
    {
        for(int c=0;c<5;c++)
        {
            printf("%i-", mat[f][c]);
        }
        printf("\n");
    }
}
}

int main()
{
    int matriz[2][5];
    cargar(matriz);
    imprimir(matriz);
    getch();
    return 0;
}
