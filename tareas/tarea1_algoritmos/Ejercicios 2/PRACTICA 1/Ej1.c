#include<stdio.h>
#define G 6.673

int main(){

    float m1, m2, d;

    printf("Ingrese la masa 1(en g): ");
    scanf("%f",&m1);

    printf("Ingrese la masa 2(en g): ");
    scanf("%f",&m2);

    printf("Ingrese la distancia entre ambas masas(en cm): ");
    scanf("%f",&d);

    double Fg = (G*m1*m2)/(d*d);

    printf("La fuerza Gravitacional es igual a: %lfx10^(-8) dinas",Fg);

    return 0;
}