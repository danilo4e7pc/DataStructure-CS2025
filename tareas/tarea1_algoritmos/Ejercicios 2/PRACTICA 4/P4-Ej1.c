#include<stdio.h>

int main(){

    char desc[30];
    int cant, num;
    float fcosto, costfijo, cprod = 0;

    printf("Numero de articulos a procesar: ");
    scanf("%d",&num);

    for(int i=0; i<num; i++){

        printf("ARTICULO %d",i+1);
        printf("\nDescripcion: ");
        scanf(" %s",&desc);
        printf("Cantidad de unidades producidas: ");
        scanf("%d",&cant);
        printf("Factor de costo de materiales: ");
        scanf("%f",&fcosto);
        printf("Costo fijo del articulo: ");
        scanf("%f",&costfijo);
        
        cprod += cant*fcosto + costfijo;

    }

    printf("TOTAL %d ARTICULOS         TOTAL COSTO GENERAL: %.3f",num,cprod);

    return 0;
}