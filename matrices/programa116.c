#include<stdio.h>
#include<conio.h>

void cargar(int mat[4][4])
{
    for(int f=0;f<4;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("ingresar elemetos de la matriz: ");
            scanf("%i", &mat[f][c]);
        }
    }
}
void imprimir(int mat[4][4])
{
    for(int f=0;f<4;f++)
    {
        for(int c=0;c<4;c++)
        {
            printf("%i-", mat[f][c]);

        }
        printf("\n");
    }
}

void diagonalPrincipal(int mat[4][4])
{
    printf("elementos de la diagonal principal\n");
/*    printf("%i ", mat[0][0]);
    printf("%i ", mat[1][1]);
    printf("%i ", mat[2][2]);
    printf("%i ", mat[3][3]);*/
    /*for(int f=0;f<4;f++)
    {
        for(int c=0;c<4;c++)
        {
            if(f==c)
            {
                printf("%i", mat[f][c]);
            }


        }
    }*/
    for(int k=0;k<4;k++)
    {
        printf("%i",  mat[k][k]);
    }
}
int main()
{
    int mat[4][4];
    cargar(mat);
    imprimir(mat);
    diagonalPrincipal(mat);
    getch();
    return 0;
}
