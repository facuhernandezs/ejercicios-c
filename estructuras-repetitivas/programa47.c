#include<stdio.h>
#include<conio.h>

int main()
{
    int n, cantidad, equilatero, isosceles, escaleno, f;
    cantidad=0;
    isosceles=0;
    escaleno=0;
    equilatero=0;

    printf("ingresar cantidad de triangulos: ");
    scanf("%i", &n);

    for(f=1;f<=n;f++)
    {
        int lado1, lado2, lado3;
        printf("\n");
        printf("ingresar el primer lado: ");
        scanf("%i", &lado1);
        printf("ingresar el segundo lado: ");
        scanf("%i", &lado2);
        printf("ingresar el tercer lado: ");
        scanf("%i", &lado3);

        if(lado1==lado2 && lado2==lado3)
        {
            equilatero++;
            printf("triangulo equilatero");
        }
        else
        {
            if(lado1!=lado2 && lado2!=lado3)
            {
                escaleno++;
                printf("triangulo escaleno");
            }
            else
            {
                isosceles++;
                printf("triangulo isosceles");
            }
        }

    }
    printf("\n");
    printf("cantidad de triangulos equilateros: ");
    printf("%i", equilatero);
    printf("\n");
    printf("cantidad de triangulos isosceles: ");
    printf("%i", isosceles);
    printf("\n");
    printf("cantidad de triangulos escalenos: ");
    printf("%i", escaleno);
    printf("\n");
    if(equilatero<escaleno && equilatero<isosceles)
    {
        printf("hay menos triangulos equilateros");
    }
    else
    {
        if(escaleno<isosceles)
        {
            printf("hay menos triangulos escalenos");
        }
        else
        {
            printf("hay menos triangulos isosceles");
        }

    }
    getch();
    return 0;
}

