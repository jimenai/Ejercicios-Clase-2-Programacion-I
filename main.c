#include <stdio.h>
#include <stdlib.h>

int main()
{
   ejercicio1();

}
/*
float sacarPromedio(int suma, int cantidad){

    float promedio;

    promedio = (float)suma/cantidad;

    return promedio;
}

 int pedirNota (void){

    int nota;

    do{
        printf("Ingrese nota: ");
        scanf("%d", &nota);

    }while(nota>10 || nota < 0);

    return nota;
 }


 int aprobarMateria(int notaMinima, int nota){
    int valor;
    if(nota >= notaMinima){
        valor = 1;
    }
    else{
        valor = 0;
    }
    return valor;
 }
 */
 void ejercicio1(void){

    float promedioAprobados;
    float promedioDesaprobados;
    int nota;
    int sumarAprobados = 0;
    int cantidadAprobados = 0;
    int sumarDesaprobados = 0;
    int cantidadDesaprobados = 0;
    int i;

    for(i=0; i<5; i++){
        printf("Ingrese nota: ");
        scanf("%d", &nota);

        if(nota >= 6){
            sumarAprobados += nota;
            cantidadAprobados++;
        }
        else{
            sumarDesaprobados += nota;
            cantidadDesaprobados++;
        }
    }

    promedioAprobados = (float)sumarAprobados/cantidadAprobados;
    promedioDesaprobados = (float)sumarDesaprobados/cantidadDesaprobados;

    printf("Promedio desaprobados: %.2f \n", promedioDesaprobados);
    printf("Promedio aprobados: %.2f \n", promedioAprobados);




 }


