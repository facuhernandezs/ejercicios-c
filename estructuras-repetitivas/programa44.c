#include<stdio.h>
#include<conio.h>

int main()
{
    int f, valor, suma=0;

    for(f=1; f<=10; f++)
    {
        printf("ingresar valor: ");
        scanf("%i", &valor);

        if(f>5)
        {
            suma=suma+valor;
        }
    }
    printf("la suma de los ultimos 5 valores es: ");
    printf("%i", suma);
    getch();
    return 0;
}
