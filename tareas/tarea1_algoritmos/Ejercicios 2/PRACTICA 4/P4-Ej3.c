#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n;
    char cliente[30];

    printf("Ingrese su nombre: ");
    scanf("%s",cliente);
    printf("Cantidad de articulos: ");
    scanf("%d",&n);

    // Reservando memoria para un arreglo de punteros (char*)
    char **articulos = malloc(n*sizeof(char*));
    for(int i=0; i<n; i++){

        // Reservando memoria (30) para cada puntero (cadena) dentro del arreglo
        articulos[i] = malloc(30 * sizeof(char));
    }

    // Reservando memoria para los siguientes arreglos
    float *Precio = malloc(n * sizeof(float));
    float *pTotal = malloc(n * sizeof(float));
    int *cantidad = malloc(n * sizeof(int));

    printf("Datos de cada articulo\n");
    for(int i=0; i<n; i++)
    {
        printf("\nArticulo %d",i+1);
        printf("\nDescripcion: ");
        getchar();
        fgets(articulos[i],30,stdin);
        articulos[i][strcspn(articulos[i],"\n")] = '\0';

        printf("Cantidad: ");
        scanf("%d",&cantidad[i]);
        printf("Precio unitario: ");
        scanf("%f",&Precio[i]);
        pTotal[i] = Precio[i] * cantidad[i];
    }

    float subtotal = 0;

    printf("\t  FACTURA\n");
    printf("NOMBRE DEL CLIENTE: %s\n",cliente);
    printf("ARTICULO\tCANTIDAD    PRECIO UNITARIO   PRECIO TOTAL\n"); 

    for(int i=0; i<n; i++){

        printf("%s\t   %d \t\t%.2f\t\t %.2f\n",articulos[i],cantidad[i],Precio[i],pTotal[i]);
        subtotal += pTotal[i];
    }

    float impuesto = subtotal * 0.19;
    float total = subtotal + impuesto;

    printf("\t\tSUBTOTAL\t\t%.3f\n",subtotal);
    printf("\t\tIMPUESTO\t\t%.3f\n",impuesto);
    printf("\t\tTOTAL\t\t\t%.3f\n",total);

    free(Precio);
    free(pTotal);
    free(cantidad);
    
    for(int i=0; i<n; i++){

        // Liberamos la memoria de cada cadena dentro de "**nombres"
        free(articulos[i]);
    }

    // Finalmente, liberamos la memoria del arreglo de punteros
    free(articulos);

    return 0;
}