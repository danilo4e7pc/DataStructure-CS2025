#include<stdio.h>

int main(){
    
    int N, i = 2, suma = 0;

    printf("Ingrese un numero par: ");
    scanf("%d",&N);

    if(N < 2){

        printf("ERROR, El numero no puede ser menor que 2");
    }

    else{

        while(i <= N){

            suma += i;
            i +=2; 
        }

        printf("La suma de los numeros pares hasta el numero ingresado es: %d",suma);
    }

    return 0;
}