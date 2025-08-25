#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void LlenarDatosRandom(int[],int);
void OrdenarVector(int[], int);
void ImprimirVector(int[],int);

int main(){

    int v[100];

    LlenarDatosRandom(v,100);
    OrdenarVector(v,100);
    ImprimirVector(v,100);

    return 0;
}
void LlenarDatosRandom(int v[],int n){

    srand(time(NULL));

    for(int i=0; i<n; i++){

        v[i] = rand()%100;
    }
}
void OrdenarVector(int v[], int n){

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

    for(int i=0; i<n; i++){

        printf("%d  ",v[i]);
    }
}