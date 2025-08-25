#include<stdio.h>

int main(){

    char des[100];
    int cant;
    float total;

    printf("Ingrese la descripcion del articulo que se desea comprar: ");
    fgets(des,sizeof(des),stdin);
    printf("Ingrese la cantidad de unidades produciadas: ");
    scanf("%d",&cant);

    total = cant*3.5 + 10000;

    printf("\nEl costo total a pagar es: %.2f",total);

    return 0;
}