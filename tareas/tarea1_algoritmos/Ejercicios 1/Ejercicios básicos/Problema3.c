#include<stdio.h>

int main(){

    char nombre[20];
    float precio, total;
    int CantUnid;

    printf("Ingrese el nombre del producto que desea comprar: ");
    scanf("%s",&nombre);

    printf("Ingrese el precio del producto: ");
    scanf("%f",&precio);

    while(precio <= 0){

        printf("ERROR, El precio ingresado debe ser un numero positivo\nIngrese un precio correcto: ");
        scanf("%f",&precio);
    }

    printf("Ingrese la cantidad de unidades compradas: ");
    scanf("%d",&CantUnid);

    while(CantUnid <= 0){

        printf("ERROR, La cantidad ingresada debe ser un numero positivo\nIngrese una cantidad correcta: ");
        scanf("%d",&CantUnid);
    }

    total = CantUnid * precio;

    if(CantUnid >= 11){

        if(CantUnid <= 20){

            total = (9*total)/10;
        }

        else{

            if(CantUnid <= 50){

                total = (4*total)/5;
            }

            else{

                total = (3*total)/4;
            }
        }
    }

    printf("El valor total de la cantidad de %s que compro es: %.2f ",nombre,total);

    return 0;
}