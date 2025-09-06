/*
Escribir una función CALCULA que:
- Reciba como parámetros dos variables enteras, X y Y.
- Devuelva en X la suma de X y Y.
- Devuelva en Y la resta de X y Y.
- Pregunta: ¿el paso de parámetros a la función debe hacerse por valor o por referencia?
*/

#include<stdio.h>

void CALCULA(int *x, int *y){

    /*Respuesta a la pregunta: 

        El paso de parametros se hace por referencia ya que estamos cambiando el valor de las 
        variables X y Y (con su suma y resta respectivamente) para luego imprimirlas en la funcion principal.
    */

    int aux;

    aux = *x;
    *x += *y;
    *y = aux - *y;
}

int main(){

    int X, Y;

    printf("Ingrese el valor de X: ");
    scanf("%d",&X);
    printf("Ingrese el valor de Y: ");
    scanf("%d",&Y);

    CALCULA(&X,&Y);

    printf("La suma de los numeros es: %d",X);
    printf("\nLa resta de los numeros es: %d",Y);

    return 0;
}
