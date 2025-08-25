#include <stdio.h>
#include <string.h>

char *unidades[] = {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
char *decenas[]  = {"","diez","veinte","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"};
char *especiales[] = {"","once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
char *centenas[] = {"","cien","doscientos","trescientos","cuatrocientos","quinientos","seiscientos","setecientos","ochocientos","novecientos"};

void leerTresCifras(int num, char *buffer) {

    int c = num / 100;
    int d = (num % 100) / 10;
    int u = num % 10;
    buffer[0] = '\0'; 

    if (c > 0) {

        if (c == 1 && (d > 0 || u > 0)) strcat(buffer, "ciento ");

        else {

            strcat(buffer, centenas[c]);
            strcat(buffer, " ");
        }
    }

    if (d == 1 && u > 0) {

        strcat(buffer, especiales[u]);
        strcat(buffer, " ");
    } 
    else {

        if (d > 0) {
            strcat(buffer, decenas[d]);
            strcat(buffer, " ");
        }
        if (u > 0 || (c == 0 && d == 0)) {
            strcat(buffer, unidades[u]);
            strcat(buffer, " ");
        }
    }
}

int main() {
    long num;

    printf("Ingrese un numero (hasta 9 digitos): ");
    scanf("%ld", &num);

    if (num == 0) {
        printf("cero\n");
        return 0;
    }

    int millones = num / 1000000;
    int miles = (num / 1000) % 1000;
    int resto = num % 1000;

    char resultado[1024] = "";
    char buffer[128];

    if (millones > 0) {

        leerTresCifras(millones, buffer);
        strcat(resultado, buffer);
        
        if (millones == 1) strcat(resultado, "millon ");
        else strcat(resultado, "millones ");
    }

    if (miles > 0) {

        leerTresCifras(miles, buffer);
        strcat(resultado, buffer);
        strcat(resultado, "mil ");
    }

    if (resto > 0) {

        leerTresCifras(resto, buffer);
        strcat(resultado, buffer);
    }

    printf("Numero en palabras: %s\n", resultado);

    return 0;
}