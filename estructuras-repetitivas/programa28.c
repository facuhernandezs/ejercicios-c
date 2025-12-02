#include<stdio.h>
#include<conio.h>

int main()
{
    int n, x=1;
    printf("ingresar un valor numerico: ");
    scanf("%i", &n);
    while(x<=n)
    {
        printf("%i ",x);
        x = x+1;
    }
    getch();
    return 0;
}
