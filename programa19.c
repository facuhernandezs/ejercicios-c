#include<stdio.h>
#include<conio.h>

int main()
{
    int dd, mm, aa;
    printf("ingresar el dia: ");
    scanf("%i", &dd);
    printf("ingresar el mes: ");
    scanf("%i", &mm);
    printf("ingresar el año: ");
    scanf("%i", &aa);

    if(mm == 01 || mm == 02 || mm == 03)
    {
        printf("corresponde al primer trimestre");
    }
    else
    {
        printf("no corresponde al primer trimestre");
    }
    getch();
    return 0;
}
