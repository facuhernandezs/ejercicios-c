#include<stdio.h>
#include<conio.h>

int main()
{
    int a=8;

    while(a<=500)
    {
        printf("%i", a);
        printf("-");
        a = a+8;
    }
    getch();
    return 0;
}
