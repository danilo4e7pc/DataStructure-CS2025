#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void LlenarVector(int[],int);
void OrdenarVector(int[],int);
void ConcatenarVectoresOrdenados(int[],int,int[],int[],int);
void ImprimirVector(int[], int);

int main(){

    srand(time(NULL));

    int v1[50], v2[50], V[100];

    LlenarVector(v1,50);
    OrdenarVector(v1,50);
    printf("El Vector 1 ordenado:\n");
    ImprimirVector(v1,50);

    LlenarVector(v2,50);
    OrdenarVector(v2,50);
    printf("\nEl Vector 2 ordenado:\n");
    ImprimirVector(v2,50);

    ConcatenarVectoresOrdenados(V,100,v1,v2,50);
    printf("\nEl Vector concatenado ordenado es entonces:\n");
    ImprimirVector(V,100);

    return 0;
}
void LlenarVector(int v[],int n){

    for(int i=0; i<n; i++){

        v[i] = rand()%100;
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
void ConcatenarVectoresOrdenados(int t[],int m,int v1[],int v2[],int n){

    for(int i = 0; i < n; i++){

        t[i] = v1[i];
    }
    for(int i = n; i < m; i++){

        t[i] = v2[i-n];
    }
    
    OrdenarVector(t,m);
}
void ImprimirVector(int v[], int n){

    for(int i=0; i<n; i++){

        printf("%d  ",v[i]);
    }
}