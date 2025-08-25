#include<stdio.h>

#include<math.h>

int main(){

    float x, y, z, w, r1, r2, F;

    printf("valor de W: ");
    scanf("%f",&w);
    printf("valor de X: ");
    scanf("%f",&x);
    printf("valor de Y: ");
    scanf("%f",&y);
    printf("valor de Z: ");
    scanf("%f",&z);

    r1 = 4*x*x*y*y*sqrt(2*z*w);
    r2 = 4*sqrt(x);

    F = (r1*r1)/r2;

    printf("El valor de F es entonces: %fxb^(3/4)",F);

    return 0;
}