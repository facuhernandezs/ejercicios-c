#include<stdio.h>
#include<conio.h>


void cargar(char alumnos[4][20], int notas[4])
{
    for(int f=0;f<4;f++)
    {
        printf("ingresar nombre del alumno: ");
        gets(alumnos[f]);
        printf("ingresar nota del alumno: ");
        scanf("%i", &notas[f]);
    }
}

void condicion(char alumnos[4][20], int notas[4])
{
    for(int f=0;f<4;f++)
    {
        if(notas>=8)
        {
            printf(" %s %i muy bueno\n", alumnos[f], notas[f]);
        }
        else
        {
            if(notas<7 && notas>4)
            {
                printf(" %s %i bueno\n", alumnos[f], notas[f]);
            }
            else
            {
                printf(" %s %i insuficiente\n", alumnos[f], notas[f]);
            }
        }
    }
}
int main()
{
    char nombres[4][20];
    int calificaciones[4];
    cargar(nombres, calificaciones);
    condicion(nombres, calificaciones);
    getch();
    return 0;



}




