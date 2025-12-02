#include<stdio.h>
#include<conio.h>

int main()
{
    int aprobados, reprobados, f;
    aprobados = 0;
    reprobados = 0;

    for(f=1; f<=10; f=f+1)
    {
        int nota;
        printf("ingresar nota: ");
        scanf("%i", &nota);

        if(nota>=7)
        {
            aprobados=aprobados+1;
        }
        else
        {
            reprobados=reprobados+1;
        }

    }
    printf("aprobados: ");
    printf("%i", aprobados);
    printf("\n");
    printf("reprobados: ");
    printf("%i", reprobados);

    getch();

}
