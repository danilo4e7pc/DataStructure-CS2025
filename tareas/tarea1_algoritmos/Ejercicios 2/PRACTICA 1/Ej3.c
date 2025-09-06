#include<stdio.h>

int main(){

    float pies;

    printf("Ingrese la medida en pies: ");
    scanf("%f",&pies);

    float pulgadas = pies/12;
    float yardas = 3*pies;
    float cm = pulgadas/2.54;
    float m = 100*cm;
    printf("El numero de pulgadas es: %.2f",pulgadas);
    printf("\nEl numero de yardas es: %.2f",yardas);
    printf("\nEl numero de centimetros es: %.2f",cm);
    printf("\nEl numero de metros es: %.2f",m);

    return 0;
}