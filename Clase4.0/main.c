#include <stdio.h>
#include <stdlib.h>
#include "Ingresos.h"
#include "Recursividad.h"

int main()
{
    /*int edad;
    edad = pedirEntero("Ingrese edad");
    */

   /* int resultado = factorial(5);
    printf("%d", &resultado);
*/


    int opcion;
    char seguir = 's';

    do{
        printf("Elija opcion:\n1.Alta \n2.Baja\n3.Informar\n4.Salir\n");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                printf("Estoy dando de alta\n");
                break;

            case 2:
                printf("Estoy dando de baja\n");
                break;

            case 3:
                printf("Estoy informando\n");
                break;
            case 4:
                printf("Estoy Saliendo\n");
                seguir = 'n';
                break;
            default:
                printf("No ingreso una opcion valida\n");
        }

    }while(seguir == 's');







    return 0;
}


