#include<stdio.h>
#include<conio.h>

void cargar(int mat[3][4])
{
    for(int f=0;f<3;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("ingresar elementos de la matriz: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void impresionTotalmatriz(int mat[3][4])
{

    printf("matriz total\n");
    for(int f=0;f<3;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("%i", mat[f][c]);
        }
        printf("\n");
    }

}


void impresionPrimerfila(int mat[3][4])
{
    printf("primer fila\n");

        for(int c=0;c<4;c++)
        {
            printf("%i", mat[0][c]);
        }
        printf("\n");
}
void impresionUltimafila(int mat[3][4])
{
    printf("ultima fila\n");
        for(int c=0;c<4;c++)
        {
            printf("%i", mat[2][c]);
        }
        printf("\n");
}
void impresionPrimercolumna(int mat[3][4])
{
    printf("primer columna\n");
    for(int f=0;f<3;f++)
    {
        printf("%i\n", mat[f][0]);
    }
}

int main()
{
    int matriz[3][4];
    cargar(matriz);
    impresionTotalmatriz(matriz);
    impresionPrimerfila(matriz);
    impresionUltimafila(matriz);
    impresionPrimercolumna(matriz);
    getch();
    return 0;
}
