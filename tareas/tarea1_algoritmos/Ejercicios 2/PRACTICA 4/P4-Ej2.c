#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    
    printf("Cantidad de articulos: ");
    scanf("%d",&n);

    // Reservando memoria para un arreglo de punteros (char*)
    char **articulos = malloc(n*sizeof(char*));
    for(int i=0; i<n; i++){

        // Reservando memoria (30) para cada puntero (cadena) dentro del arreglo
        articulos[i] = malloc(30 * sizeof(char));
    }

    // Reservando memoria para los siguientes arreglos
    float *cProd = malloc(n * sizeof(float));
    float *utilidad = malloc(n * sizeof(float));
    float *impuesto = malloc(n * sizeof(float));
    float *pVenta = malloc(n * sizeof(float));

    printf("Datos de cada articulo\n");

    for(int i=0; i<n; i++)
    {
        printf("\nArticulo %d",i+1);
        printf("\nDescripcion: ");
        getchar();
        fgets(articulos[i],30,stdin);
        articulos[i][strcspn(articulos[i],"\n")] = '\0';

        printf("Costo de produccion: ");
        scanf("%f",&cProd[i]);

        utilidad[i] = cProd[i]*1.2;
        impuesto[i] = (cProd[i] + utilidad[i])*0.15;
        pVenta[i] = cProd[i] + utilidad[i] + impuesto[i];
    }

    printf("\t\t\t\tPRECIOS DE VENTA\n");
    printf("ARTICULO\tCOSTO DE PRODUCCION\tUTILIDAD\tIMPUESTO\tPRECIO DE VENTA\n"); 

    float total = 0.0;

    for(int i=0; i<n; i++){

        printf("%s\t   %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",articulos[i],cProd[i],utilidad[i],impuesto[i],pVenta[i]);

        total += pVenta[i];
    }

    printf("\t\t\t\tTOTAL\t\t%.3f",total);

    free(cProd);
    free(utilidad);
    free(impuesto);
    free(pVenta);
    
    for(int i=0; i<n; i++){

        // Liberamos la memoria de cada cadena dentro de "**nombres"
        free(articulos[i]);
    }

    // Finalmente, liberamos la memoria del arreglo de punteros
    free(articulos);

    return 0;
}
