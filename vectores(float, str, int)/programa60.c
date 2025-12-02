#include<stdio.h>
#include<conio.h>

int main()
{
    int vec1[4], vec2[4], vec3[4], f;

    printf("carga del primer vector\n");
    for(f=0;f<4;f++)
    {
        printf("ingresar valor: ");
        scanf("%i", &vec1[f]);
    }
    printf("carga del segundo vector\n ");
    for(f=0;f<4;f++)
    {
        printf("ingresar valor: ");
        scanf("%i", &vec2[f]);
    }
    printf("suma de los 2 vectores:\n ");
    for(f=0;f<4;f++)
    {
        vec3[f]=vec1[f]+vec2[f];
    }
    for(f=0;f<4;f++)
    {
        printf("%i - ", vec3[f]);
    }
    getch();
    return 0;

}
