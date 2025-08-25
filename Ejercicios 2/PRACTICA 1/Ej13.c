#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){

    double w, e, z;

    printf("Ingrese el valor de w: ");
    scanf("%d",&w);

    e = exp(-w*w/2);

    z = e/sqrt(2*PI);

    printf("El valor de z es entonces: %lf",z);

    return 0;
}