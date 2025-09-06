/*Hacer una función que:
- Reciba dos punteros a char (char*) como parámetro y un número que represente una cierta cantidad de caracteres.
- Busque, en el vector apuntado por el parámetro 1, el primer carácter de espacio (‘ ’) o el final del vector 
  (representado por la cantidad proporcionada en el parámetro 3).
- Copie los caracteres anteriores al espacio en el vector indicado por el segundo parámetro.
- Retorne el número de caracteres copiados.
*/

#include<stdio.h>
#include<string.h>

int CharCopiados(char *a, char *b, int n){

    int j = 0;

    for(int i=0; i<n; i++){

        if(a[i] == ' '){

            b[j] = a[i-1];
            j++;
        }
    }

    b[j] = '\0';

    printf("%s",b);

    return strlen(b);
}

int main(){

    char a[50];
    char b[50];
    int n, cant;

    printf("Ingrese una cadena de caracteres: ");
    fgets(a,sizeof(a),stdin);

    n = strlen(a);
    cant = CharCopiados(a, b, n);

    printf("\nLa cantidad de caracteres previos al espacio es: %d",cant);

    return 0;
}
