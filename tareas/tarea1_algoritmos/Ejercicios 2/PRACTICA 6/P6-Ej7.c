#include<stdio.h>

long FactorialEntero(int);
void LlenarVector(int[],int);
void OrdenarVector(int[],int);
void ImprimirVector(int[],int);

int main(){

    int opcion, entero, n, v[100];
    long factorial;

    do{

        printf("\nMENU");
        printf("\n1. Factorial de un numero entero positivo");
        printf("\n2. Cargar y ordenar en orden descendente un vector de diez elementos");
        printf("\n3. Salir");
        printf("\nSeleccione opcion: ");
        scanf("%d",&opcion);

        while(opcion <= 0 || opcion >=4){

            printf("ERROR. La opcion seleccionada no existe en el menu./nIngrese otra opcion: ");
            scanf("%d",&opcion);
        }

        switch(opcion){

            case 1:
                printf("Ingrese un numero entero positivo: ");
                scanf("%d",&entero);

                factorial = FactorialEntero(entero);

                printf("El factorial del entero positivo es %ld",factorial);
                break;

            case 2:

                printf("Ingresar la cantidad de elementos del vector: ");
                scanf("%d",&n);

                LlenarVector(v,n);
                OrdenarVector(v,n);
                ImprimirVector(v,n);
                break;

            default:
        }

    }while(opcion != 3);

    printf("\nUsted salio del menu.");

    return 0;
}
long FactorialEntero(int n){

    long num = 1;

    for(int i=1; i<=n; i++){

        num *= i;
    }

    return num;
}
void LlenarVector(int v[],int n){

    printf("Ingrese los elementos del vector:\n");

    for(int i=0; i<n; i++){

        printf("Elemento[%d]: ",i);
        scanf("%d",&v[i]);
    }
}
void OrdenarVector(int v[],int n){

    int min, aux;

    for(int i=0; i<n; i++){

        min = i;

        for(int j=i+1; j<n; j++){

            if(v[j] < v[min]){

                min = j;
            }
        }

        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}
void ImprimirVector(int v[],int n){

    printf("El vector es: ");

    for(int i=0; i<n; i++){

        printf("%d   ",v[i]);
    }
}