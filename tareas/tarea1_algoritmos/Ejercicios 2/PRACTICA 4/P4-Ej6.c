#include<stdio.h>

int main(){

    int n;

    printf("Ingrese la cantidad de viajes realizados:");
    scanf("%d",&n);

    int personas;
    float peso, promPers = 0, promPeso = 0;

    for(int i=0; i<n; i++)
    {
        printf("Viaje %d: ",i+1);
        printf("\nCantidad de personas: ");
        scanf("%d",&personas);
        printf("Peso de viaje: ");
        scanf("%f",&peso);
        printf("\n");

        promPers += personas;
        promPeso += peso;
    }

    printf("ESTADISTICA DEL DIA");
    printf("\n\nCANTIDAD DE VIAJES: %d",n);
    printf("\nCANTIDAD DE PERSONAS TRANSPORTADAS: %.0f",promPers);
    printf("\nPESO TRANSPORTADO (KILOS): %.2f",promPeso);

    promPers /= n;
    promPeso /= n;

    printf("\nPROMEDIO DE PERSONAS POR VIAJE: %.2f",promPers);
    printf("\nPROMEDIO DE PESO POR VIAJE: %.2f",promPeso);

    return 0;
}