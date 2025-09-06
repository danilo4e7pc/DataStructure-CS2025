/*
Hacer un programa que:
- Declare variables a, b, c, d del tipo int.
- Declare variables e, f, g, h del tipo float.
- Declare un vector v de 10 elementos del tipo char.
- Declare una variable x del tipo int.
- Cree un puntero que apunte a la dirección de a.
- Incremente el puntero mostrando el contenido de la dirección apuntada (en forma de número). 
  En caso de que la dirección coincida con la dirección de alguna otra variable, informar el hecho.
*/

#include<stdio.h>

int main(){

    int a, b, c, d;
    float e, f, g, h;
    char v[] = "abecedario";
    int x;

    int *p;
    p = &a;

    for(int i=1; i<100;i++){

        printf("\nIteracion %d:",i);
        printf("\nValor del puntero: %d\nDireccion que apunta el puntero: %p\n",*p,p);

        if(p == &b) printf("Puntero apunta a la variable 'b'\n");
        if(p == &c) printf("Puntero apunta a la variable 'c'\n");
        if(p == &d) printf("Puntero apunta a la variable 'd'\n");
        if((float*)p == &e) printf("Puntero apunta a la variable 'e'\n");
        if((float*)p == &f) printf("Puntero apunta a la variable 'f'\n");
        if((float*)p == &g) printf("Puntero apunta a la variable 'g'\n");
        if((float*)p == &h) printf("Puntero apunta a la variable 'h'\n");
        if((char*)p == v) printf("Puntero apunta a la variable 'h'\n");
        if(p == &x) printf("Puntero apunta a la variable 'x'\n");

        p = p+i;

    }

    return 0;
}