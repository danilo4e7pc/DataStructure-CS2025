#include<stdio.h>

#define v 300000

int main(){

    int seg;
    long dist;

    printf("Ingrese el tiempo en segundos: ");
    scanf("%d",&seg);

    dist = seg*v;

    printf("La distancia que se recorrio en ese tiempo es: %ld ",dist);

    return 0;
}