#include<stdio.h>
#include<conio.h>

int main()
{
    int x, y, f, n, cuadrante1=0, cuadrante2=0, cuadrante3=0, cuadrante4=0;
    printf("ingresar la cantidad de puntos con los que se trabajara: ");
    scanf("%i", &n);


    for(f=0;f<n;f++)
    {
        printf("\n");
        printf("ingresar coordenadas de x: ");
        scanf("%i", &x);
        printf("ingresar coordenadas de y: ");
        scanf("%i", &y);

         if(x>0 && y>0)
         {
             printf("el punto se encuentra en el primer cuadrante");
             cuadrante1++;
         }
         else
         {
             if(x<0 && y>0)
             {
                 printf("el punto se encuentra en el segundo cuadrante");
                 cuadrante2++;
             }
             else
             {
                 if(x<0 && y<0)
                 {
                     printf("el punto se encuentra en el tercer cuadrante");
                     cuadrante3++;
                 }
                 else
                 {
                     if(x>0 && y<0)
                     {
                         printf("el punto se encuentra en el cuarto cuadrante");
                         cuadrante4++;
                     }
                     else
                     {
                         printf("el punto se encuentra por encima del plano");
                     }
                 }


             }
         }
    }
    printf("\n");
    printf("cantidad de puntos en el primer cuadrante: ");
    printf("%i", cuadrante1);
    printf("\n");
    printf("cantidad de puntos en el segundo cuadrante: ");
    printf("%i", cuadrante2);
    printf("\n");
    printf("cantidad de puntos en el tercer cuadrante: ");
    printf("%i", cuadrante3);
    printf("\n");
    printf("cantidad de puntos en el cuarto cuadrante: ");
    printf("%i", cuadrante4);

    getch();
    return 0;

}
