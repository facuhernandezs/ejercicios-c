#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    do{
       printf("ingresa un valor entre 0 y 999(0 finaliza): ");
       scanf("%i", &valor);
       if(valor>=100)
       {
           printf("tiene 3 digitos");
       }
       else
       {
           if(valor>=10)
           {
               printf("tiene 2 digitos");

           }
           else
           {
               printf("tiene un digito");
           }
       }
       printf("\n");

     } while(valor!=0);
    getch();
    return 0;
}
