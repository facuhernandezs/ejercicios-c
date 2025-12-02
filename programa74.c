#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[30];
    printf("ingresar una palabra: ");
    gets(palabra);
    int x=0;
    int cont=0;
    while(palabra[x]!='\0')
    {
        cont++;
        x++;
    }
        printf("%i", cont);

    getch();
    return 0;
}

