#include<stdio.h>
#include<conio.h>

int main()
{
    int f, vector[10], orden;

    for(f=0;f<10;f++)
        {
            printf("ingresar elementos: ");
            scanf("%i", &vector[f]);
        }
    orden=1;
    for(f=0;f<9;f++)
    {
        if(vector[f+1]<vector[f])
        {
            orden=0;
            break;

        }
    }
     if(orden==1)
        {
            printf("el vector esta ordenado");
        }
        else
        {
            printf("el vector esta desordenado");
        }
    getch();
    return 0;

}
