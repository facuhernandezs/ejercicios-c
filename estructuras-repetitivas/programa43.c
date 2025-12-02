#include<stdio.h>
#include<conio.h>

int main()
{
    int suma, f, n, base, altura, superficie;

    printf("ingresar cantidad de triangulos:");
    scanf("%i", &n);

    for(f=1;f<=n;f++)
    {
        printf("\n");
        printf("ingresar base del triangulo: ");
        scanf("%i", &base);
        printf("ingresar altura del triangulo: ");
        scanf("%i", &altura);

        superficie = (base*altura)/2;
        if(superficie>12)
        {
            suma++;
        }
        printf("la altura del triangulo es: ");
        printf("%i", altura);
        printf("\n");
        printf("la base del triangulo es: ");
        printf("%i", base);
        printf("\n");
        printf("la superficie del triangulo es: ");
        printf("%i", superficie);
    }
    printf("\n");
    printf("triangulos con superficie mayor a 12: ");
    printf("%i", suma);
    printf("\n");

    getch();
    return 0;
}
