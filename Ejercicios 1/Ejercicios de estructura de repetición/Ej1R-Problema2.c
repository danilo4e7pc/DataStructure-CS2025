#include<stdio.h>

int CantidadDigitos(long);

int main(){

    long num;
    int ndigitos;

    printf("Ingrese un numero: ");
    scanf("%ld",&num);

    ndigitos = CantidadDigitos(num);

    printf("Cantidad de digitos del numero: %d",ndigitos);
    
    return 0;
}
int CantidadDigitos(long n){

    int cant = 0;

    while(n != 0){

        n = n/10;
        cant++;
    }

    return cant;
}