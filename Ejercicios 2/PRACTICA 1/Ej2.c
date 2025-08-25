#include<stdio.h>
#define c 2.99792458

int main(){

    float m;

    printf("Ingrese la masa (en g): ");
    scanf("%f",&m);

    long E = m*c*c;

    printf("La cantidad de energía producida por la masa es: %ldx10^20 ergios",E);

    return 0;
}