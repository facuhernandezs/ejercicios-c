#include<stdio.h>
#include<conio.h>

int main()
{
    int nc, sa, suma=0;

    do{

                printf("\n");
                printf("ingresar numero de cuenta del cliente: ");
                scanf("%i", &nc);

                if(nc>=0)
                {
                    printf("ingresar saldo de la cuenta del cliente: ");
                    scanf("%i", &sa);
                    printf("de la cuenta: ");
                    printf("%i", nc);
                    printf("\n");
                    printf("el estado actual segun su saldo es: ");

                    if(sa>0)
                    {
                        printf("acreedor");
                    }
                    else
                    {
                        if(sa<0)
                        {
                            printf("deudor");
                        }
                        else
                        {
                            printf("nulo");
                        }
                    }
                    suma=suma+nc;
                }


      }while(nc>=0);
    printf("\n");
    printf("la suma total de los saldos acreedores es: ");
    printf("%i", suma);
}
