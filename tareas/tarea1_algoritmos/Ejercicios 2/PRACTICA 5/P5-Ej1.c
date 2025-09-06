#include<stdio.h>

int f(int,int);

int main(){

    int x, y, func;

    printf("Ingrese el valor de x: ");
    scanf("%d",&x);
    printf("Ingrese el valor de y: ");
    scanf("%d",&y);

    func = f(x,y);

    printf("El resultado es: %d",func);

    return 0;
}

int f(int x,int y){

    int fx = 1, fy = 1, fxy = 1, xy = (x-y);

    for(int i=1; i<=x; i++){

        fx *= i;
    }
    for(int i=1; i<=y; i++){
        fy *= i;
    }
    for(int i=1; i<=xy; i++){

        fxy *= i;
    }

    return fx/(fy*fxy);
}