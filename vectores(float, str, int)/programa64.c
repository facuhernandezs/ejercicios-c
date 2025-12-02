#include<stdio.h>
#include<conio.h>

int main()
{
    int suma=0, f;
    int valor;
    char continua;

    do{
        printf("ingresar un valor: ");
        scanf("%i", &valor);

        suma=suma+valor;

        printf("continua? presione la letra 's' si la respuesta es afirmativa");
        scanf(" %c", &continua);
    }while(continua == 's');
    printf("la suma de los valores ingresados es:\n%i", suma);

}
