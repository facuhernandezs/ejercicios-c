#include<stdio.h>
#include<conio.h>

void caracter(char letra)
{
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E'
        || letra == 'I' || letra == 'O' || letra == 'U')
    {
        printf("la letra %c es una vocal", letra);
    }
    else
    {
        printf("el caracter %c no es una vocal", letra);
    }
}
int main()
{
    char l;
    for(l='A'; l<='z'; l++)
    {
        caracter(l);
        printf("\n");
    }
    getch();
    return 0;
}
