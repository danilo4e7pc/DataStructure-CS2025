#include<stdio.h>

void LlenarPrimos(int[],int);
void MostrarVector(int[],int);

int main(){

    int v[10];

    LlenarPrimos(v,10);
    MostrarVector(v,10);

    return 0;
}
void LlenarPrimos(int v[],int n){

    int cant = 0, i = 1;

    while(cant <= n){

        int cont = 0;

        for(int j=1; j<=i; j++){

            if(i%j == 0){
                cont++;
            }
        }

        if(cont  == 2){

            v[cant] = i;
            cant++;
        }

        i++;
    }
}

void MostrarVector(int v[],int n){

    printf("\nMostrando elementos del Vector\n");

    for(int i=0; i<n; i++){

        printf("%d\t",v[i]);
    }
}