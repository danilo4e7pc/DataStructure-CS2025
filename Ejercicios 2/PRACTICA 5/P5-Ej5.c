#include<stdio.h>

float Potencia(int,int);

int main(){

    int base, exp;
    float potencia;

    printf("Ingrese la base: ");
    scanf("%d",&base);
    printf("Ingrese el exponente: ");
    scanf("%d",&exp);

    potencia = Potencia(base,exp);

    printf("El resultado de la potencia es: %.2f",potencia);

    return 0;
}
float Potencia(int b,int e){

    float pot = 1;

    if(e == 0){

        return 1;
    }

    else
        if(e > 0){

            for(int i=0; i<e; i++){

                pot *= b;
            }

            return pot;
        }
        else{

            e = -e;

            for(int i=0; i<e; i++){

                pot *= b;
            }

            return 1/pot;
        }

}