#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[15];
    int f;
    printf("ingresar una palabra en minuscula: ");
    gets(palabra);
    int x=0;
    while(x != '\n')
    {
        if(palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u' )
        {
            palabra[x]='-';
        }
        x++;
    }
    printf("%s", palabra);
}
