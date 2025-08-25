#include<stdio.h>

int main(){

    float x, y;

    printf("Ingrese el valor de x: ");
    scanf("%f",&x);

    if(x < 0){

        y = 3*x + 6;
    }
    else{

        y = x*x + 6;
    }

    printf("El valor de y es: %.2f",y);

    return 0;
}