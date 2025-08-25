#include<stdio.h>

int main() {
    double numero, error, x, siguiente;

    printf("Ingrese un numero entero positivo: ");
    scanf("%lf", &numero);

    printf("Ingrese el error maximo permitido: ");
    scanf("%lf", &error);

    if (numero < 0) {

        printf("No se puede calcular la raiz cuadrada de un numero negativo.\n");
        return 1;
    }

    // Metodo de Newton-Raphson
    x = numero / 2.0;
    if (x == 0) x = 1;  

    do {

        siguiente = 0.5 * (x + numero / x);

        if ( (siguiente - x < 0 ? -(siguiente - x) : (siguiente - x)) < error ) {
            
            break;
        }

        x = siguiente;

    } while (1);

    printf("La raiz cuadrada aproximada de %.0f es: %.6f\n", numero, siguiente);

    return 0;
}