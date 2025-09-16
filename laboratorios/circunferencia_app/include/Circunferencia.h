#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

typedef struct {
    double x;
    double y;
} Punto;

typedef struct {
    double radio;
    Punto centro;
} Circun;

// Constructores
Punto crearPunto(double x, double y);
Circun crearCircun(double radio, Punto centro);

int verificar_pertenece(Circun c, Punto p); // return 0: no pertenece, return 1: caso contrario

#endif