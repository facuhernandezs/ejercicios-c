#include<stdio.h>
#include<conio.h>

int main()
{
    int x, y;
    printf("ingresar un valor de x distinto de 0: ");
    scanf("%i", &x);
    printf("ingresar un valor de y distinto de 0: ");
    scanf("%i", &y);

    if(x<0 && y>0)
    {
        printf("el punto se encuentra en el segundo cuadrante del plano");
    }
    else
    {
        if(x>0 && y>0)
        {
            printf("el punto se encuentra en el primer cuadrante del plano");
        }
        else
        {
            if(x<0 && y<0)
            {
                printf("el punto se encuentra en el tercer cuadrante del plano");
            }
            else
            {
                if(x>0 && y<0)
                {
                    printf("el valor se encuentra en el cuarto cuadrante");
                }
                else
                {
                    printf("el punto se encuentra por encima del eje");
                }
            }
        }
    }

    getch();
    return 0;

}
