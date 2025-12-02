#include <stdio.h>
#include <conio.h>

int main()
{
    float sueldo;
    printf("ingresar sueldo:");
    scanf("%f", &sueldo);
    if (sueldo>3000)
    {
        printf("esta persona debe abonar impuestos");

    }
    getch();
    return 0;
}
