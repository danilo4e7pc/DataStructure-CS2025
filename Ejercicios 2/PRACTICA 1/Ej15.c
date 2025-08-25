#include<stdio.h>

#include<math.h>

int main(){

    double ang, tg, cot, sec, csc;

    printf("Ingrese un angulo en radianes: ");
    scanf("%lf",&ang);

    tg = tan(ang);
    cot = 1/tg;
    sec = 1/cos(ang);
    csc = 1/sin(ang);

    printf("La tangente del angulo es: %lf",tg);
    printf("\nLa cotangente del angulo es: %lf",cot);
    printf("\nLa secante del angulo es: %lf",sec);
    printf("\nLa cosecante del angulo es: %lf",csc);

    return 0;
}