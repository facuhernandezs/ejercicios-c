#include<stdio.h>
#include<conio.h>

int main()
{
    int x=1,mayores=0,menores=0;

    while(x<=10)
        {
            int calificacion;
            printf("ingresar calificacion :");
            scanf("%i", &calificacion);

            if(calificacion>=7)
            {
                mayores=mayores+1;
            }
            else
            {
                menores = menores +1;
            }
            x=x+1;
        }
        printf("la cantidad de notas mayores es: ");
        printf("%i", mayores);
        printf(" la cantidad de notas menores es: ");
        printf("%i", menores);
        getch();
        return 0;
}
