#include<stdio.h>
#include<conio.h>

int main()
{
    char oracion[201];
    int x=0;
    int cont=1;
    printf("ingresar oracion: ");
    gets(oracion);
    while(oracion[x]!='\0')
    {
        if(oracion[x]==' ')
        {
            cont++;
        }
        x++;

    }
    printf("la cantidad de palabras en %s es:\n%i", oracion, cont);

}
