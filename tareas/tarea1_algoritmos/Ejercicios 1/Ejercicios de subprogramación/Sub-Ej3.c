#include<stdio.h>

int ObtenerCentenas(int);
int ObtenerDecenas(int);
int ObtenerUnidades(int);
void ImprimirEnRomano(int);

int main(){

    int n;

    printf("Digiste un numero de hasta 3 cifras: ");
    scanf("%d",&n);

    ImprimirEnRomano(n);

    return 0;
}
int ObtenerCentenas(int n){
    return n/100;
}
int ObtenerDecenas(int n){
    return (n%100)/10;
}
int ObtenerUnidades(int n){
    return n%10;
}
void ImprimirEnRomano(int n){

    int c, d, u;

    c = ObtenerCentenas(n);
    d = ObtenerDecenas(n);
    u = ObtenerUnidades(n);
    
    switch(c){

        case 0: break;
        case 1:
            printf("C"); break;

        case 2:
            printf("CC"); break;

        case 3:
            printf("CCC"); break;

        case 4:
            printf("CD"); break;

        case 5:
            printf("D"); break;

        case 6:
            printf("DC"); break;

        case 7:
            printf("DCC"); break;

        case 8:
            printf("DCCC"); break;

        case 9:
            printf("CM");
    }

    switch(d){
        
        case 0: break;
        case 1:
            printf("X"); break;

        case 2:
            printf("XX"); break;

        case 3:
            printf("XXX"); break;
            
        case 4:
            printf("XL"); break;

        case 5:
            printf("L"); break;

        case 6:
            printf("LX"); break;

        case 7:
            printf("LXX"); break;

        case 8:
            printf("LXXX"); break;

        case 9:
            printf("XC");
    }

    switch(u){
        
        case 0: break;

        case 1:
            printf("I"); break;

        case 2:
            printf("II"); break;

        case 3:
            printf("III"); break;

        case 4:
            printf("IV"); break;

        case 5:
            printf("V"); break;

        case 6:
            printf("VI"); break;

        case 7:
            printf("VII"); break;

        case 8:
            printf("VIII"); break;

        case 9:
            printf("IX"); 
    }
}