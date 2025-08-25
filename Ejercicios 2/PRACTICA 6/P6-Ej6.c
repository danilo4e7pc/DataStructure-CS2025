#include<stdio.h>

void LlenarVector(int[],int);
void OrdenarVector(int[],int);
void ImprimirVector(int[], int);

int main(){

    int n, v[30];

    printf("Numero de elementos del vector: ");
    scanf("%d",&n);

    LlenarVector(v,n);
    OrdenarVector(v,n);
    ImprimirVector(v,n);

    return 0;
}
void LlenarVector(int v[],int n){

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
void ImprimirVector(int v[], int n){

    for(int i=0; i<n; i++){

        printf("%d\t",v[i]);
    }
}