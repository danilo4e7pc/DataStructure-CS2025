#include<stdio.h>

void Sumatoria(int,int*);

int main(){

    int N, S;
    printf("Ingrese un numero N: ");
    scanf("%d",&N);

    Sumatoria(N, &S);

    printf("La sumatoria de cuadrados hasta N es: %d",S);

    return 0;
}
void Sumatoria(int n, int *s){

    *s = (n*(n+1)*(n*2 +1))/6; 
}