/*
Hacer una función con las siguientes características:
- Reciba dos números enteros del usuario.
- Devuelva 1 si los números son iguales, 0 si son diferentes y –1 si la suma o el producto desbordan el rango de los enteros. 
  Además, debe retornar la suma y el producto de los dos números.
- Hacer un programa que reciba dos números del usuario, llame a la función y muestre si los números son iguales. 
  Además, debe mostrar su suma y su producto.
*/

#include<stdio.h>

int Igualdad(int *x, int *y){

    int var;

    if(*x == *y) var = 1;
    else var = 0;

    long long aux1 = *x;

    long long suma = aux1 + *y, prod = (*y) * (aux1);

    if(suma > 2147483647 || suma < -2147483648 || prod > 2147483647 || prod < -2147483648) var = -1;

    int aux2;

    *x = (int)suma;
    *y = (int)prod;

    return var;
}

int main(){

    int n1, n2, esIgual;

    printf("Ingrese el primer numero: ");
    scanf("%d",&n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&n2);

    esIgual = Igualdad(&n1,&n2);

    switch(esIgual)
    {
        case 1: printf("Los numeros son iguales");    break;
        case 0: printf("Los numeros no son iguales"); break;
        case -1: printf("La suma o producto de ambos numeros rebasa el rango de enteros");
    }

    printf("\nLa suma de los numeros es: %d",n1);
    printf("\nEl producto de los numeros es: %d",n2);

    return 0;
}
