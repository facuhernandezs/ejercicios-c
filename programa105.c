#include<stdio.h>
#include<conio.h>

void palabra(char letra[20])
{
    printf("ingresar palabra: ");
    gets(letra);
}

int vocales(char letra[20])
{
    int suma=0;
    int x=0;
    while(letra[x]!='\0')
    {
        if(letra[x]=='a' || letra[x]=='e' || letra[x]=='i' || letra[x]=='o' || letra[x]=='u')
        {
            suma++;
        }
        x++;


    }
    return suma;
}
int main()
{
    char caracteres[20];
    palabra(caracteres);
    printf("la cantidad de vocas que tiene la palabra %s es: %i", caracteres, vocales(caracteres));
    getch();
    return 0;
}








