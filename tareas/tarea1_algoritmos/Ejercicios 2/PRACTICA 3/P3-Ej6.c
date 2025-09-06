#include <stdio.h>

int main() {

    double saldo = 0.0;
    int tiempo = 120; 

    for (int i = 0; i < tiempo; i++) {
        saldo += 1000.0;    
        saldo *= (1 + 0.03);  
    }

    printf("El monto acumulado despues de 10 anios es: %.2lf nuevos soles\n", saldo);

    return 0;
}