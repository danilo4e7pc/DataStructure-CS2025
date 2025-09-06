#include<stdio.h>

int main(){

    float costo, PV;
    char articulo[30];

    printf("Ingrese el nombre del articulo: ");
    fgets(articulo,sizeof(articulo),stdin);

    printf("Digite el costo del articulo: ");
    scanf("%f",&costo);

    PV = costo*(1+1.5)*(1+(19/100));

    printf("El precio de venta del producto es: %.2f",PV);

    return 0;
}