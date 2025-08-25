#include<stdio.h>

#define PI 3.14159

int main(){

    float r, A, V;

    printf("Ingrese el radio de la esfera: ");
    scanf("%f",&r);

    A = 4*PI*r*r;
    V = (4/3)*PI*r*r*r;

    printf("El area de la esfera es: %.3f",A);
    printf("\nEl volumen de la esfera es: %.3f",V);

    return 0;
}