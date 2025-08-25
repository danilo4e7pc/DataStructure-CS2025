#include<stdio.h>

int main(){

    float ancho, largo, costo, area;

    printf("Ingrese el ancho del terreno(en m): ");
    scanf("%f",&ancho);
    printf("Ingrese el largo del terreno(en m): ");
    scanf("%f",&largo);
    printf("Ingrese el costo del terreno por metro cuadrado: ");
    scanf("%f",&costo);

    area = ancho*largo;
    costo *= area;

    if(area > 400){

        costo *= 0.9;
    }

    printf("El costo total del terreno es: %.2f",costo);

    return 0;
}