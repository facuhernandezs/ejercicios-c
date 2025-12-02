#include<stdio.h>
#include<conio.h>

void genero(char c)
{
    if(c == 'h')
    {
        printf("hombre\n");
    }
    if(c == 'm')
    {
        printf("mujer");
    }
}
int main()
{
    char woman = 'm';
    char man='h';
    genero(man);
    genero(woman);
    getch();
    return 0;
}
