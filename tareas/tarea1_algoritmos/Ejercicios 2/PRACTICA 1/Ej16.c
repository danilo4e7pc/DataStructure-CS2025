#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){

    float ang, rad;

    printf("Ingrese los grados sexagesimales del angulo: ");
    scanf("%f",&ang);

    rad = ang*PI/180;

    printf("El seno del angulo es: %.2f",sin(rad));
    printf("El coseno del angulo es: %.2f",cos(rad));
    printf("La arcotangente del angulo es: %.2f",atan(rad));

    return 0;
}