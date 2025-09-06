#include<stdio.h>
#define PI 3.14159

void MenuArea(int);

int main(){

    int opcion;
    float area;

    do{
        printf("AREAS DE FIGURAS GEOMETRICAS");
        printf("\n----------------------------");
        printf("\n1. TRIANGULO");
        printf("\n2. CUADRADO");
        printf("\n3. RECTANGULO");
        printf("\n4. CIRCULO");
        printf("\n5. FIN");
        printf("\n----------------------------");
        printf("\nOPCION: ");
        scanf("%d",&opcion);

        while(opcion < 1 || opcion >= 6){

            printf("\nERROR, el numero ingresado no es una opcion valida\nIngrese otro porfavor: ");
            scanf("%d",&opcion);
        }

        MenuArea(opcion);

    }while(opcion != 5);

    return 0;
}
void MenuArea(int op){

    float area, base, altura, radio;

    switch(op){

        case 1:
            printf("\nIngrese la altura: ");
            scanf("%f",&altura);
            printf("Ingrese la base: ");
            scanf("%f",&base);
            area = (base*altura)/2;
            printf("El area del triangulo es: %.2f\n\n",area);
            break;

        case 2:
            printf("\nIngrese el lado: ");
            scanf("%f",&base);
            area = base*base;
            printf("El area del cuadrado es: %.2f\n\n",area);
            break;

        case 3:
            printf("\nIngrese la altura: ");
            scanf("%f",&altura);
            printf("Ingrese la base: ");
            scanf("%f",&base);
            area = base*altura;
            printf("El area del rectangulo es: %.2f\n\n",area);
            break;

        case 4:
            printf("\nIngrese el radio: ");
            scanf("%f",&radio);
            area = radio*radio*PI;
            printf("El area del circulo es: %.2f\n\n",area);
            break;

        case 5:
            printf("\nUsted ha salido del menu\n");

    }
    
}