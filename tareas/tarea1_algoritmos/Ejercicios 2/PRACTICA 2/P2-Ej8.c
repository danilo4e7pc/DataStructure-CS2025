#include <stdio.h>
#include <string.h>
#include <ctype.h>

char letraANumero(char letra) {
    letra = toupper(letra); 
    
    if (letra >= 'A' && letra <= 'C') return '2';
    if (letra >= 'D' && letra <= 'F') return '3';
    if (letra >= 'G' && letra <= 'I') return '4';
    if (letra >= 'J' && letra <= 'L') return '5';
    if (letra >= 'M' && letra <= 'O') return '6'; 
    if (letra >= 'P' && letra <= 'S') return '7';
    if (letra >= 'T' && letra <= 'V') return '8';
    if (letra >= 'W' && letra <= 'Z') return '9';

    return '?'; 
}

int main() {
    char apellido[50], nombre[50];
    char codigo[100] = ""; 

    printf("Ingrese el apellido: ");
    scanf("%s", apellido);

    printf("Ingrese el nombre: ");
    scanf("%s", nombre);

    for (int i = 0; i < strlen(apellido); i++) {
        char num = letra_a_numero(apellido[i]);
        if (num != '?') {
            strncat(codigo, &num, 1);
        }
    }

    strcat(codigo, "*");

    char inicial = letraANumero(nombre[0]);
    strncat(codigo, &inicial, 1);

    strcat(codigo, "*");

    printf("El codigo telefonico es: %s\n", codigo);

    return 0;
}