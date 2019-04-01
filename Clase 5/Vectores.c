#include "Vectores.h"
 void cargarVector(int numerosEnteros[],int tamanoVector){
    int i;
    for( i = 0; i<tamanoVector; i++)
    {
        printf("Ingrese numero: ");
        scanf("%d",&numerosEnteros[i]);
    }

    }


void mostrarElementosDelVector(int numerosEnteros[],int tamanoVector){
    int i;
    for(i = 0; i< tamanoVector; i++){
        printf("%d\n",numerosEnteros[i]);
    }

}

int buscarMaximo(int numerosEnteros[], int tamanoVector){
    int i;
    int flag = 0;
    int max;
    for(i=0; i<tamanoVector; i++){

        if(numerosEnteros[i]> max || flag == 0){
            max = numerosEnteros[i];
            flag = 1;
        }
    }
    return max;


}

int buscarValor(int numerosEnteros[], int tamanoVector, int valor){
    int i;
    int posicion;

    for(i=0; i<tamanoVector; i++){

        if(numerosEnteros[i] == valor){
            posicion = i;
            break;
        }
        else{
            posicion = -1;
        }
    }
    return posicion;


}

