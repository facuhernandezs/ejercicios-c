#include<stdio.h>
#include<conio.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};



int main()
{
    int c;
    struct producto pro1, pro2;
    printf("ingrese codigo del primer producto");
    scanf("%i", &pro1.codigo);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("ingrese la descripcion del producto: ");
    gets(pro1.descripcion);
    printf("ingresar precio del producto: ");
    scanf("%f", &pro1.precio);


    printf("ingrese codigo del primer producto");
    scanf("%i", &pro2.codigo);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("ingrese la descripcion del producto: ");
    gets(pro2.descripcion);
    printf("ingresar precio del producto: ");
    scanf("%f", &pro2.precio);

    if(pro1.precio>pro2.precio)
    {
        printf("el producto %s tiene mayor precio", pro1.descripcion);

    }
    else

    {
        printf("el producto %s tiene mayor precio", pro1.descripcion);
    }
    getch();
    return 0;
}
