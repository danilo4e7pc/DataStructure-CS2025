#include "Circunferencia.h"
#include <stdio.h>
#include <math.h>

Punto crearPunto(double x, double y) {
    Punto p; 
    p.x = x; 
    p.y = y; 
    return p;
}

Circun crearCircun(double radio, Punto centro){
    Circun c;
    c.centro = centro;
    c.radio = radio;
    return c;
}

int verificar_pertenece(Circun c, Punto p) {

    double operacion, radCuadrado;

    operacion = pow((p.x - c.centro.x),2) + pow((p.y - c.centro.y),2);
    radCuadrado = c.radio*c.radio;

    if (operacion <= radCuadrado) return 1;

    return 0;
}
