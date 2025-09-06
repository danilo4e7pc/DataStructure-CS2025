#include<stdio.h>

int main(){

    float A,B,C;

    printf("Ingrese el tamaño de los angulos de un triangulo(en grados sexagesimales):\n");
    printf("A = ");     scanf("%f",&A);
    printf("B = ");     scanf("%f",&B);
    printf("C = ");     scanf("%f",&C);

    if(A < 90){

        if(B < 90){

            if(C < 90) printf("El triangulo es agudo");

            else{

                if(C == 90) printf("El triangulo es rectangulo");
                else printf("El triangulo es obtuso");
            }
        }

        else{

            if(B == 90) printf("El triangulo es rectangulo");
            else printf("El triangulo es obtuso");
        }

    }

    else{

        if(A == 90) printf("El triangulo es rectangulo");
        else printf("El triangulo es obtuso");
    }

    return 0;
}