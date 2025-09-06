#include <stdio.h>

int main() {
    double inversionMensual, tasa, saldo;
    char opcion;

    printf("Ingrese la inversion mensual: ");
    scanf("%lf", &inversionMensual);

    printf("Ingrese la tasa de interes mensual (ejemplo 0.01 para 1%%): ");
    scanf("%lf", &tasa);

    saldo = 0;

    int anio = 1;
    do {
        
        for (int i = 0; i < 12; i++) {
            saldo += inversionMensual;        
            saldo *= (1 + tasa);              
        }

        printf("Saldo tras %d anio(s): %.15lf\n", anio, saldo);

        printf("Desea procesar un anio mas? (S/N): ");
        scanf(" %c", &opcion); 

        while(opcion != 's' && opcion == 'S' && opcion != 'n' && opcion != 'N'){

            printf("ERROR. Debe ingresar una de las opciones(S/N): ");
            scanf(" %c", &opcion);  
        }

        anio++;

    } while (opcion == 'S' || opcion == 's');

    printf("Programacion finalizado.\n");

    return 0;
}