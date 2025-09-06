#include<stdio.h>

void CambiarDatos(float*, float*);

int main(){

    float n1, n2;

    printf("Ingrese un numero real 1: ");
    scanf("%f",&n1);
    printf("Ingrese un numero real 2: ");
    scanf("%f",&n2);

    CambiarDatos(&n1,&n2);

    printf("El numero real 1 ahora es: %f",n1);
    printf("\nEl numero real 2 ahora es: %f",n2);

    return 0;
}

void CambiarDatos(float *n1, float *n2){
    float aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}