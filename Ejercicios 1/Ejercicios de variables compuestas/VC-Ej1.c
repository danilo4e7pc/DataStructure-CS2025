#include <stdio.h>

#define VACIO '.'
#define JUGADOR 'X'
#define RIVAL 'O'


int buscarJugada(char tablero[3][3], char simbolo, int *fila, int *columna) {
    
    for (int i = 0; i < 3; i++) {

        int cuenta = 0, vacio = -1;

        for (int j = 0; j < 3; j++) {
            if (tablero[i][j] == simbolo) cuenta++;
            if (tablero[i][j] == VACIO) vacio = j;
        }

        if (cuenta == 2 && vacio != -1) {
            *fila = i;
            *columna = vacio;
            return 1;
        }
    }

    // Revisar columnas
    for (int j = 0; j < 3; j++) {

        int cuenta = 0, vacio = -1;

        for (int i = 0; i < 3; i++) {

            if (tablero[i][j] == simbolo) cuenta++;
            if (tablero[i][j] == VACIO) vacio = i;
        }

        if (cuenta == 2 && vacio != -1) {

            *fila = vacio;
            *columna = j;
            return 1;
        }
    }

    // Revisar diagonal principal
    {
        int cuenta = 0, vacio = -1;

        for (int i = 0; i < 3; i++) {

            if (tablero[i][i] == simbolo) cuenta++;
            if (tablero[i][i] == VACIO) vacio = i;
        }

        if (cuenta == 2 && vacio != -1) {

            *fila = vacio;
            *columna = vacio;
            return 1;
        }
    }

    {
        int cuenta = 0, vacio = -1;

        for (int i = 0; i < 3; i++) {

            if (tablero[i][2 - i] == simbolo) cuenta++;
            if (tablero[i][2 - i] == VACIO) vacio = i;
        }

        if (cuenta == 2 && vacio != -1) {
            *fila = vacio;
            *columna = 2 - vacio;
            return 1;
        }
    }

    return 0; 
}

int main() {
    char tablero[3][3];
    printf("Ingrese el tablero 3x3 (use X, O y . para vacio):\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            scanf(" %c", &tablero[i][j]); 
        }
    }

    int fila, columna;

    if (buscarJugada(tablero, JUGADOR, &fila, &columna)) {
        printf("Jugada recomendada para GANAR: fila %d, columna %d\n", fila, columna);
    }

    else 

        if (buscarJugada(tablero, RIVAL, &fila, &columna)) {
            printf("Jugada recomendada para BLOQUEAR: fila %d, columna %d\n", fila, columna);
        }

        else {
        printf("No hay jugada inmediata para ganar o bloquear.\n");
        }

    return 0;
}