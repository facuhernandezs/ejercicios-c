#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("ingresar el valor numerico: ");
    scanf("%i", &num);

    if(num > 999)
    {
        printf("error");
    }
    else
    {
        if(num<100)
        {
            if(num < 10)
            {
                printf("Una cifra");
            }
            else
            {
                printf("Dos cifras");
            }
        }
        else
        {
            printf("Tres cifras");
        }
    }
    getch();
    return 0;
}
