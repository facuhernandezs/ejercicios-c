#include<stdio.h>
#include<conio.h>

    void presentacion()
    {
        printf("programa que permite cargar 2 valores\n");
        printf("efectuar la suma de dichos valores\n");
        printf("muestra el resultado\n");
        printf("_____________________________________________\n");
    }
    void cargarSumar()
    {
        int valor1, valor2, suma;
        printf("ingrese el primer valor: ");
        scanf("%i", &valor1);
        printf("ingrese el segundo valor: ");
        scanf("%i", &valor2);
        suma = valor1 + valor2;
        printf("la suma de los 2 valores es: %i\n", suma);

    }
    void finalizacion()
    {
        printf("_____________________________________________\n");
        printf("gracias por utilizar este programa");
    }

    int main()
    {
        presentacion();
        cargarSumar();
        finalizacion();
        getch();
        return 0;
    }


