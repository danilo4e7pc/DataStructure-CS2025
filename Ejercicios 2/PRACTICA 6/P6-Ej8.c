#include<stdio.h>

void LlenarMatriz(int[50][50], int);
void DiferenciaMatrices(int[50][50],int[50][50],int[50][50],int);
void ImprimirMatriz(int[50][50],int);

int main(){

    int opcion, n, A[50][50], B[50][50], D[50][50];

    do{

        printf("\nMENU");
        printf("\n1. Cargar y realizar la diferencia de dos matrices del mismo orden A y B");
        printf("\n2. Salir");
        printf("\nSeleccione opcion: ");
        scanf("%d",&opcion);

        while(opcion <= 0 || opcion >=3){

            printf("ERROR. La opcion seleccionada no existe en el menu./nIngrese otra opcion: ");
            scanf("%d",&opcion);
        }

        if(opcion == 1){

            printf("Ingrese el orden de las matrices A y B: ");
            scanf("%d",&n);

            printf("Ingrese los elementos de la matriz A:\n");
            LlenarMatriz(A,n);

            printf("Ingrese los elementos de la matriz B:\n");
            LlenarMatriz(B,n);

            DiferenciaMatrices(D,A,B,n);
            ImprimirMatriz(D,n);
        }
    
    }while(opcion != 2);

    printf("\nUsted salio del menu.");

    return 0;
}
void LlenarMatriz(int matriz[50][50], int n){

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            printf("Elemento[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}
void DiferenciaMatrices(int dif[50][50],int m1[50][50],int m2[50][50],int n){

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            dif[i][j] = m1[i][j] - m2[i][j];
        }
    }
}
void ImprimirMatriz(int m[50][50],int n){

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            printf("%d\t",m[i][j]);
        }

        printf("\n");
    }
}