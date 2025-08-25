#include<stdio.h>

float funcionZ(float,float);

int main(){

    float x, y, z;

    for(int i=0; i<10; i++){

        printf("Iteracion %.d",i);
        printf("\nValor de x: ");
        scanf("%f",&x);
        printf("Valor de y: ");
        scanf("%f",&y);
        z = funcionZ(x,y);
        printf("EL valor de z es: %.2f\n\n",z);
    }

    return 0;
}
float funcionZ(float x,float y){

    float z = 1;

    if(x == 0){

        return 1;
    }

    else
        if(x > 0){

            for(int i=0; i<x; i++){

                z *= y;
            }

            return z;
        }
        else{

            x = -x;

            for(int i=0; i<x; i++){

                z *= y;
            }

            return 1/z;
        }
}