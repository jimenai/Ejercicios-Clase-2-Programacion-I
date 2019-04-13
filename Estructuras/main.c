#include <stdio.h>
#include <stdlib.h>
#include
#define TAM 3;
typedef struct{
    int legajo;
    char nombre[TAM];
    float sueldo;
    char sexo;
    int ocupado;
}eEmpleado;

void inicializarEmpleados(eEmpleado vec[], int tam);


int main()
{
    eEmpleado lista[TAM];
    int opcion;
    inicializarEmpleados(lista, TAM);

    do{
        opcion = printf("Elija opcion:\n1.Alta Empleado\n2.Baja Empleado\n3.Modificar Empleado\n4.Ordenar Empleado\n5.Mostrar Lista de Empleados\n6.Salir del programa");
        scanf("%d", &opcion);

        switch(opcion){
        case 1:

        break;
        case 2:




        }





    }while(seguir == 's');


    return 0;
}
void inicializarEmpleados(eEmpleado vec[], int tam){
   for(int i=0;i < tam; i++){
        vec[i].ocupado = 0;
    }
}

int buscarlibre(eEmpleado vec[], int tam){
    int indice = -1;
    for(int i = 0; i< tam; i++){
        if(vec[i].ocupado == 0)
            indice = i;
            break;
    }
    return indice;
}

int buscarEmpleado(eEmpleado vec[], int tam, int legajo){
    int posicionEmpleado = -1;
    for(int i = 0; i< tam; i++){
        if(vec[i].legajo == legajo){
            posicionEmpleado = i;
            break;
        }
    }
    return posicionEmpleado;
}

void mostrarEmpleado(eEmpleado emp){
    printf("");
}

void mostrarEmpleados(eEmpleado emp, int tam){
    int cont;
    for(int i = 0; i< tam; i++){
        if(vec[i].ocupado == 1){
            mostrarEmpleado(vec[i]);
            cont ++;
        }
    }
    return posicionEmpleado;

}
void altaEmpleado(eEmpleado vec[], int tam){
    int indice;
    int esta;
    int legajo;

    indice = buscarEmpleado(vec,tam);
            if(indice == -1){
                printf("No hay lugar para dar de alta a otro empleado");
            }else{
               legajo = printf("Ingrese legajo:");
               esta = buscarEmpleado(vec, tam, legajo);
               if(esta == -1){
                    printf("Ingrese Nombre: ");
                    fflush(stdin);
                    getc(vec[esta].nombre);

                    printf("Ingrese Legajo: ");
                    scanf("%d", &vec[esta].legajo);

                    printf("Ingrese Sexo: ");
                    scanf("%c", &vec[esta].sexo);

                    printf("Ingrese Sueldo: ");
                    scanf("%f", &vec[esta].sueldo);


               }else{
                    printf("Empleado existente. Legajo: %d, nombre: %s, sexo: %c, sueldo: %.2f", vec[esta].legajo, vec[esta].nombre, vec[esta].sexo, vec[esta].sueldo);
               }

            }

}

