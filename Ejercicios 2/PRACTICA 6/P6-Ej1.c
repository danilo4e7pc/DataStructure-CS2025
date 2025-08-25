#include<stdio.h>

void LlenarVector(int[],int);
int SumaElementos(int[],int);
float MediaAritmetica(int[],int);

int main(){

    int V[20], suma;

    LlenarVector(V,20);
    suma = SumaElementos(V,20);

    printf("La suma de los elementos del vector es: %d",suma);

    float media = MediaAritmetica(V,20);

    printf("\nLa media aritmetica de los elementos del vector es: %.2f",media);

    return 0;
}
void LlenarVector(int v[],int n){

    for(int i=0; i<n; i++){

        printf("Ingrese el elemento %d del arreglo: ",i);
        scanf("%d",&v[i]);
    }
}
int SumaElementos(int v[],int n){

    int s = 0;

    for(int i=0; i<n; i++){

        s += v[i];
    }

    return s;
}
float MediaAritmetica(int v[],int n){

    int s = SumaElementos(v,n);

    return ((float)s)/n;
}