#include<stdio.h>
#include<conio.h>

int main()
{
    int sueldo, antiguedad;
    printf("antiguedad del operario: ");
    scanf("%i", &antiguedad);
    printf("sueldo del operario: ");
    scanf("%i", &sueldo);


    if(sueldo<500 && antiguedad>=10)
    {
        int aumento;
        aumento = sueldo * 1.2;
        printf("sueldo a pagar: ");
        printf("%i", aumento);
    }
    else
    {
        if(sueldo<500 && antiguedad<10)
        {
            int aumento;
            aumento = sueldo * 1.05;
            printf("sueldo a pagar: ");
            printf("%i", aumento);
        }
        else
        {
            if(sueldo>=500)
            {
                printf("%i", sueldo);
            }

        }
    }
    getch();
    return 0;
}
