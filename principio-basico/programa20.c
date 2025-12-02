#include<stdio.h>
#include<conio.h>

int main()
{
    int dia, mes, anio;
    printf("dia: ");
    scanf("%i", &dia);
    printf("mes: ");
    scanf("%i", &mes);
    printf("año: ");
    scanf("%i", &anio);

    if(dia == 24 && mes == 12)
    {
        printf("es navidad");
    }
    getch();
    return 0;
}
