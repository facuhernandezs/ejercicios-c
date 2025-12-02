#include<stdio.h>
#include<conio.h>

int main()
{
    int valor, suma=0;
    char letra;
    do{
        printf("ingresar un valor: ");
        scanf("%i", &valor);
        printf("quier ingresar otro valor?[s/S]");
        scanf(" %c", &letra);

        suma=suma + valor;

        }while(letra=='s' || letra=='S');

    printf("la suma de los valores es: %i", suma);
}


