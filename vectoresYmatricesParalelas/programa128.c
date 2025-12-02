#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char alumnos[5][20], int notas[5])
{
    int c;

    for(int f=0;f<5;f++)
    {
        printf("ingresar nombre del alumno: ");
        fgets(alumnos[f], 20, stdin);

        printf("ingresar nota del alumno: ");
        scanf("%i", &notas[f]);

        // CÓDIGO CLAVE: Aquí limpiamos el buffer
        while ((c = getchar()) != '\n' && c != EOF);
    }
}


void ordenar(char alumnos[5][20], int notas[5])
{
    char auxNombre[41];
    int auxNota;
    for(int k=0;k<4;k++)
    {
        for(int f=0;f<4-k;f++)
        {
            if(notas[f]<notas[f+1])
            {
                auxNota=notas[f];
                notas[f]=notas[f+1];
                notas[f+1]=auxNota;
                strcpy(auxNombre, alumnos[f]);
                strcpy(alumnos[f], alumnos[f+1]);
                strcpy(alumnos[f+1], auxNombre);
            }
        }
    }
}

void imprimir(char alumnos[5][20], int notas[5])
{
     printf("tabla de alumnos y notas ordenadas de mayor a menor\n");
     for(int f=0;f<5;f++)
     {
        printf("nombre:  %s nota: %i\n", alumnos[f], notas[f]);
     }
}

int main()
{
    char nombres[5][20];
    int calificaciones[5];
    cargar(nombres, calificaciones);
    ordenar(nombres, calificaciones);
    imprimir(nombres, calificaciones);
    getch();
    return 0;

}
