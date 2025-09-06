/*
Hacer una función que:
- Reciba 3 números como parámetros: A, B y C.
- Los ordene de tal forma que, al final de la función, A contenga el menor número y C el mayor.
- Hacer un programa que reciba 3 números del usuario, llame a la función y muestre los números ordenados.
*/

#include<stdio.h>

void MenorAMayor(int *a, int *b, int *c){

    int aux;

    if(*a >= *b){ // a >= b

        if(*b > *c){ // a >= b > c

            aux = *a;
            *a = *c;
            *c = aux;
        }
        else{

            if(*a >= *c){ // a >= c > b

                aux = *a;
                *a = *b;
                *b = *c;
                *c = aux;

            }
            else{        // c > a > b

                aux = *b;
                *b = *a;
                *a = aux;
            }
        }
    }
    else{ // a < b

        if(*b > *c){ 

            if(*a < *c){ // a < c < b

                aux = *b;
                *b = *c;
                *c = aux;
            }
            else{       // c < a < b

                aux = *b;
                *b = *a;
                *a = aux;
            }
        }
    }
}

int main(){

    int a, b, c;

    printf("Ingrese un numero entero 'a': ");
    scanf("%d",&a);
    printf("Ingrese un numero entero 'b': ");
    scanf("%d",&b);
    printf("Ingrese un numero entero 'c': ");
    scanf("%d",&c);

    MenorAMayor(&a,&b,&c);

    printf("Nuevo valor de 'a': %d",a);
    printf("\nNuevo valor de 'b': %d",b);
    printf("\nNuevo valor de 'c': %d",c);

    return 0;
}
