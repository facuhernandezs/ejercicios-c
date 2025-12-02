#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char nombre1[15];
    char nombre2[15];
    char nombre3[15];
    char total[60];

    printf("ingresar primer nombre: ");
    gets(nombre1);
    printf("ingresar segundo nombre: ");
    gets(nombre2);
    printf("ingresar tercer nombre: ");
    gets(nombre3);

    if(strcmp(nombre1, nombre2)<0 && strcmp(nombre1, nombre3)<0)
    {
        strcpy(total, nombre1);
        strcat(total,",");
        if(strcmp(nombre2, nombre3)<0)
        {
            strcat(total,nombre2);
            strcat(total,",");
            strcat(total,nombre3);

        }
        else
        {
            strcat(total,nombre3);
            strcat(total,",");
            strcat(total,nombre2);


        }
    }
    if(strcmp(nombre2, nombre1)<0 && strcmp(nombre2, nombre3)<0)
    {
        strcpy(total, nombre2);
        strcat(total,",");
        if(strcmp(nombre1, nombre3)<0)
        {
            strcat(total,nombre1);
            strcat(total,",");
            strcat(total,nombre3);

        }
        else
        {
            strcat(total,nombre3);
            strcat(total,",");
            strcat(total,nombre1);

        }
    }
    if(strcmp(nombre3,nombre1)<0 && strcmp(nombre3,nombre2)<0)
    {
        strcpy(total,nombre3);
        strcat(total,",");
        if(strcmp(nombre2,nombre1)<0)
        {
            strcat(total,nombre2);
            strcat(total,",");
            strcat(total,nombre1);


        }
        else
        {
            strcat(total,nombre1);
            strcat(total,",");
            strcat(total,nombre2);

        }

     }
    printf("los nombres ordenados alfabeticamente\n");
    printf("%s", total);

    getch();
    return 0;


}
