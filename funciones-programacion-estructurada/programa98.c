#include<stdio.h>
#include<conio.h>

int elMayor(int n1, int n2)
{
    if(n1>n2)
        return n1;
    else
        return n2;
}

int main()
{
    int num1, num2;
    printf("ingresar primer valor: ");
    scanf("%i", &num1);
    printf("ingresar segundo valor: ");
    scanf("%i", &num2);
    int numMayor=elMayor(num1, num2);
    printf("el numero mas grande es: %i", numMayor);
    getch();
    return 0;

}
