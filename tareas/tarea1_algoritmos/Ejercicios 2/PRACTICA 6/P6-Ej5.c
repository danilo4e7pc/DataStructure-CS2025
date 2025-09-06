#include <stdio.h>
#include <string.h>

#define MAX 50   
#define LEN 50   

void IngresarDatos(char nombres[MAX][LEN], float promedios[MAX], int *n) {
    
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", n);
    getchar(); 

    for (int i = 0; i < *n; i++) {

        printf("Ingrese el nombre del alumno %d: ", i+1);
        fgets(nombres[i], LEN, stdin);

        nombres[i][strcspn(nombres[i], "\n")] = '\0'; 

        printf("Ingrese el promedio final de %s: ", nombres[i]);
        scanf("%f", &promedios[i]);
        getchar();  
    }
}

void MostrarDatos(char nombres[MAX][LEN], float promedios[MAX], int n) {

    printf("\n--- LISTA DE ALUMNOS ---\n");
    
    for (int i = 0; i < n; i++) {

        printf("Alumno: %s - Promedio: %.2f\n", nombres[i], promedios[i]);
    }
}

int main() {

    char nombres[MAX][LEN];
    float promedios[MAX];
    int n = 0;
    int opcion;

    do {

        printf("\nMENU\n");
        printf("1. Ingresar datos de alumnos\n");
        printf("2. Mostrar datos\n");
        printf("3. Salir\n");
        printf("Seleccione opcion: ");
        scanf("%d", &opcion);
        getchar();

        switch(opcion) {

            case 1: 
                IngresarDatos(nombres, promedios, &n); break;
            
            case 2: 
                MostrarDatos(nombres, promedios, n); break;
            
            case 3: 
                printf("\nSaliendo del programa...\n"); break;
            
            default: 
                printf("\nOpcion invalida. Intente de nuevo.\n");
        }

    } while(opcion != 3);

    return 0;
}