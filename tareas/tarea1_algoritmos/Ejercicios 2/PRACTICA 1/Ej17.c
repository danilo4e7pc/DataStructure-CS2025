#include<stdio.h>
#include<math.h>

int main(){

    float A, B, prod, W, Y, Z;

    printf("Ingrese el valor de A: ");
    scanf("%f",&A);
    printf("Ingrese el valor de B: ");
    scanf("%f",&B);

    prod = A*B;
    prod *= prod;

    Y = 3*prod*sqrt(2*A);

    W = sqrt(pow(2,A)*A)*Y;

    Z = Y/W;

    printf("El valor de Y es: %.3f",Y);
    printf("\nEl valor de W es: %.3f",W);
    printf("\nEl valor de Z es: %.3f",Z);

    return 0;
}