/*
Hacer un programa que:
- Reciba del usuario la cantidad N de números a ser digitados. A continuación, el programa debe asignar dinámicamente un vector 
  de N enteros, recibir N números del usuario y almacenarlos en el vector, y luego mostrar:
  . el mayor valor del vector,
  . el menor valor del vector,
  . y el promedio de los valores.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int N;

    printf("Cantidad de numeros que va a digitar: ");
    scanf("%d",&N);

    int *v = malloc(N * sizeof(int));

    for(int i=0; i<N; i++){

        printf("Valor %d: ",i+1);
        scanf("%d",&v[i]);
    }

    int min = 0, max = 0;
    float prom = 0.0;

    for(int i=0; i<N; i++){

        if(v[max] < v[i]){
    
            max = i;
        }

        if(v[min] > v[i]){

            min = i;
        }

        prom += v[i];
    }

    prom /= N;

    printf("El menor valor del arreglo es: %d",v[min]);
    printf("\nEl mayor valor del arreglo es: %d",v[max]);
    printf("\nEl promedio de los valores del arreglo es: %.2f",prom);

    free(v);
    v = NULL;

    return 0;
}