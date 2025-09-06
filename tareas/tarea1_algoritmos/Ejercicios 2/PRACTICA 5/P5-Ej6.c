#include<stdio.h>
#include<math.h>

float sumatoria();

int main(){

    float s = sumatoria();

    printf("El resultado de la sumatoria es %.3f",s);

    return 0;
}
float sumatoria(){

    int i=2;
    float suma = 0.0;

    while(i<=1500){

        suma += sqrt(i);

        i += 2;
    }

    return suma;
}