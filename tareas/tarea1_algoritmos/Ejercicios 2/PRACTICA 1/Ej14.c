#include <stdio.h>

int main() {

    float dolares, yenes, pesetas, libras, soles;

    printf("Ingrese la cantidad de dolares a comprar: ");
    scanf("%f", &dolares);

    printf("Ingrese el tipo de cambio (costo de 1 dolar en yenes): ");
    scanf("%f", &yenes);

    printf("Ingrese el tipo de cambio (costo de 1 dolar en pesetas): ");
    scanf("%f", &pesetas);

    printf("Ingrese el tipo de cambio (costo de 1 dolar en libras esterlinas): ");
    scanf("%f", &libras);

    printf("Ingrese el tipo de cambio (costo de 1 dolar en nuevos soles): ");
    scanf("%f", &soles);

    yenes *= dolares;
    pesetas *= dolares;
    libras *= dolares;
    soles *= dolares;

    printf("Cantidad a pagar en yenes: %.2f\n", yenes);
    printf("Cantidad a pagar en pesetas: %.2f\n", pesetas);
    printf("Cantidad a pagar en libras esterlinas: %.2f\n", libras);
    printf("Cantidad a pagar en nuevos soles: %.2f\n", soles);
}