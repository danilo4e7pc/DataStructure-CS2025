#include<stdio.h>

int main(){

    float ancho, longitud, costo, total;

    printf("Ingrese la anchura del terreno(en m): ");
    scanf("%f",&ancho);
    printf("Ingrese la longitud del terreno(en m): ");
    scanf("%f",&longitud);
    printf("Ingrese el costo del terreno por metro cuadrado: ");
    scanf("%f",&costo);

    total = ancho*longitud*costo;

    printf("El costo total del terreno es: %.3f",total);

    return 0;
}