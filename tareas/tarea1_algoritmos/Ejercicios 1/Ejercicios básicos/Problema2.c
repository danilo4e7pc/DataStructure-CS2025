#include<stdio.h>
#include<math.h>

typedef struct{

    float x, y, z;

}Punto;

Punto IniciarCoordenadas();

int main(){

    Punto p1, p2;

    printf("Ingrese las coordenadas del primer punto:\n");
    p1 = IniciarCoordenadas();

    printf("Ingrese las coordenadas del segundo punto:\n");
    p2 = IniciarCoordenadas();

    float d = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y) + (p2.z - p1.z)*(p2.z - p1.z));

    printf("La distancia entre los dos puntos es: %.2f",d);

    return 0;
}
Punto IniciarCoordenadas(){

    Punto p;

    printf("x = "); scanf("%f",&p.x);
    printf("y = "); scanf("%f",&p.y);
    printf("z = "); scanf("%f",&p.z);

    return p;
}