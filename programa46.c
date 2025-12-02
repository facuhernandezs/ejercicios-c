#include<stdio.h>
#include<conio.h>

int main()
{
    int f, n, mult=0;
    printf("ingresar un numero: ");
    scanf("%i", &n);
    for(f=1;f<=13;f++)
    {
        mult=mult+n;
        printf("-");
        printf("%i", mult);
    }
    getch();
    return 0;
}

