#include<stdio.h>
#include<stdbool.h>

void LlenarVector(int[],int);
bool VectorSimetrico(int[],int);

int main(){

    int n, v[100];

    printf("Ingrese la cantidad de elementos del vector: ");
    scanf("%d",&n);

    LlenarVector(v,n);
    bool EsSimetrico = VectorSimetrico(v,n);

    if(EsSimetrico) printf("El vector es simetrico");
    else printf("El vector no es simetrico");

    return 0;
}
void LlenarVector(int v[],int n){

    printf("Elementos del vector:\n");

    for(int i=0; i<n; i++){

        printf("Elemento[%d]: ",i);
        scanf("%d",&v[i]);
    }
}
bool VectorSimetrico(int v[],int n){

    int n2 = n/2;
    bool simetrico = true;

    for(int i=0; i<n2; i++){

        if(v[i] != v[n-i-1]){

            simetrico = false;
        }
    }

    return simetrico;
}