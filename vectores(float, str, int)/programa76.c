#include<stdio.h>
#include<conio.h>

int main()
{
    char palabra[20];
    printf("ingresar una palabra: ");
    gets(palabra);
    if(palabra[0]=='a')
        printf("la palabra comienza con a");
    if(palabra[0]=='A')
        printf("la palabra comienza con A");
    else
        printf("la palabra no comienza con la vocal a");
    getch();
    return 0;
}
