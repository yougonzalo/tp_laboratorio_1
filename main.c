#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='S';
    int opcion=0, flag=0, flag1=0;
    double x=0, y=0;

    while(seguir=='S')
    {
            printf("1- Ingresar 1er operando (A=%.2f)\n",x);
            printf("2- Ingresar 2do operando (B=%.2f)\n",y);
            printf("3- Calcular la suma (A+B)\n");
            printf("4- Calcular la resta (A-B)\n");
            printf("5- Calcular la division (A/B)\n");
            printf("6- Calcular la multiplicacion (A*B)\n");
            printf("7- Calcular el factorial (A!)\n");
            printf("8- Calcular todas las operacione\n");
            printf("9- Salir\n\n");
            printf("Ingrese una opcion: ");
            scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                   printf("\nIngrese el primer operando:  ");
                   scanf ("%Lf",&x);
                   flag=1;
                   break;

            case 2:
                   printf("\nIngrese el segundo operando: ");
                   scanf ("%Lf",&y);
                   flag1=1;
                   break;

            case 3:
                    if(flag==0||flag1==0)
                {
                    printf("error reingrese un numero");
                    system("pause");
                    break;

                }

               printf("RESULTADO DE LA SUMA: %.2Lf:",suma(x,y));
               system("pause");
                break;
            case 4:
                     if(flag==0||flag1==0)
                {
                    printf("error reingrese un numero");
                    system("pause");
                    break;

                }
                printf("RESULTADI DE LA RESTA: %.2Lf: ",resta(x,y));
               system("pause");
                break;
            case 5:
                   if(flag==0||flag1==0)
                {
                    printf("error reingrese un numero");
                    system("pause");
                    break;

                }
               printf("RESULTADO DE LA DIVISION: %Lf : ",division(x,y));
               system("pause");

                break;
            case 6:
                   if(flag==0||flag1==0)
                {
                    printf("error reingrese un numero");
                    system("pause");
                    break;

                }
                printf("RESULTADO DE LA MULTIPLICACION:  %Lf",multiplicacion(x,y));
                system("pause");


                break;
            case 7:
                     if(flag==0||flag1==0)
                {
                    printf("error reingrese un numero");
                    system("pause");
                    break;

                }
                printf("FACTORIAL DEL PRIMER OPERANDO:  %.2Lf ",factorial(x));
                system("pause");


                break;
            case 8:
                   if(flag && flag1)
                   {
                        printf("\n%.2Lf + %.2Lf = %.2Lf\n", x, y, suma(x,y));
                        printf("\n%.2Lf - %.2Lf = %.2Lf\n", x, y, resta(x,y));
                        printf("\n%.2Lf / %.2Lf = %.2Lf\n", x, y, division (x,y));
                        printf("\n%.2Lf x %.2Lf = %.2Lf\n", x, y, multiplicacion (x,y));
                        printf("\n%.0Lf! = %.0Lf\n\n", x, factorial (x));
                   }
                   else
                        printf("Falta ingresar un operando\n");

                   break;
            case 9:
                   seguir = 'n';


        }

        system("pause");
        system("cls");


    }
    return 0;
}
