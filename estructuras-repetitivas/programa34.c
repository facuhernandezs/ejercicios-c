#include<stdio.h>
#include<conio.h>

int main()
{
    int n=25, x=1, a=11;

    while(x<=n)
    {
        printf("%i", a);
        printf("-");
        a = a+11;
        x = x+1;
    }
    getch();
    return 0;

}
