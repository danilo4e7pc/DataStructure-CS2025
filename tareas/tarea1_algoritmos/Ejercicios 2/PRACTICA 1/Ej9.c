#include<stdio.h>

int main(){

    float C, F;

    printf("Ingrese la temperatura en centigrados: ");
    scanf("%f",&C);

    F = 1.8*C +32;

    printf("La temperatura en grados Farenheit es: %.3f",F);

    return 0;
}