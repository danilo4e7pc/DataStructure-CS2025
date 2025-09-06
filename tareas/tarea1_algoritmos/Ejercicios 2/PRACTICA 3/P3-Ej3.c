#include<stdio.h>

int main(){

    float f1, f2, c;

    printf("Ingrese el valor inicial de grados Farenheit: ");
    scanf("%f",&f1);
    printf("Ingrese el valor final de grados Farenheit: ");
    scanf("%f",&f2);
    printf("\nFARENHEIT                   CELSIUS");
    printf("\n-----------------------------------");
    
    float i = f1;

    if(f1 < f2){

        while(i <= f2){

          c = (i - 32)*5/9;

          printf("\n  %.2f   -----------------  %.2f",i,c);

           i++;
        }
    }

    else{

        while(i >= f2){

          c = (i - 32)*5/9;

          printf("\n  %.2f   -----------------  %.2f",i,c);

           i--;
        }
    }

    return 0;
}