#include<stdio.h>

int main(){

    float a, b, c, d, e, f, s, x, y;

    printf("Sea el sistema de Ecuaciones Lineales:\nax + by = c\ndx + ey = f");

    printf("\nIngrese los valores de los coeficientes:\n");
    printf("a = "); scanf("%f",&a);
    printf("b = "); scanf("%f",&b);
    printf("c = "); scanf("%f",&c);
    printf("d = "); scanf("%f",&d);
    printf("e = "); scanf("%f",&e);
    printf("f = "); scanf("%f",&f);

    s = (a*e - b*d);

    if(s == 0){

        printf("ERROR, El sistema de ecuaciones lineales no posee solucion");
    }
    else{

        x = (c*e - b*f)/s;
        y = (a*f - c*d)/s;
    }

    printf("Las soluciones de x y y son:\nx = %.2f\ny = %.2f",x,y);

    return 0;
}