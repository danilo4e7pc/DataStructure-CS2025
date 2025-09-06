#include<stdio.h>

int main(){

    float x, y;

    printf("Ingrese el valor de x: ");
    scanf("%f",&x);

    y = 3*x*x + 7*x - 15;

    printf("El valor de y es entonces: %.2f ",y);

    return 0;
}