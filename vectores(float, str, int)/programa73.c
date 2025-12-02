#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[30];
    printf("ingresa una palabra en minuscula: ");
    gets(palabra);
    int cant=0;
    int x=0;
    while(palabra[x]!= '\0')
    {
        if(palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u')
        {
            cant++;
        }
        x++;
    }
    printf("la cantidad de vocales que tiene %s es: %i", palabra, cant);
}
