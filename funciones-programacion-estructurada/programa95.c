#include<stdio.h>
#include<conio.h>

void escalera(int num)
{
    if(num<0)
    {
        printf("error");
    }
    else
    {
        int f;
        for(f=1;f<=num;f++)
        {
            printf("-%i", f);
        }
    }
}

int main()
{
    escalera(45);
    getch();
    return 0;
}
