#include<stdio.h>

int main(){
 
    /*
    1 unidad de Producto A requiere:
        Material 1: 3 unidades
        Material 2: 4 unidades
        Material 3: 1 unidad
        Material 4: 2 unidades
        Material 5: 3 unidades
        Material 6: 2 unidades
    */

    float costos[6], total = 0.0;
    int cUnidades, cUnid[6];

    printf("Ingrese el costo de una unidad de cada material:\n");
    for(int i=0; i<6; i++)
    {
        printf("Material %d: ",i+1);
        scanf("%f",&costos[i]);
    }

    printf("Ingrese la cantidad de productos A que desea pedir (en unidades): ");
    scanf("%d",&cUnidades);

    cUnid[0] = 3*cUnidades;
    cUnid[1] = 4*cUnidades;
    cUnid[2] = cUnidades; 
    cUnid[3] = 2*cUnidades;
    cUnid[4] = 3*cUnidades;
    cUnid[5] = 2*cUnidades;

    printf("\tLISTADO DE MATERIALES REQUERIDOS\n");
    printf("MATERIAL   CANTIDAD DE UNIDADES\t   COSTO ESTIMADO\n"); 

    for(int i=0; i<6; i++)
    {
        printf("   %d\t\t   %d\t\t      %.3f\n",i+1,cUnid[i],cUnid[i]*costos[i]);
        total += cUnid[i]*costos[i];
    }

    printf("\t\t\t   COSTO TOTAL\t%.3f",total);

    return 0;
}