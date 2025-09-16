#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Circunferencia.h"

int main() {
    
    Punto p0 = crearPunto(0,0);
    Punto p1 = crearPunto(10,10);
    Circun c = crearCircun(3,p0);

    printf("Coordenadas del centro: %lf %lf \nRadio: %lf \nCoordenadas del punto a verificar: %lf %lf",p0.x,p0.y,c.radio,p1.x,p1.y);

    if(verificar_pertenece(c,p1) == 0) printf("\nNo pertenece\n");
    else printf("Si pertenece\n");

    return 0;
}
