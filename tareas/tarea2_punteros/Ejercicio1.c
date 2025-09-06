/*
Hacer una función FATORES que:
- Reciba 3 parámetros: un vector de enteros, un número entero n pasado por valor y otro número x pasado como puntero.
- Devuelva un número entero.
- Descomponga el número n en factores primos y los almacene en las posiciones del vector. El contenido de x debe recibir la cantidad de factores primos encontrados. 
  En caso de que el número de factores encontrados sea mayor que 10, la función debe retornar 1; en caso contrario, debe retornar 0.
*/

#include<stdio.h>
#include<stdbool.h>

int FATORES(int v[], int n, int *x){

    int k = 0, j;
    bool factor;

    for(int i=2; i<n; i++){

        if(n%i == 0){

            j = 2;
            factor = true;

            while(j < i && factor == true){

                if((i%j) == 0){

                    factor = false;
                }

                j++;
            }

            if(factor == true){

                v[*x] = i;
                *x = *x + 1;
            }
        }
    }

    if(*x > 10){

        return 1;
    }

    else

        return 0;
}

int main(){

    int n, a[50], x = 0, pos;

    printf("Ingrese un numero: ");
    scanf("%d",&n);

    pos = FATORES(a,n,&x);

    printf("Factor que regreso la funcion: %d",pos);
    printf("\nCantidad de factores primos encontrados: %d",x);

    return 0;
}
