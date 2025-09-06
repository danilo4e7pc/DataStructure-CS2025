/*
Hacer un programa que:
- Reciba una frase del usuario, carácter por carácter usando getch(), y la almacene en un vector (máx. 30 caracteres). 
  Cuando el usuario digite enter (‘\r’), la recepción se finaliza.
- Muestre cada palabra de la frase en una línea separada, utilizando la función del ejercicio 3.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char c, cad[30];
    int i = 0, n;

    do{

        c = getch();

        if(i<30){

            cad[i] = c;
            i++;
        }

        if(c == '\r') cad[i] = '\0';

    }while(c != '\r');

    n = strlen(cad);
    i = 0;

    while(cad[i] != '\0'){

        if(cad[i] == ' ') printf("\n");

        else printf("%c",cad[i]);

        i++;

        if(cad[i] == '\0') printf("\n");
    }

    return 0;
}

